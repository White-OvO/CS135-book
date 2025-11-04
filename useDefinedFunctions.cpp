#include <iostream>


using namespace std; 


int main() { 

    int v = 0; 
  do 
    { 
        if ( cin.fail() || v < 0 || v > 100 )
        { 
            cout << "Error\n" ; 
            cin.clear();
            cin.ignore(256, '\n'); 

        }

        cout << "Value: " ; 
        cin >> v;
        
   }while (cin.fail() || v < 0 || v > 100) ; 






cout << "New line " << endl; 

     int my_int = 100; // Creates an integer variable
    long long my_long_long; // Creates a long long variable
    double my_double; // Creates a double variable
    float my_float; // Creates a float variable
    bool my_bool; // Creates a boolean variable
    char my_char; // Creates a character variable
    string my_string; // Creates a string variable

        cout << "Num is : " << my_int << endl;




return 0 ; 


    /*
        Two types of Functions : 
    Void Functions - Functions that does not return a value when they finish executing.

    Value-Returning Functions - Functions that return a single value of a specific type when they finish executing.

    */
/*


What is a variable in C++?
A variable in C++ is a delcared data type that can be initalized with a specific idendifier . 

What happens when a variable is created in C++?
When are aribale is crearted in C++ the compular notices the variable and inticionalizes any data type connection 

What is memory allocation in the context of variables?
The process of reservingmemory space for data or instructions . 

Why is memory allocation important when declaring variables?



*/
}

