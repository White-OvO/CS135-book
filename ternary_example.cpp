// File: ternary_example.cpp
// This file explains the usage of ((kids != 1) ? "ren" : "") in C++
#include <iostream>

int main() {
    int kids2 = 1;
    std::cout << "You have " << kids2 << " child" << ((kids2 != 1) ? "ren" : "") << "." << std::endl;
    // Output: You have 2 children.

    // Example where it does NOT create an error:
    // If kids = 1, the output will be "You have 1 child."
    // If kids = 2, the output will be "You have 2 children."
    // The ternary operator chooses the correct suffix based on the value of kids.

    return 0;
}

int kids;

cin >> kids;

// using if statement
cout << "You have " << kids << " child";
if (kids != 1)
     cout << "ren";
cout << endl;

// using ternary operator
cout << "You have " << kids << " child" << ((kids != 1) ? "ren" : "") << endl;



/*
Explanation:
- ((kids != 1) ? "ren" : "") is a ternary (conditional) operator.
- It checks if kids is not equal to 1.
- If true, it returns "ren" (making "children"); if false, it returns "" (empty string, so "child").
- This avoids grammatical errors in the output.
- In this example, kids = 2, so the output is "children" (no error).
*/
