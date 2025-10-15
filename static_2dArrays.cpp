#include <iostream>


using namespace std; 

//static arrays ( zero postion is the first element ) 


int main () { 

//declareing a array 
//data type
const int arraySize = 10 ; 
//data type ( int, float, char, double, bool ) array name , and [size] 

// to access the output elemts , update the elements , delete the elements, use the values .
//int arr[arraySize]; 
// indexx ( non negative integer within the range of the array size ) 
//example: 
//int arr [10]; 
// index : 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9
// size :  10
// last index = size - 1 =  10 - 1 = 9
// first index = 0

int list[arraySize] ;   
// initializing the values inside the array 
for ( int i = 0; i  < arraySize; i++ ) {
 
    list[i] = i ; 
} 
// print the elelemts of the array 
for ( int i = 0; i < arraySize; i++) {

    cout << list[i] << " " ;
} 
cout << endl ;

return 0 ; 

} 

/*
To fix the errors, remove the duplicate array declaration, use the correct loop condition for array initialization, and add a body to the second for loop to use its result.

*/