#include <iostream>
#include <iomanip>


using namespace std;

int main () { 

    double example = 10.0 , example2 = 1234.456;
    cout << "Show point eexample: \n" << endl; // decical and zeros ( example 50 : it will show 50.0000) 
    cout << "NOT using show point Example of " << example << endl;  
    cout << "\nShowing the example with a show point : " << example << " " << "= "<< showpoint << example << endl; // Output: 10.000000 (depending on precision)


    double fixnum2 = 50;   
    cout << "\nFixed num1 " << fixnum2 << endl;
    cout << " W Show Point :" << showpoint << fixnum2 << endl; 

    double fixnum4 = 60;  
    cout << "\n" << fixnum4 << endl; 
    cout.unsetf(ios::showpoint); // will make the variable double print in a single format // output: 60 
    cout << "\n" << fixnum4 << endl;
    // cout >> setiosflags (ios::showpoint | ios::fixed) << fixnum2 << endl;
    
    
    cout << "\n "<< " number after : " << fixnum4 << endl; 
    cout << "Number without show point : " << fixnum4 << " num  W Show Point :" << showpoint << fixnum4 << endl; 

    cout << " Number without fix "  <<  example2 << " \t Nunber with fix " << fixed << example2 << endl; 
    return 0; 
}
