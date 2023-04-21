#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
const float pi = 3.141592;
int n;
float k = 0;

float getLength(int* h) {
    if (*h == 4) return 1.0;
    else if (*h == 8) return 0.5; // 8분음표는 0.5초
    else if (*h == 16) return 0.25; // 16분음표는 0.25초
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
    if (!xx) return 666;  // 만일 파일이 열리지 않으면 끝낸다. 
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

    zz >> n; // 음표가 몇 개인지 읽기
    eu = new int[n];
    ss = new int[n];
    T = new float[n];
    a = new int[n];
    f = new float[n];
    hh = new char[n];
    cout << n << " notes" << endl;

    for (int i = 0; i < n; i++) { 
        zz>> eu[i] >> hh[i] >> ss[i];  // eu ss는 int이고, hh는 char
        T[i] = getLength(eu+i);       // 시간이 return되는 함수
        f[i] = getfrequency(hh+i);    // 주파수가 return 되는 함수
        a[i] = getAmplitude(ss+i);    // 진폭이 return되는 함수
        k += T[i];
        cout << eu[i] << " " << hh[i] << " " << ss[i] << " " << T[i] << " " << f[i] << " " << a[i] << endl; // eu ss는 int이고, hh는 char
    }
    cout << "총 " << k << "초" << endl;

    short* data; data = new short[k * (*SampleRate)];
    makedata(T, a, f, data, n, SampleRate);
    ofstream x1("my2.wav", ios::binary | ios::out);  // 나의 wave file에 만들어진 sample 개수만큼 write한다.
    if (!x1)return 666;
    *NumChannels = 1;
    *SampleRate = 44100;
    *BitsPerSample = 16;
    x1.write(header, sizeof(header));
    x1.write((char*)data, (*SampleRate*k) * sizeof(short));
    x1.close();
    zz.close();
}