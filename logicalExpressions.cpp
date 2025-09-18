#include <iostream>

using namespace std;

int main() {

bool example1 = !false && ( 5.2 >= 0 ) ; 
cout << " \tExample of logical expression  " << std::endl; 
cout << " \n \t this is an example of !false && ( 5.2 >= 0 ) " << std::endl; 
cout << " \n the ( !false ) = True and ( 5.2 >= 0 ) = True there for the ouput of the evaluated expression is as follows : \n" << std::endl;

cout << std::boolalpha << "\nExample of logical expression: " << example1 << std::endl;

// boolean 

cout << "\n \t \t Example 2 : ! ( false && ( 5.2 >= 0)) \t " << std::endl; 
bool example2 = !(false && ( 5.2 >= 0)) ; 
cout << " \n Example 2: (5.2 >= 0) is ( True && false ) will make this false. !(false) = True  " << std::endl; 
cout << std::boolalpha << "\n resolution for example 2 : " << example2 << std::endl; 


// example 3 
bool example3 = (4 >= 0) && (101 <= 100) ; 
cout << "\n Example3 (4 >= -) && (101 <= 100): "<< std::endl; 
cout << "\n\t\t4 >= 0 Would make this True. && ( 101 <= 100) would be False ( there for T =&& F = F ) " << std::endl; 
cout << std::boolalpha<<"\n The resolution for the equation for example 3 : "<< example3 << std::endl; 

    return 0 ;

}
