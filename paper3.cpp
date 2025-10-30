#include <iostream>
#include <fstream>
using namespace std;

int main()  {
    const int row = 10;
    const int col = 15;
    string input = "";
    char arr[row][col];
    int moveInputRow;
    int moveInputCol;

    for (int i = 0; i < row; i++)

        for (int j = 0; j < col; j++)
        
            arr[i][j] = '\0';
        
    

    // Open and read from trees.csv
    ifstream iFile("trees.csv");
    if (!iFile)
    {
        cout << "Error: Could not open trees.csv\n";
        return 1;
    }

    string line;
    getline(iFile, line); // Skip header line
   //  cout << line << endl;
    while (!iFile.eof())
    {
        getline(iFile, line);
      //  cout << line << endl;
        int p = line.find(',');

        int x = stoi(line.substr(0, p));
        int y = stoi(line.substr(p + 1, line.length()));

        arr[y][x] = 't';
        arr[9][0] = 'p';
    }
 

    // verify that the x is a valid x . ( along the colum or going tothe negative colum or bigger colum
    //  neither a negative row or a postive row .
    // make sure its not on top of a tree
    //  replace p sith a - or emprt charatcer when moving p
    //  move the p where the new move coordinates


    iFile.close();

    // Display initial map

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == '\0')
                cout << "_ ";
            else
                cout << arr[i][j] << " ";
        }



        
        cout << endl;
    }

while ( true ) { 

       cout << "\n(m)ove -or- (q)uit?" << endl;
    cin >> input;
    if (input == "q" || input == "Q") {
        cout << "\nQuitting...\n" << endl;
        break;
    }
    while (input != "m" && input != "q" && input != "Q" && input != "M")
    {
        cout << "Error: Invalid option\n";
        cin.clear();
        cin.ignore(128, '\n');

for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (arr[i][j] == '\0')
                    cout << "_ ";
                else
                    cout << arr[i][j] << " ";
            }
            cout << endl;
    }
    cout <<"Your here " << endl; 
        cin >> input;
    }

    // get x and y where player wants to mvoe to move the person there
    if (input == "m" || input == "M")
    {

    }
        // reads the input prompt from the user
 while (true) {
        cout << "\nMove Row: ";
        cin >> moveInputRow;
         if (cin.fail() || moveInputRow < 0 || moveInputRow > 9) {
            cout << "\nTHIS LOOP Error: Move must be between 0 and 9\n\n";
            cin.clear();
            cin.ignore(128, '\n');
            for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (arr[i][j] == '\0')
                    cout << "_ ";
                else
                    cout << arr[i][j] << " ";
            }

            cout << endl; 
        }
         
              cout << "(m)ove -or- (q)uit? THAT LOOP " << endl;

            cin >> input;
            
        }
 
        cout << "Move Column: " << endl; 
        cin >> moveInputCol; 

    if  (moveInputCol < 0 || moveInputCol > 14) {
            cout << "\nError: Move must be between 0 and 14\n\n" << endl; 
            cin >> moveInputCol;
            
        }    


if (arr[moveInputRow][moveInputCol] == 't') {
        cout << "\nThere's a tree in your way\n\n";
        continue; 
    }
  
    }  else { 
        cout << "\nQuitting...\n" << endl;
     
    }
}
return 0;
}

// while (getline(iFile, line)) {
//     size_t comma = line.find(',');
//     if (comma != string::npos) {
//         int x = stoi(line.substr(0, comma));
//         int y = stoi(line.substr(comma + 1));

//         // Ensure x and y are within bounds
//         if (x >= 0 && x < col && y >= 0 && y < row) {
//             arr[y][x] = 't'; // x is column, y is row
//         }
//     }
// }