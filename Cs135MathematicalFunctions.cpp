#include <cmath>
#include <iostream>


using namespace std;
int main() { 
double x1 = 10, x2 = 97.25;
double distance = abs(x1 - x2);

cout << " distance is : " << distance << std::endl;


double var1 = 10.0, var2 = .000000123456789;
// showpoint
cout << var1 << " with showpoint => " << showpoint << var1 << endl;
// fixed
cout << var2 << " with fixed => " << fixed << var2 << endl;
// scientific
cout << var2 << " with scientific => " << scientific << var2 << endl;


cout << " the diffrence between scientific output and fixed output is : \t" << endl;
//std::cout << std::scientific << std::setprecision(2) << 12345.678;  << std::endl;  // Output: 1.23e+04 
/*
Example of using the showpoint, fixed, and scientific
manipulators to output floating-point numbers.
Q: what is diffrence between scientific,fixed,showpoint in c++ 
*/


return 0;
}
// example | -67.234|