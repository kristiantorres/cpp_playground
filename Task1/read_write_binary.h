/* Class for reading and writing binary files into float arrays.

__author__ = Kristian Torres
__version__ = 2022/04/26 21:40:09

//TODO generalize for !float and change data_size for num_elements or lenght
*/
#include <string>
#include <memory>

class BinaryData{      
    public:
        int _data_size;
        std::unique_ptr<float[]> data;
        
        // Constructor
        BinaryData(int data_size);

        // Read array
        void read_binary(std::string input_file_name);
        
        // Write array
        void write_binary(std::string output_file_name);

        // Setter and getter for data_size
        //void set_data_size(int data_size);
        //int get_data_size();
};