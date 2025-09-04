#include <iostream>
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

    string name = "Jordan"; //  Identifier: 'name' is another variable
                            // Variable: Holds a string value
                            // Memory Allocation: Allocates memory for the string object

    //  Whitespace: Used here to separate tokens and improve readability
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

cout << " \n\n\n \t\t\t DEF: CHP3 \n\n "; 
    string terms = 
        "Variable - A name (identifier) given to an address (byte) or grouping of addresses in memory. "
        "When a variable is created, memory is allocated.\n"
        "Memory Allocation - The process of reserving memory space for data or instructions during a program’s execution.\n"
        "Identifier - A user-defined name assigned to a variable, function, or other entities in C++.\n"
        "Keywords (Reserved Words) - Predefined words in C++ that have a specific meaning and cannot be redefined by the programmer.\n"
        "Whitespace - Spaces, tabs, and line breaks.\n"
        "Variable Declaration - The process of defining a variable by specifying its data type and identifier.";

    cout << terms << endl;


    cout<<"\n\n\t\t CHP3 Review  : \n\n "; 

    // ============================
    // General Questions
    // ============================

    // Q: What is a variable in C++?
    // A: A variable is a named location in memory used to store a value.

    int number = 10; // Example of variable declaration and initialization

    // Q: What happens when a variable is created in C++?
    // A: Memory is allocated to store the value of the variable.

    // Q: What is memory allocation in the context of variables?
    // A: It refers to reserving space in RAM for the variable's data.

    // Q: Why is memory allocation important when declaring variables?
    // A: Without memory allocation, the variable cannot store any value.

    // ============================
    // Identifiers
    // ============================

    // Q: What is an identifier in C++?
    // A: It's the name used to identify variables, functions, etc.

    int studentScore; // Valid identifier

    // Q: What characters can be used in a C++ identifier?
    // A: Letters, digits (not at the beginning), and underscores.

    // Q: What are the rules for naming identifiers in C++?
    // A: Must begin with a letter or underscore, no spaces or special characters.

    // Q: Why can't an identifier start with a digit?
    // A: It would conflict with numeric literals.

    // Q: Why can't an identifier contain whitespace?
    // A: It would break the token into separate parts.

    // Q: What happens if an identifier contains an invalid character?
    // A: The compiler throws a syntax error.

    // Q: What error occurs if an identifier starts with a number?
    // A: 'expected unqualified-id before numeric constant'

    // ============================
    // Keywords
    // ============================

    // Q: What are keywords in C++?
    // A: Reserved words that have special meaning in the language.

    // Q: Why can't keywords be used as identifiers?
    // A: They are reserved for language syntax and would cause conflicts.

    // Q: Can keywords be redefined by the programmer?
    // A: No, keywords are fixed by the language.

    // Q: What are some examples of C++ keywords?
    // A: int, return, if, else, while, for, class, etc.

    // Q: What kind of error occurs if a keyword is mistakenly used as an identifier?
    // A: Syntax error due to unexpected token.

    // ============================
    // Variable Declaration
    // ============================

    // Q: What does it mean to declare a variable in C++?
    // A: It means specifying its name and type.


    // Q: What is the syntax for declaring a variable?
    // A: dataType variableName;

    // Q: What are the components of a variable declaration?
    // A: Data type and identifier.

    // Q: How does the dataType affect a variable?
    // A: It determines the kind of data and operations allowed.

    int x = 5, y = 10; // Q: Can multiple variables be declared in a single statement? Yes.

    // ============================
    // Declaring Variables Before Use
    // ============================

    // Q: Why must a variable be declared before it is used?
    // A: The compiler needs to know its type and memory location.

    // Q: What happens if a variable is used before being declared?
    // A: Compilation error.

    // Q: What kind of error occurs when an undeclared variable is used?
    // A: 'undeclared identifier' error.

    // Q: How can you ensure a variable is properly declared before use?
    // A: Declare it at the beginning or before its first use.

    // ============================
    // Variable Initialization
    // ============================

    // Q: What does it mean to initialize a variable?
    // A: Assigning an initial value at the time of declaration.

    int score = 100;

    // Q: Why is it important to initialize variables?
    // A: To avoid undefined or garbage values.

    // Q: What happens if a variable is used before it is initialized?
    // A: It may produce unpredictable results.

    // Q: Why do uninitialized variables sometimes display random values?
    // A: They contain leftover data from memory.

    // Q: How can you ensure a variable always starts with a known value?
    // A: Always initialize it explicitly.


    return 0;
}
