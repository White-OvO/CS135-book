#include <iostream>
int main() {
int dividend, divisor, quotient;
// Get two integers from the user
std::cout << "Please enter two integers to divide:";
std::cin >> dividend >> divisor;
// If possible, divide them and report the result
if (divisor != 0) { 
quotient = dividend / divisor;
std::cout << dividend << " divided by " << divisor << " is "
<< quotient << '\n';
} else {

    
std::cout << "Division by zero is not allowed\n";
}



    return 0;
}
/*
In this code the the cin is asking for both dividend and divisor at the same time.
in one set of line. 

*/


/* 

note the program is set up  to 
exit if the divisor is 0.

*/

/*
added line 11 as the default fail condition 

*/

/*
miss using == when applied to floats

int main() {
double d1 = 1.11 - 1.10,
d2 = 2.11 - 2.10;
std::cout << "d1 = " << d1 << '\n';
std::cout << "d2 = " << d2 << '\n';
if (d1 == d2)
std::cout << "Same\n";
else
std::cout << "Different\n";
std::cout << "d1 = " << std::setprecision(20) << d1 << '\n';
std::cout << "d2 = " << std::setprecision(20) << d2 << '\n';


output: 
d1 = 0.01
d2 = 0.01
Different


}*/



/// correct way multiple optionnd got one confition correct pattern 

/*
Suppose you wish to print the word “OK” if a variable x is 1, 2, or 3. An informal
translation from English might yield:
if (x == 1 || 2 || 3)
std::cout << "OK\n";
Unfortunately, x’s value is irrelevant; the code always prints the word “OK.” Since
the == operator has lower precedence than ||, the expression
x == 1 || 2 || 3
is interpreted as
(x == 1) || 2 || 3
The expression x == 1 is either true or false, but integer 2 is always interpreted
as true, and integer 3 is interpreted as true is as well.
The correct statement would be
if (x == 1 || x == 2 || x == 3)
std::cout << "OK\n";
The revised Boolean expression is more verbose and less similar to the English
rendition, but it is the correct formulation for C++
*/