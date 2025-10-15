
#include <iostream>
using namespace std;
int main() {
//INPUTS 
    int a; 
    int b; 
    int c;
// VARIABLES 
   

    cout<< "Enter variable 1 " << std::endl;
    cin >> a;

    cout<<"Enter var 2 " << std::endl; 
    cin >> b;

   cout<<"Enter var 3 " << std::endl; 
    cin >> c;
    int max = a;
    int min = a; 
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    cout << "The max value is: " << max << endl;

    // Placeholder for finding the min of the 3 values




   if (min > b){
    min = b;
   }
   if (min > c) {
    min = c;
   }
cout << "\nMin :" << min << endl;



int mid = 0;
mid = (a + b + c) - (max + min );
cout <<"\nMiD :"<< mid <<endl;

//    if (max != b && max != c) {
//     cout << "Min of the values is: " << a <<endl;
//    }
//    if (max != a && max != b ) {
//     cout << "Min of the values is: "<< c << endl; 

//    }
//    if ( max != c && max !=  a) { 
//     cout << "Min of the values is" << b << endl; 
//    }


//    if (min <= a) { min = a;
//      else (min <= b) { min = b; if (min <= c) { min = c; } std::cout << "\nThe min num: is " << min << std::endl;
// return 0; 
// /// Min Vakue 
//     if (max == a && min == b || min == a && max == b)
//         std::cout << "The miD value :"<< c << std::endl;
    
//     if (max == a && min == c || max == c && min ==a) 
//         std::cout << "MiD value is: "<<b<< std::endl; 
    
        
//     if (max == b && min == c || max == c && min == b) 
//         std::cout << "MiD value is"<< a << std::endl;
        
        
    

    // You can add more logic here as needed
    return 0;

    }

