# CS135-book


# Mathematical.cpp UNTI CIRCLE 
<img width="506" height="354" alt="Screen Shot 2025-09-10 at 3 36 35 PM" src="https://github.com/user-attachments/assets/39e9a11f-0a3b-4e7a-8549-5156bb6f3e72" />

#week 5 Reading 
<img width="246" height="93" alt="Screen Shot 2025-09-17 at 11 13 39 PM" src="https://github.com/user-attachments/assets/fcfbb704-70cf-4e1d-8217-2511f05c88f3" />

#Week4 Reading {DowhileLoop} using the sum of a number to find the average of A number 
<img width="279" height="141" alt="Screen Shot 2025-09-22 at 4 56 21 PM" src="https://github.com/user-attachments/assets/26a22bb4-d61f-493d-96e3-ae3c28674f89" />
# Terns for a Fucntion 
<img width="702" height="464" alt="Screen Shot 2025-11-04 at 9 43 30 AM" src="https://github.com/user-attachments/assets/0cfdc9d9-3fca-4cd0-9d6c-33fac4425715" />


# week 9 Reading " What is a function" <img width="649" height="531" alt="Screen Shot 2025-11-04 at 9 22 23 AM" src="https://github.com/user-attachments/assets/9332e4ac-6ad2-4cab-b055-abd6f28e079c" />



#dentifiers
What is an identifier in C++?

What characters can be used in a C++ identifier?

What are the rules for naming identifiers in C++?

Why can't an identifier start with a digit?

Why can't an identifier contain whitespace?

What happens if an identifier contains an invalid character?

What error occurs if an identifier starts with a number?

Keywords
What are keywords in C++?

Why can't keywords be used as identifiers?

Can keywords be redefined by the programmer?

What are some examples of C++ keywords?

What kind of error occurs if a keyword is mistakenly used as an identifier?

Variable Declaration
What does it mean to declare a variable in C++?

What is the syntax for declaring a variable?

What are the components of a variable declaration?

How does the dataType affect a variable?

Can multiple variables be declared in a single statement? If so, how?

Declaring Variables Before Use
Why must a variable be declared before it is used?

What happens if a variable is used before being declared?

What kind of error occurs when an undeclared variable is used?

How can you ensure a variable is properly declared before use?

Variable Initialization
What does it mean to initialize a variable?

Why is it important to initialize variables?

What happens if a variable is used before it is initialized?

Why do uninitialized variables sometimes display random values?

How can you ensure a variable always starts with a known value?

Code Examples and Behavior
What does the following code do?

int my_int;
cout << my_int << endl;
Why does the output of an uninitialized variable change each time the program runs?

What does the following error mean?

test.cpp:7:11: error: use of undeclared identifier 'my_int'
How can you modify a program to prevent the use of an undeclared variable?

What will happen if you declare multiple variables of the same type on a single line?

Why is it important to understand how memory is assigned to variables?

What error will occur in the following code, and why?

int main() {
    int 1variable;
    return 0;
}
How can it be fixed?

What error will be produced by the following code?

int main() {
    int my var;
    return 0;
}
How can it be fixed?

What compilation error will result from this incorrect variable declaration?

int main() {
    double myDouble
    return 0;
}
How can it be fixed?

What happens if a variable is declared twice in the same scope?

int main() {
    int num;
    int num;
    return 0;
}
What error message will the compiler generate? How can it be fixed?

What error will occur if a variable is used before being declared?

int main() {
    cout << myNumber << endl;
    int myNumber;
    return 0;
}
Why does this happen? How can it be fixed?

What error does the following code cause?

int main() {
    int num;
    cout << num << endl;
    return 0;
}
Why does the output vary each time the program is executed? How can it be fixed?

What will happen if a variable is declared without a type?

int main() {
    myVariable;
    return 0;
}
