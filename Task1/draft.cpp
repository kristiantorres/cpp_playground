#include<iostream>
#include<fstream>

using namespace std;

int main(){

    float wavelet[100];

    ifstream is;
    is.open("wavelet_100_float32.bin", ios::binary);

    //TODO: find an ELI5 for line below.
    is.read(reinterpret_cast<char*>(&wavelet), sizeof(wavelet));

    cout << wavelet[10] << endl;

    is.close();
}