/* Task 1.

This program reads two binary files into two arrays, calculates 
the convolution between them and writes the result in another binary file.

Things I played with here:
- OOP, by creating a BinaryData class that reads and writes binary files
- Setters/getters to validate data of private members (taking care that number of elements of i/o array is always >=0).
- Error handling (what happens when data is invalid)? 
- Headers and implementation files

__author__ = Kristian Torres
__version__ = 2022/04/26 16:44:34
*/
#include <iostream> 
#include "read_write_binary.h"

using namespace std;

// float *convolve1d(){
    
//     return 
//     }

int main(){
    // Number of elements in array wavelet
    int wave_n = 100; 
    // Number of elements in array reflecitvity
    int ref_n = 1000; 
    // Number of elements in array trace
    int trace_n = wave_n + ref_n - 1;

    // Instance initialization
    BinaryData wavelet(wave_n);
    BinaryData reflectivity(ref_n);
    BinaryData trace(wave_n + ref_n - 1);
    
    // Reading input data
    wavelet.read_binary("/home/torresba/cpp_playground/Task1/wavelet_100_float32.bin");
    reflectivity.read_binary("/home/torresba/cpp_playground/Task1/reflectivity_1000_float32.bin");

    // Generate 1D trace with convolutional model


    return 0;
}