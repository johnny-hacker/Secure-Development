/*
User Input Program
CSC 450 Programming III
Johnny Olmedo
*/

#include <iostream>
#include <iomanip>
#include <ostream>
#include <fstream>


using namespace std;
class FileInput
{
    public:
        void get_input();
        // this function will get input from user
        void to_file();
        // this function will write to file

        void reverse();
        // this function will reverse user input

        void to_reverse();
        // this function will write to file again
    
    private:
        string user_input;
    
};

void FileInput::get_input(){
    cout << "Please Enter any input: ";
    getline(cin, user_input);

}


void FileInput::to_file() {

    fstream toFile;
    try {
        toFile.open("CSC450_CT5_mod5.txt", ios::app);
        if (!toFile) {
            throw "Unable to open file";
        }
        else {
            //begin writing to File.
            toFile << "\nOriginal User Input:";
            toFile << user_input << endl;
            cout << "Data appended Succesdully \n";
            toFile.close(); //close the write stream.
        }
        cout <<"user input: " << user_input << endl;
    }
    catch (const char* msg) {
        cerr << msg << endl;
    }
    
} 

void FileInput::reverse()
{
    int n = user_input.length();
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++){
        swap(user_input[i], user_input[n - i - 1]);
    }
    cout <<"reverse user input: " << user_input << endl;
    
} 

void FileInput::to_reverse() {
    fstream toFile;
    try {
        toFile.open("CSC450-mod5-reverse.txt", ios::app);
        if (!toFile) {
            throw "Unable to open file";
        }
        else {
            //begin writing to File.
            toFile << "\nReverse User Input:";
            toFile << user_input << endl;
            cout << "Reverse Data appended Succesdully \n";
            toFile.close(); //close the write stream.
        }
    }
    catch (const char* msg) {
        cerr << msg << endl;
    }
} 


