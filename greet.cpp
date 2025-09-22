#include <cmath> 
#include <iostream>
// explamation of :
//int main(int argc, char const *argv[]) { }
using namespace std;
int main(int argc, char const *argv[])  {
    if (argc < 2 ) { 
        cout << "Enter to use : " << argv[0] << " your name" << endl;
        return 1;
    }

    cout << "Hello, " << argv[1] << "! Welcome to the program. " << endl;

    return 0; 
} 