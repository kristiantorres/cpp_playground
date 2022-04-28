/* Task 1.

This program reads two binary files into two arrays, calculates 
the convolution between them and writes the result in another binary file.

Things I am playing with here:
- OOP, by creating a BinaryData class that reads and writes binary files
- Setters/getters to validate data of private members (taking care that number of elements of i/o array is always >=0).
- Error handling (what happens when data is invalid)? 
- Headers and implementation files for big projects

__author__ = Kristian Torres
__version__ = 2022/04/26 16:44:34
*/
#include <iostream> 
#include "read_write_binary.h"

using namespace std;

int main(){
    //BinaryData input_bin(100);
    BinaryData input_bin(100);

    cout << "Array size is " << input_bin.get_data_size() << endl;
    
    input_bin.read_binary("/home/torresba/cpp_playground/Task1/wavelet_100_float32.bin");

    return 0;
}