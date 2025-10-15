// File: assert_example.cpp
// This file explains the usage of assert(denominator != 0); in C++
#include <iostream>
#include <cassert> // Required for assert

int main() {
    int numerator = 10;
    int denominator = 2;

    // The following line checks that denominator is not zero.
    // If denominator is zero, the program will terminate with an assertion failure.
    assert(denominator != 0);

    // If the assertion passes, the division is safe.
    int result = numerator / denominator;
    std::cout << "Result: " << result << std::endl;

    // Example where assertion does NOT cause an error:
    // Here, denominator is 2 (not zero), so the assertion passes and the program continues.
    // If you change denominator to 0, the assertion will fail and the program will stop.

    return 0;
}

/*
Explanation:
- assert(denominator != 0); is used to ensure that the denominator is not zero before performing division.
- If denominator is zero, the program will terminate and print an error message.
- If denominator is not zero, the program continues normally.
- In this example, denominator = 2, so the assertion passes and no error occurs.
*/
