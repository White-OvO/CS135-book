#include <iostream> 
#include <fstream> 

using namespace std; 

int main(int argc, char const *argv[]) { 

    cout << "Odds from 0 - 99:\n";
    for (int i = 0; i < 100; i++) { 
        if ( i % 2 != 0) { 
            cout << i << endl; 

        }
    }

cout<<"\nEven from 0-99:\n";  
    for(int i = 0 ; i < 100; i++) { 
        if (i % 2 == 0) {
            cout<< i << endl;
        }
    }


    return 0; 
}