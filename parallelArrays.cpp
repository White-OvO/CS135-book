#include <iostream>

using namespace std; 

int main () { 
string name = "";
bool found = false;

string names[] = {"Alice", "Bob", "Charlie", "Diana", "Ethan"};
int scores[] = {85, 92, 78, 90, 88};
string favoriteColors[] = {"Red", "Blue", "Green", "Yellow", "Purple"};

cout << "Enter a name to search: ";
cin >> name;

for (int i = 0; i < 5; i++) {
    if (names[i] == name) {
        cout << "Found " << name << "!" << endl;
        cout << "Score: " << scores[i] << endl;
        cout << "Favorite Color: " << favoriteColors[i] << endl;
        found = true;
        break;
    }
}
    return 0;
}