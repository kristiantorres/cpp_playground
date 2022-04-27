/* Class that reads and writes binary files into arrays.

__author__ = Kristian Torres
__version__ = 2022/04/26 21:40:09
*/

#include<iostream>      //standard input and output
#include<fstream>       //for reading and writing binary files

using namespace std;    //to avoid writing std::cout, std::endl, etc. 

class BinaryData {
    public:
        // Constructor
        BinaryData(int aSize);
        // Read array
        void ReadBinary(string inFile);
        // Write array
        void WriteBinary(string outFile);   
};