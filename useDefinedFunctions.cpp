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

    return 0 ; 


    /*
        Two types of Functions : 
    Void Functions - Functions that does not return a value when they finish executing.

    Value-Returning Functions - Functions that return a single value of a specific type when they finish executing.

    */
}

