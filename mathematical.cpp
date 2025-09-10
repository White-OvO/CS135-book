#include <cmath> 
#include <iostream>

using namespace std;
int main() {
// an exponent in the form x ^ y is written in c++ 

// 4 1/2 ( bring to attention)
//double result = pow(4, 1 / 2) ; // result is 1 . 

// Formul to exucute 2 

 //   double result = sqrt(4);  // this is a square root SQRT 
// wrong 
//cout << " the result of 4 ^ 1/2 is : " << result << endl;


// wrong 
// cout << "Hello Worls "<< std::endl;



// area - pie r ^ 2 

cout <<" \t\t mathematithical functions for PI "; 
double pi = 3.14;
double r = 7.25; 
double area = pi * pow(r, 2); // area is 165.04625


cout <<" area is : " << area << std::endl;
 

// square root of a number in this case 25 
double result = sqrt(25); // result is 5 

cout << "\n square root of 25 is : " << result << std::endl; // output is 5

// radius of a circle from an area . 
// radius = square root of A / pi 
cout << "\n \t \t  Example of radius from an area " << std::endl;
double piExample = 3.14;
double areaExample = 165.04625; 
double radius = sqrt(areaExample / piExample); // radius is 7.25

cout << "\n\t radius is : " << radius << std::endl;

cout << " Absolute value \n" << std::endl;
// absolute value of a number | | 
// example | -67.234| 

// this is an example that does not match the book . 
// the book absolute value of \| -67.234 | is 2 

double absoluteValueExample = abs(-67.234); // absoluteValueExample is 67.234 
cout << " absolute value of -67.234 is : " << absoluteValueExample << std::endl; // ans : 2 
// distance =| x  - x
//              1     2     



// distance of two points 
// distance = | x1 - x2 | 
double x1 = 10 ; 
double x2 = 97.25; 
double distance = abs(x1 - x2); // distance out put is 87.25 the book out put is 7.25
cout << "\t\t \n  radius is : " << distance << std::endl;


// rounding 

cout << " \n\n \t Rounding functions " << std::endl; 
// round to nearest ~x  round(x) Round to nearest works as expected from mathm decimal 
// values with .5 ir hgier are rounded up , otherwise they are rounded down 

double  roundingNumber1 = 10 ;
double roundingNumber2 = 97.25;  // declaring the two numbers to round 
cout << " \n\t\troundingNumber1 is : "<< roundingNumber1 << std::endl; // output is 10
cout << "\n\t\t roundingNumber2 is : "<< roundingNumber2 << std::endl; // output is 97.25
double distance2  = abs(roundingNumber1 - roundingNumber2); // roundNumberSolution is 87.0

cout << "\n Round to the nearest Example "  << distance << std::endl; // output is 87
// round down ⌊x⌋ floor(x)
// round up ⌈x⌉ ceil(x)
double roundNum = round(distance2); // r is 87

cout << " round to the nearst r : " << roundNum << std::endl; 

double floorNum = floor(distance2);  // rounding the number down 

cout << " round down floorNum : " << floorNum << std::endl;

// rounding the number up 

double cielNum = ceil(distance2); // cielNum is 88
cout << " Round the ceiling up : "<< cielNum << std::endl;




cout << "\n\n\n\t\t Trigonometric Functions " << std::endl; 

//There are 3 basic trigonometric functions (see here for more complex trigonometric functions):

cout<< " \n\n sin(x) - Sine of x (x is in radians) " << std::endl;
cout<<"\n\n cos(x) - Cosine of x (x is in radians)" << std::endl;

cout <<" \n\n tan(x) - Tangent of x (x is in radians)" << std::endl; 





cout<< " \n\n \t\t\tHello World" << std::endl;

return 0;
}


/* 

#include <cmath> 
#include <iostream>

using namespace std;

int main() {
    // Calculate 4^(1/2) correctly
    double result = sqrt(4);  // Or pow(4, 0.5)

    cout << "The result of 4^(1/2) is: " << result << endl;
    cout << "Hello World" << endl;

    return 0;
}


*/