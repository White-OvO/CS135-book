#include <iostream>
using namespace std;
int main() {
    int num1 = 0; 

    // input 
    cout <<"\nEnter an integer\n--";
        cin >> num1;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(100,'\n');
    cout << "Error: invalid integer\n"; 
    
     cout << "\nEnter an integer\n**"; 
        cin >> num1;

} while(cin.fail()); // loop until valid input 

cout <<"\nEntered: " << num1 <<endl;

return 0;
}
