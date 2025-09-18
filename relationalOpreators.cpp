#include <iostream>
#include <cmath> // needed for mathematical functions
#include <iomanip> // needed for std::setprecision
using namespace std;
int main () { 
    cout << "\t\tOpreators \n " << std::endl;
// opreators 
 cout << " == Equal to \n != Not equal to \n < Less than \n > Greater than \n >= Greater than or equal to " << std::endl;

 cout << " \n\t Examples "<< std::endl; 
 cout << " \n5.5 == 5.5 ( 5.5 is equal to 5.5 ) Value |  TRUE" << std::endl; 
 cout << " \n6 != 6 ( 6 is not equal to 6 ) Value | False " << std::endl; 
 cout << " \n8 < 15 ( 8 is less than 15) Value | True " << std::endl;
 cout << " \n5.9 <= 7.5 ( 5.9 is less than or equal to 7.5) Value : True " << std::endl; 
 cout << " \n2.5 > 5.8 ( 2.5 is greater than 5.8) Value : False  " << std::endl; 
 cout << " \n12.4 >= 12.4 ( 12.4 is less than or equal to 12.4) Value : True " << std::endl; 

// relationals opreator Examples ( Characters )

 cout << " \n\t Relational operators Example " << std::endl; 
 cout << " \n'A' == 'B' ( 'A' is 65 and 'B' is 66 in Ascii. This converts this expression \n\t\t to 65 == 66 , which is false )" << std::endl; 
 cout << " \n'A' != 'B' ( 'A' is 65 and 'B' s 66 in Ascii.This converts this expression to \n\t\t 65 != 66, which is true ) Vale | True " << std::endl; 
 cout << " \n ' ' <= 'a' ( ' ' is 32 and 'a' is 97 in Ascii. this converts this expression \n\t to 32 < 97 , which is true ) value | True " << std::endl; 
 cout << " \n 'R' >= 'T' ( 'R' is 82 and 'T' is 84 in Ascii. this converts this \n\t expression to 82 > 84, which is false )Value: False " << std::endl; 
//relational Opreators Examples ( strings ) 
cout << " \n\t\trelational Opreators Examples ( strings ) " << std::endl; 
 //cout << " \"Hello\" " << Std::endl;  // incorrect way for the "  " to print with the sentence  
// cout << "\"Hello\" < \"Hi\" ( the first characters of \" Hello\" and \"Hi\" are the same, \nthe second character \'i\' of "\"hi\" . therefore, \n \"Hello\" < \"Hi\" is true " << std::endl;
 cout << "\"Hello\" < \"Hi\" \t\t(The first characters of \"Hello\" and \"Hi\" are the same. \nThe second character 'e' in \"Hello\" is less than 'i' in \"Hi\". \nTherefore, \"Hello\" < \"Hi\" is true.)" << std::endl;
// example
cout << " \n \t Example 2 : \n" << std::endl; 
int Hello;
int Hi; 
cout << "This will print 1 if Hello > Hi is true, or 0 if false. \t\n Example of Hello > Hen // should be false \t " << std::endl; 

// cout << "\t " << Hello > Hi << std::endl;  // incorrect 
cout << "\t" << (Hello < Hi) << std::endl;  // 0 is false 
cout << " \t" << (Hello > Hi) << std::endl; // 1 means True 

  return 0;
}