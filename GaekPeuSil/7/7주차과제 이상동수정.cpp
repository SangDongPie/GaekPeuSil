#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
const float pi = 3.141592;

void sum3sine(short* data, short *data2, short *data3, short *data4, float amp1, float f1, float amp2, float f2, float amp3, float f3) {
    const float pi = 3.141592;
    float dt = 1. / 44100.0;
    for (int i = 0; i < (5 * 44100); i++) {
        data2[i] = amp1 * sin(2.0 * pi * f1 * i * dt);
        data3[i] = amp2 * sin(2.0 * pi * f2 * i * dt);
        data4[i] = amp3 * sin(2.0 * pi * f3 * i * dt);
        data[i] = amp1 * sin(2.0 * pi * f1 * i * dt) + amp2 * sin(2.0 * pi * f2 * i * dt) + amp3 * sin(2.0 * pi * f3 * i * dt);
    }
}
int main() {
    char header[44];
    ifstream xx("Beatles.wav", ios::binary | ios::in);
    if (!xx) return 666;  // 만일 파일이 열리지 않으면 끝낸다. 
    xx.read(header, 44 * sizeof(char));
    short* NumChannels;
    NumChannels = (short*)(header + 22);
    cout << *NumChannels << endl;
    int* SampleRate;
    SampleRate = (int*)(header + 24);
    cout << *SampleRate << endl;
    short* BitsPerSample;
    BitsPerSample = (short*)(header + 34);
    cout << *BitsPerSample << endl;
    xx.close();

    int N = *SampleRate * 5;
    float amp1 = 10000.0;
    float f1 = 440.0;
    float amp2 = 5000;
    float f2 = 220.0;
    float amp3 = 7500;
    float f3 = 330;

    short* data;
    short* data2;
    short* data3;
    short* data4;
    data = new short[N];
    data2 = new short [N];
    data3 = new short [N];
    data4 = new short [N];

    sum3sine(data, data2, data3, data4, amp1, f1, amp2, f2, amp3, f3); //바이너리 파일 작성
    ofstream x2("my.wav", ios::binary | ios::out);
    if (!x2)return 666;
    *NumChannels = 1;
    *SampleRate = 44100;
    *BitsPerSample = 16;
    x2.write(header, sizeof(header));
    x2.write((char*)data, N * sizeof(short));

    //txt파일 작성
    ofstream x3;
    x3.open("new_wav.txt");
    int k = N / 500; //
    for (int i = 0; i < k; i++) {
        x3 << i <<  " " << data2[i] << " " << data3[i] << " " << data4[i] << " " << data[i] << endl;
    }
    x2.close();
    x3.close();
}
