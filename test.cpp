/*******************************************************************************
Welcome to the CSI 116 Contact Info Assignment.
The purpose of this program is to store contact information entered by the...
...user in a file that is accessible even when the program is not running.
The file will include previous entries.
The program functions by making use of C++'s input/output classes.
*******************************************************************************/
#include <iostream>
// including fstream to allow input/output operations from/to a file
#include <fstream>
using namespace std;
int main()
{
    // welcome message
    cout << "Welcome to the Contact Information Database.\n\n";

    // declaring output file stream (to write data to a file)
    ofstream ap_output;

    // opening the file for output operations
    // output will be appended to the end of file called 'contacts.txt'
    ap_output.open("contacts.txt", ios::app);

    // declaring variables to store name and phone number
    string ap_name;
    string ap_phoneNumber;

    // prompts for name and phone number, cin to read in user input
    cout << "Enter contact's first name:\n";
    cin >> ap_name;
    cout << "Enter contact's phone number:\n";
    cin >> ap_phoneNumber;

    // putting user input into output file
    ap_output << "First Name: " << ap_name << "\n" << "Phone Number: "
    << ap_phoneNumber << "\n\n";

    // closing out output operations
    ap_output.close();

    // ending message with information on where to find output
    cout << "\nDone! You will find this entry and all previous entries in "
    << "the file 'contacts.txt' in the current directory.\n";

return 0;
}