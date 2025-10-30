#include <iostream>
#include <fstream>


using namespace std; 

int main () { 

ifstream iFile;
string line = "";


//int location = 3; 
iFile.open("input.txt");

getline(iFile, line) ;

//getline(iFile, line); 

//location = line.find(',');
//first = line.substr(3,location);
// this will read from the file until there is nothing to read. 
while(getline(iFile,line)) { 
    cout << line << endl; 
}


    return 0;
}