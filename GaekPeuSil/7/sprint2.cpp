#include<iostream>
#include<fstream>
using namespace std;
int main() {
	char header[44];
	ifstream xx("beatles.wav", ios::binary | ios::in);
	if (!xx) return 666;  // ���� ������ ������ ������ ������. 
	xx.read(header, 44 * sizeof(char));
	short* n;   n = (short*)(header + 22);  cout << *n << endl; //numchannels
	int* fs;   fs = (int*)(header + 24);  cout << *fs << endl; //samplerate
	int* b;   b = (int*)(header + 28);  cout << *b << endl; //biterate

	int N = fs[0] * 10;   // 10�� �з�
	short* data; data = new short[N];
	*n = 1;
	*b = n[0] * fs[0] * sizeof(short);
	//Sample 1���� �����ϴ� byte) x (1�ʴ� Sample ��) x (ä�� ��)
	//= (Sample 1���� �����ϴ� byte) x 441000 x 1

	xx.read((char*)data, N * sizeof(short)); // ����� ���� �� xx.close();�ϱ� ���� 10�� �з� �����͸� �д´�.

	ofstream yy("my.wav", ios::binary | ios::out);
	if (!yy) return 666;  // ���� ������ ������ ������ ���α׷��� ������. 
	yy.write(header, 44 * sizeof(char)); // ����� ����. 
	yy.write((char*)data, N * sizeof(short));    // ����� �̾ 10�� �з� ����.
	yy.close();
}