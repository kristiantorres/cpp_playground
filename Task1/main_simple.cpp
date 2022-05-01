#include<iostream>
#include<fstream>

using namespace std;

// // Function to display 1D float array as a column vector 
// void display(float* array, int n) {
//     int i;
//     for (i=0; i<n; i++){
//         cout << array[i] << endl;
//     }
// }

void binary2float(string file_name, float* array, int n){
    int i;
    float tmp[n] = {0.};

    std::ifstream file(file_name, ios::binary);
    if (file.is_open()) {
        file.read((char * ) & tmp, sizeof(tmp));     
        
        for (i=0; i<n; i++){
            array[i] = tmp[i];
        } 

        file.close();
    }
    else
        cout << "Error! File cannot be opened!" << endl;        
}

void float2binary(string file_name, float* array, int n){
    int i;
    float tmp[n] = {0.};
    
    for (i=0; i<n; i++){
            tmp[i] = array[i];
        } 
    
    std::ofstream file(file_name, ios::binary);
    if (file.is_open()) {
        file.write((char * ) & tmp, sizeof(tmp));     
        file.close();
    }
    else
        cout << "Error! File cannot be opened!" << endl;        
}

//float * convolve1d(float* array1, int n1, float* array2, int n2){
void convolve1d(float* array1, int n1, float* array2, int n2){
    int i, j;
    int n = n1 + n2 -1;

    // declare & initialize result array to zero! This is crucial to avoid weird outputs.
    float result[n] = {0};

    for (i=0; i<n1; i++){
        for (j=0; j<n2; j++){
            result[i+j] = result[i+j] + array1[i]*array2[j];
        }
    }

    // write result to binary
    float2binary("result.bin", result, n);

    cout << "Trace of " << n << "samples stored in result.bin." << endl;
}

int main(){

    int n1 = 100;
    int n2 = 1000;

    float wavelet[n1] = {0.};
    float reflectivity[n2] = {0.};
    
    // Read input files into wavelets and reflectivity arrays
    binary2float("wavelet_100_float32.bin", wavelet, n1);
    binary2float("/home/torresba/cpp_playground/Task1/reflectivity_1000_float32.bin", reflectivity, n2);
    

    convolve1d(wavelet, n1, reflectivity, n2);

    cout << "Program finished." << endl;
    
    return 0;
}