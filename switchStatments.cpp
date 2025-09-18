#include<iostream>
#include<iomanip> 


using namespace std; 

int main () { 
double length,width; 
char selection ; 


// getting length 
cout<< "Enter a length\n**"; 
cin >> length; 


// getting width 
cout<<"Enter a width\n**";
cin>>width; 

//  bool valid = false;
//     while (selection != 'a' || 'A'|| 'B' ||' b' ) {
// //choosing the type of equation to solve 

// cout<<"Choose (A/a)rea or (P/p)erimeter\n**";
// cin>> selection; 

    // switch case for the choose Area or Preimeter 


        cout << "Choose (A/a)rea or (P/p)erimeter\n**";
        cin >> selection;

switch (selection) { 
    case 'A' : 
    case 'a' : 
        cout <<"Area : " <<length * width << endl; 
        break;  
    


    // switch case for Preimeter 
    
//switch(selection) { 
    case 'P' : 
    case 'p' : 
        cout <<"Premieter: " << 2 * length + 2 * width << endl; 
        break;
    default : 
    cout<<"Invalid Seletion!\n";
//}
    return 0;
        }
    
}