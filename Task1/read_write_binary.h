/* Class for reading and writing binary files into float arrays.

__author__ = Kristian Torres
__version__ = 2022/04/26 21:40:09

//TODO generalize for !float and change data_size for num_elements or lenght
*/
#include <string>

class BinaryData{
    private:
        // All files have a specific data size
        int _data_size;
    
    public:       
        // All files have a specific file name
        std::string file_name;  // defined within read_binary or write_binary   
        
        // Constructor
        BinaryData(int data_size);

        // Setter and getter for data_size
        void set_data_size(int data_size);
        int get_data_size();

        // Read array
        void read_binary(std::string input_file_name);
        
        // Write array
        void write_binary(std::string output_file_name);   
};