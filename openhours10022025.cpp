#include<cmath>
#include<iostream>

using namespace std;

int main () { 
// check if the number is a leap year 
cout << "Enter year"<<endl;
int year;
cin >> year;
/* 
years divisible by 4, with an exception for
 century years (those ending in "00"). Century 
 years are not leap years unless they are also 
 divisible by 400. 

*/



if ( year % 4 == 0) { 
    cout<<year << " Is A leap year" << endl;
}
else  ( year % 100 == 0) { 
    
       if ( year % 400 != 0 ) {
       cout << year << " is NOT a leap year "<< endl;
    }
    cout << year << " Is A leap year " << endl; 
}
else if{ 
    cout<<year<<" is not a leap year "<< endl; 
}

    return 0;
}