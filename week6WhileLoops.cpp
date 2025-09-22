#include <cmath> 
#include <iostream>
// explamation of :
//int main(int argc, char const *argv[]) { }
using namespace std;
int main() {
    cout << "Hello World" << std::endl;
//int main( )
    // while loop 
    float num, sum =0; // declares num and sum as floats 
    int count = 0;

    while (count < 5) { 
        //inout value from user 
        cout << "enter a number\n**"; 
        cin >> num; 
        sum += num;

        // Increase our loop control variable 
        count++;
    }

    cout << "Average: " << sum / count << endl; 
    return 0; 
}