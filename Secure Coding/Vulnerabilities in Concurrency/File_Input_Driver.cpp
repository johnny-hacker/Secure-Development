#include "File_Input_class.cpp"

// start main
int main () {

	// create instance of file input class
	FileInput file_obj;
    file_obj.get_input();
    file_obj.to_file();
    file_obj.reverse();
    file_obj.to_reverse();

    return 0;
} //end main