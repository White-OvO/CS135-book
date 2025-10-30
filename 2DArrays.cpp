#include <iostream> 
/// out put for this program 
/*
0 1 2 3 4 5 6 7 8 9 
0 1 2 3 4 5 6 7 8 9 
*/

using namespace std; 

int main() { 

//cout << "Hello world" << endl; 
// declaring rows and colums 
const int m=2, n=10;
int arr[m][n];


for (int i = 0; i < m;i++) { 
    for ( int j=0; j < n; j++) { 
        arr[i][j]= j; 
     }

}


for ( int i = 0; i < m; i++) { 
    for ( int j = 0; j < n; j++ ){

        cout << arr[i][j] << " "; 

    }
    cout << endl; 
}
    return 0; 
}