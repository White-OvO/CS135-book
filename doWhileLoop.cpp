/*
Example of taking the average of numbers via a do...while loop.
*/
#include <iostream>
using namespace std;
int main() {
double input, sum = 0;
int count = 0;
const int SIZE = 5;
do {
// Get input
cout << "Enter an integer\n**";
cin >> input;
// Sum inputs
sum += input;
// Count inputs
count++;
} while(count < SIZE); // Loop 5 times
// Output average
cout << "Average of entered numbers: " << sum / count << endl;
// End program
return 0;
}
