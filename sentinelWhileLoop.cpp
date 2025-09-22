#include <iostream> 
#include <fstream> 

using namespace std; 

int main(int argc, char const *argv[]) { 
    const char SENTINEL = '#';
    char inputChar = ' ';
    string acctNumber = ""; 


    cout << "Enter your account number (Enter '#' when done): \n";

    // loop until sentinel is hit 
    while (inputChar != SENTINEL) { 
        cout <<"**"; 
        cin >> inputChar; 

        switch (inputChar) { 
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5': 
            case '6':
            case '7':
            case '8':
            case '9': 
                acctNumber += inputChar; 
                break; 
            case '#': 
                cout << "Sentinel Hit!\n"; 
                break;     
            default: 
            cout<< "Error:Invalid character \n Try Again:\n";
        }

    }
    cout << "acctNumber = " << acctNumber << endl;
    
    return 0; 
}