#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    const int row = 10;
    const int col = 15;
    char arr[row][col];
    int moveRow, moveCol;
    int playerRow = 9, playerCol = 0;
    char input;

    // Initialize map with empty spaces
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            arr[i][j] = '\0';

    // Load trees from file
    ifstream iFile("trees.csv");
    if (!iFile) {
        cout << "Error: Could not open trees.csv\n";
        return 1;
    }

    string line;
    getline(iFile, line); // Skip header

    while (getline(iFile, line)) {
        int comma = line.find(',');
        int x = stoi(line.substr(0, comma));
        int y = stoi(line.substr(comma + 1));
        arr[y][x] = 't';
    }

    iFile.close();

    // Place player
    arr[playerRow][playerCol] = 'p';

    // Function to print map
    auto printMap = [&]() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << (arr[i][j] == '\0' ? "_ " : string(1, arr[i][j]) + " ");
            }
            cout << endl;
        }
    };

    printMap();

    // Game loop
    while (true) {
        cout << "\n(m)ove -or- (q)uit? ";
        cin >> input;

        while (cin.fail() || (input != 'm' && input != 'M' && input != 'q' && input != 'Q')) {
            cout << "Error: Invalid option\n";
            cin.clear();
            cin.ignore(128, '\n');
            printMap();
            cout << "\n(m)ove -or- (q)uit? ";
            cin >> input;
        }

        if (input == 'q' || input == 'Q') {
            cout << "\nQuitting...\n";
            break;
        }

        // Get move row
        cout << "\nMove Row: ";
        cin >> moveRow;
        while (cin.fail() || moveRow < 0 || moveRow >= row) {
            cout << "\nError: Move must be between 0 and 9\n\n";
            cin.clear();
            cin.ignore(128, '\n');
            printMap();
            cout << "\nMove Row: ";
            cin >> moveRow;
        }

        // Get move column
        cout << "Move Column: ";
        cin >> moveCol;
        while (cin.fail() || moveCol < 0 || moveCol >= col) {
            cout << "\nError: Move must be between 0 and 14\n\n";
            cin.clear();
            cin.ignore(128, '\n');
            cout << "Move Column: ";
            cin >> moveCol;
        }

        // Check for tree
        if (arr[moveRow][moveCol] == 't') {
            cout << "\nThere's a tree in your way\n\n";
            continue;
        }

        // Move player
        arr[playerRow][playerCol] = '\0';
        arr[moveRow][moveCol] = 'p';
        playerRow = moveRow;
        playerCol = moveCol;

        printMap();
    }

    return 0;
}
