/* Task 1.

This program reads two binary files into two arrays, calculates 
the convolution between them and writes the result in another binary file.

__author__ = Kristian Torres
__version__ = 2022/04/26 16:44:34
*/
#include "read_write_binary.h"

int main(){
    BinaryData input_bin(100);

    input_bin.read_binary("/home/torresba/cpp_playground/Task1/wavelet_100_float32.bin");
    
    return 0;
}