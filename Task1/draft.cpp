// #include<iostream>
// #include<fstream>

// using namespace std;

// int main(){

//     float wavelet[100];

//     ifstream is;
//     is.open("wavelet_100_float32.bin", ios::binary);

//     //reinterpret_cast: converts a pointer of some data type into a pointer of another data type, 
//     // in this case, converts the pointer of float (&wavelet) into a pointer of char.
//     is.read(reinterpret_cast<char*>(&wavelet), sizeof(wavelet));

//     cout << wavelet[10] << endl;

//     is.close();
// }