#include <iostream>
#include <random>
#include <string>
using namespace std;



/*
Example of con st: trying to modify a const variable
will cause a compiler error. Uncomment the line below
to see the error in action.
*/

int main() {
    // Constant
    const double pi = 3.14159;

    // Uncommenting the next line will cause a compiler error:
    // pi = 3; //  Error: assignment of read-only variable 'pi'

    cout << "The value of pi is: " << pi << endl;
cout << "\n\n \t ";
// initalization of a variable 

int my_int; // Creates an integer variable
long long my_long_long; // Creates a long long variable
double my_double; // Creates a double variable
//float my_float; // Creates a float variable
bool my_bool; // Creates a boolean variable
char my_char; // Creates a character variable
string my_string; // Creates a string variable

my_string = " chris "; 
cout << "\n\n "; 

// wrong outout 
//cout << " this is an example of variable " + my_String; 

 cout << "This is an example of variable: " << my_string << endl; 

    double my_floatPI = 3.14;
cout <<"\n\n";
cout << "This is an example of variable: " <<  my_floatPI << endl; 
//  Variable Declaration: Declaring variables with a data type and identifier
    
    int age = 30;          // Identifier: 'age' is the name of the variable
                           // Variable: 'age' refers to a memory location holding an integer
                           // Memory Allocation: Memory is reserved for 'age' during execution
                           
                           // sets an update to name " string "
    string name = "Jordan"; //  Identifier: 'name' is another variable
                            // Variable: Holds a string value
                            // Memory Allocation: Allocates memory for the string object
// sets a random number to age of the user 
    std::random_device rd; //seed source 
    std::mt19937 gen(rd()); //Mersenne Twister engine 
                      
    string new_user = "Users_name"; // New  string 
    int age_new_user = rand() % 82 + 18;



    //  Whitespace: Used here to separate tokens and improve readability
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

cout << " \n\n\n \t\t\t DEF: CHP3 \n\n "; 
    string terms = "Variable - A name (identifier) given to an address (byte) or grouping of addresses in memory. " 
        "When a variable is created, memory is allocated.\n"
        "Memory Allocation - The process of reserving memory space for data or instructions during a program’s execution.\n"
        "Identifier - A user-defined name assigned to a variable, function, or other entities in C++.\n"
        "Keywords (Reserved Words) - Predefined words in C++ that have a specific meaning and cannot be redefined by the programmer.\n"
        "Whitespace - Spaces, tabs, and line breaks.\n"
        "Variable Declaration - The process of defining a variable by specifying its data type and identifier.";

    cout << terms << endl;

    char Visible = 'Y';
    //cout << " This string is being declares TRUE "visble ;
            // missing << before variable 
    cout << "This string is being declared TRUE " << Visible;


    cout<<"\n\n\t\t CHP3 Review  : \n\n "; 

   
    return 0;
}
