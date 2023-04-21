#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
const float pi = 3.141592;
int n;
float k = 0;

float getLength(int* h) {
    if (*h == 4) return 1.0;
    else if (*h == 8) return 0.5; // 8����ǥ�� 0.5��
    else if (*h == 16) return 0.25; // 16����ǥ�� 0.25��
    }
float getfrequency(char* f) {
    if (*f == 'C')  return 130.81;
    else if (*f == 'D')  return 146.83;
    else if (*f == 'E')  return 164.81;
    else if (*f == 'F')  return 174.61;
    else if (*f == 'G')  return 196.00;
    else if (*f == 'A')  return 220.00;
    else if (*f == 'B')  return 246.94;
}
int getAmplitude(int* e) {
    return *e * 1000;
}
void makedata(float* T, int* a, float* f, short* data, int n, int* SR) {
    int p = 0;
    float dt = 1. / *SR;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < T[i] * (*SR); j++) { data[j+p] = (*a) * sin(2.0 * pi * f[i] * j * dt); }
        p += T[i] * (*SR);
        }
}

int main() {
    char header[44];
    ifstream xx("Beatles.wav", ios::binary | ios::in);
    if (!xx) return 666;  // ���� ������ ������ ������ ������. 
    xx.read(header, 44 * sizeof(char));
    short* NumChannels;
    NumChannels = (short*)(header + 22);
    int* SampleRate;
    SampleRate = (int*)(header + 24);
    short* BitsPerSample;
    BitsPerSample = (short*)(header + 34);
    xx.close();

    int* eu, *ss, *a;
    float* f, *T;
    char* hh;
 
    ifstream zz("piece.txt");

    zz >> n; // ��ǥ�� �� ������ �б�
    eu = new int[n];
    ss = new int[n];
    T = new float[n];
    a = new int[n];
    f = new float[n];
    hh = new char[n];
    cout << n << " notes" << endl;

    for (int i = 0; i < n; i++) { 
        zz>> eu[i] >> hh[i] >> ss[i];  // eu ss�� int�̰�, hh�� char
        T[i] = getLength(eu+i);       // �ð��� return�Ǵ� �Լ�
        f[i] = getfrequency(hh+i);    // ���ļ��� return �Ǵ� �Լ�
        a[i] = getAmplitude(ss+i);    // ������ return�Ǵ� �Լ�
        k += T[i];
        cout << eu[i] << " " << hh[i] << " " << ss[i] << " " << T[i] << " " << f[i] << " " << a[i] << endl; // eu ss�� int�̰�, hh�� char
    }
    cout << "�� " << k << "��" << endl;

    short* data; data = new short[k * (*SampleRate)];
    makedata(T, a, f, data, n, SampleRate);
    ofstream x1("my2.wav", ios::binary | ios::out);  // ���� wave file�� ������� sample ������ŭ write�Ѵ�.
    if (!x1)return 666;
    *NumChannels = 1;
    *SampleRate = 44100;
    *BitsPerSample = 16;
    x1.write(header, sizeof(header));
    x1.write((char*)data, (*SampleRate*k) * sizeof(short));
    x1.close();
    zz.close();
}