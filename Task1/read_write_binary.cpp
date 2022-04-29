#include <iostream>             //standard input and output
#include <fstream>              //for reading and writing binary files
#include "read_write_binary.h"

using namespace std;            //to avoid writing std::cout, std::endl, etc. 

BinaryData::BinaryData(int data_size)
: _data_size{data_size}, data{new float[_data_size]} //memory initialization
{} 

void BinaryData::read_binary(string inFile){
    float tmp[_data_size];
    
    ifstream is;
    is.open(inFile, ios::binary);
    is.read(reinterpret_cast<char*>(&tmp), _data_size);
    is.close();

    for (int i=0; i<_data_size; i++){
        data[i] = tmp[i];
    }
}

//BinaryData::BinaryData(int data_size)
// {
//     // Define size of i/o array
//     try{
//         set_data_size(data_size);
//     }
//     catch (const char *txtException){
//         cout << "Exception: " << txtException << endl; 
//         std::exit(1);
//     }
// }

// //Im doing setter/getter to force the if >= 0 statement every time data_size is declared
// void BinaryData::set_data_size(int data_size){
//     if (data_size <= 0)
//         throw "data_size must be > 0.";

//     _data_size = data_size;
// }

// int BinaryData::get_data_size(){
//     return _data_size;
// }

// //TODO return a float array? I can't do this in C++
// void BinaryData::read_binary(string inFile){
//     // Create data array   
//     float data[_data_size];

//     ifstream input;
//     input.open(inFile, ios::binary);
//     input.read(reinterpret_cast<char*>(&data), sizeof(data));
    
//     //testing that reading worked
//     cout << "10th element of input array is " << data[10] << endl;

//     input.close();
// }