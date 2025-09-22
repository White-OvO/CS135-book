#include <iostream> 
#include <fstream> 

using namespace std; 

int main(int argc, char const *argv[]) { 
    //control the bolling value 
     bool flag = false; 
     string user_name;
     string password_input;
     const string USERNAME ="Bob";
     const string password = "pass"; 

     // loop until flag is true 
     while(!flag) { 
        cout<<"enter a usernmae\n**";
        cin >> user_name; 
        cout << "enter a password\n**";
        cin >>password_input; 
if (user_name == USERNAME && password_input == password) 
{
    cout << "Hi, Chris\n" ;
    flag = true;
}
else  { 
    cout << "Your not " << user_name << " Go Away!\n"; 
}
 
     }
    
    return 0;
}