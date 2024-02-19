// <-------------------- First C++ Program --------------------->

// #include<iostream>

// int main() {
//     std::cout << "Hello World!";
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     cout << "Hello World!";
//     return 0;
// }

// <--------------------------- comment ------------------------------->
// #include<iostream>
// using namespace std;
// // single line comment
// /* multiline comment */

// int main() {
//     // I am printing My college name
//     cout<<"B C College\n";
//     cout<<"I am learning c++";
//     return 0;
// }

// <----------------------- variables ----------------------------->
// #include<iostream>
// using namespace std;

// int main() {
//     int a = 3;
//     float b = 4;
//     char c = 'R';
//     cout<<"Hello World\n" << a << b << c;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int myNum = 15;
//     cout << myNum;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int myNum;
//     myNum = 15;
//     cout << myNum;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int myNum = 15;
//     myNum = 10;
//     cout << myNum;
//     return 0;
// }

// A demonstration of other data types:->
// int myNum = 5; // Integer, (without decimal)
// double myFloatNum = 5.99; // Floating point Number, (with decimal)
// char myLetter = 'A'; // character
// bool myBollean = 1; // Bollean (true or false)

// #include<iostream>
// using namespace std;

// int main() {
//     int myAge = 20;
//     cout << "I am " << myAge << " years old.";
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int x = 5;
//     int y = 6;
//     int sum = x + y;
//     cout << "sum is:\n" << x << " + " << y << " = " << sum;
//     return 0;
// }

// #include<iostream>

// int main() {
//     int x = 15;
//     int y = 10;
//     int sum = x + y;
//     std::cout<<"sum is:\n"<<x<<" + "<<y<<" = "<<sum;
//     return 0;
// }

// <-------------------- Declare Many Variables ----------------------------->
// #include<iostream>
// using namespace std;

// int main() {
//     int x = 5, y = 6, z = 50;
//     cout << x + y + z;
//     return 0;
// }

// <--------------------- One value to multiple variables -------------------------->
// #include<iostream>
// using namespace std;

// int main() {
//     int x, y, z;
//     x = y = z = 50;
//     cout << x + y + z;
//     return 0;
// }

// <------------------------- constant ----------------------------->
// #include<iostream>
// using namespace std;

// int main() {
//     const int myNum = 15; // myNum will always be 15
//     myNum = 10; // error : assignment read - only variable 'myNum'
//     cout << myNum;
//     return 0;
// }

// You should always declare the variable as constant when you have values that are unlikely to change:
// #include<iostream>
// using namespace std;

// int main() {
//     const int minutesPerHour = 60;
//     const float PI = 3.14;
//     cout << minutesPerHour << "\n" << PI;
//     return 0;
// }

// <-------------------------- Input and output Example ------------------------------>

// #include<iostream>
// using namespace std;

// int main() {
//     int num1, num2;
//     cout<<"Enter the value of num1:\n";
//     cin>>num1;
//     cout<<"Enter the value of num2:\n";
//     cin>>num2;
//     cout<<"Sum is " << num1 + num2;
//     return 0;
// }

// <------------------------- Header Files ------------------------------>
// There are two types of header files:
// 1. System header files: It comes width the compiler
// #include<iostream>
// 2. User defined header files: It is written by the programmer
// #include "this.h" //--> This will produce an error if this.h is no present in the current directory

// using namespace std;

// int main() {
//     cout<<"This is a Hello World Program";
//     return 0;
// }

// <---------------------------- User Input ------------------------------>
// #include<iostream>
// using namespace std;

// int main() {
//     int x;
//     cout << "Type a Number: ";
//     cin >> x;
//     cout << "Your Number is: " << x;
//     return 0;
// }

// Creating a Simple Calculator
// In this example, the user must input two numbers. Then we print the sum by calculating (adding) the two numbers:
// #include<iostream>
// using namespace std;

// int main() {
//     int x, y;
//     int sum;
//     cout << "Type a Number: ";
//     cin >> x;
//     cout << "Type an Another Number: ";
//     cin >> y;
//     sum = x + y;
//     cout << "Sum is: " << sum;
//     return 0;
// }

// <-------------------------- Data Type In C++ ----------------------------->
// #include <iostream>
// using namespace std;

// int main()
// {
//     // Creating variables
//     int num = 28;                // Integer (whole number)
//     float pi = 3.14;             // Floating point number
//     double myDoubleNum = 1.18;  // Floating point number
//     char letter = 'R';           // Character
//     bool myBoolean = true;       // Boolean
//     string text = "Hello";       // String

//     // Print variable values
//     cout << "int: " << num << endl;
//     cout << "float: " << pi << endl;
//     cout << "double: " << myDoubleNum << endl;
//     cout << "char: " << letter << endl;
//     cout << "bool: " << myBoolean << endl;
//     cout << "String: " << text << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int pi = 3.14; // int decimal number ko lega but output maei only 3 print karega, nakee 3.14.
//     cout << pi;    // Output --> 3
//     return 0;
// }

// <---------------------------- Scientific Numbers ---------------------------------->
// A floating point number can also be a scientific number with an "e" to indicate the power of 10:
// #include<iostream>
// using namespace std;

// int main() {
//     float f1 = 35e3;
//     double d1 = 12E4;
//     cout << f1 << endl;
//     cout << d1 << endl;
//     return 0;
// }

// <----------------------------------------- String ------------------------------------------->
// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
//     string greeting = "B C College";
//     cout << greeting;
//     return 0;
// }

// <------------------------------- Operator (1. Arithmetic operator) ------------------------------->
// #include<iostream>
// using namespace std;

// int main() {
//     int sum1 = 250;          // 250
//     int sum2 = sum1 + 150;   // 400 (250 + 150)
//     int sum3 = sum2 + sum2;  // 800 (400 + 400)

//     cout << sum3;            // Output --> 800
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int x = 5;
//     cout << x++ << endl;
//     cout << ++x << endl;
//     cout << x-- << endl;
//     cout << --x << endl;
//     return 0;
// }

// <---------------------------- Operator (2. Assignment operator) --------------------------->
// #include<iostream>
// using namespace std;

// int main() {
//     int x = 5; 
//     x = x << 3;
//     cout << x;
//     return 0;
// }

// <------------------------- Scope resolution operator ":" ------------------------------------>
// #include<iostream>
// using namespace std;

// int c = 45; // Global variable

// int main() {
//     int a, b, c;
//     cout << "Enter the value of a: ";
//     cin >> a;
//     cout << "Enter the value of b: ";
//     cin >> b;
//     c = a + b;
//     cout << "The sum is: " << c << endl;
//     cout <<"The global value c is: " << ::c; // "::" It is called, Scope resolution operator in C++.
//     return 0;
// }

// C++ program to show that we can access a global variable
// using scope resolution operator :: when there is a local
// variable with same name
// #include<iostream>
// using namespace std;

// int x; // Global variable x

// int main() {
//     int x = 10; // Local variable x
//     cout << "Value of global x is " << ::x << endl;
//     cout << "Value of local x is " << x << endl;
//     return 0;
// }

// <------------------------- Float, double and long double Literals --------------------------------->
// #include<iostream>
// using namespace std;

// int main() {
//     // by default decimal number(for example --> 3.34) double maei hota hai.
//     float f = 3.34f;
//     long double d = 3.34l;
//     cout << "The value of f is " << f;
//     cout << "\nThe value of d is " << d;
//     cout <<"\nThe size of 3.34 is " << sizeof(3.34) << endl;
//     cout << "The size of 3.34f is " << sizeof(3.34f) << endl;
//     cout << "The size of 3.34F is " << sizeof(3.34F) << endl;
//     cout << "The size of 3.34l is " << sizeof(3.34l) << endl;
//     cout << "The size of 3.34L is " << sizeof(3.34L) << endl;
//     return 0;
// }

// <------------------------------ Reference Variables -------------------------------------->
// Rohit(name) --------> Abhay(house name) ---------> Programmer(college name) --------> Dangerous Coder(Call me)
// Mera name Rohit hai, but ghar par mujha call me Abhay name or college maei Programmer name and call yourself(Khud ko) Dangerous Coder, it is called Reference variable.
// Example for Reference variable ------->
// #include<iostream>
// using namespace std;

// int main() {
//     // A reference variable is one that refers to the address of another variable.
//     int x = 455;
//     int & y = x;     // "&" this is a reference variable symbol.
//     cout << x << endl;
//     cout << y;
//     return 0;
// }

// <--------------------------------------- Type Casting -------------------------------------------->
// #include<iostream>
// using namespace std;

// int main() {
//     int x = 45;
//     float y = 45.46;

//     cout << "The value of x is " << x << endl;
//     cout << "The value of y is " << y << endl << endl;

//     cout << "The value of x is " << (float) x << endl;
//     cout << "The value of x is " << float (x) << endl << endl;

//     cout << "The value of y is " << (int) y << endl;
//     cout << "The value of y is " << int (y) << endl << endl;

//     cout << "The expression is " << x + y << endl;       // output -----> 45 + 45.46 = 90.46
//     cout << "The expression is " << x + (int)y << endl;  // output -----> 45 + 45 = 90
//     cout << "The expression is " << x + int(y) << endl;  // output -----> 45 + 45 = 90
//     return 0;
// }

// <---------------------------------------- Constants in C++ -------------------------------------------->
// #include<iostream>
// using namespace std;

// int main() {
    // float pi = 3.14;
    // cout << "The value of pi is " << pi;
    // pi = 3.1468;
    // cout << "\nThe value of pi is " << pi;
    // But maei chahata hu ke pi ke value change na ho. So, const keyword ka use karte hai.


    // const float pi = 3.14;
    // cout << "The value of pi is " << pi;
    // pi = 3.1468;   // You will get an error because pi is a constant 
    // cout << "\nThe value of pi is " << pi;
    // return 0;
// }

// <----------------------------------- Manipulators in C++ ---------------------------------------->
// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main() {
//     int a = 13, b = 123, c = 1234;

//     cout << "The value of a without setw is: " << a << endl;
//     cout << "The value of b without setw is: " << b << endl;
//     cout << "The value of c without setw is: " << c << endl;

//     cout << "The value of a is: " << setw(4) << a << endl;
//     cout << "The value of b is: " << setw(4) << b << endl;
//     cout << "The value of c is: " << setw(4) << c << endl;
//     return 0;
// }

// <---------------------------------------- Operator Precedence ------------------------------------->
// #include<iostream>
// using namespace std;

// int main() {
//     int a = 3, b = 4;

//     // int c = ((a * 5) + b);
//     // cout << c; // output is 19

//     int c = ((((a * 5) + b) - 45) + 87);
//     cout << c; // output is 61
//     return 0;
// }

// <-------------------------------------------- C++ String ------------------------------------------->
// #include<iostream>
// // Include the string library
// #include<string>
// using namespace std;

// int main() {
//     // Create a string variable
//     string greeting = "Hello";
//     cout << greeting;
//     return 0;
// }

// <--------------------------------------- C++ String Concatenation ------------------------------->
// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
    // The + operator can be used between strings to add them together to make a new string. This is called concatenation
    // string firstName = "Rohit ";
    // string lastName = "Kumar";
    // string fullName = firstName + lastName;
    // cout << "My Name is " << fullName;


    // In the example above, we added a space after firstName to create a space between Rohit and Kumar on output. However, you could also add a space with quotes (" " or ' '):
    // string firstName = "Rohit";
    // string lastName = "Kumar";
    // string fullName = firstName + " " + lastName;
    // cout << fullName;


    // A string in c++ is actually an object, which contain functions that can perform certain operations on strings. for example, you can also concatenate strings with the append() function:
//     string firstName = "Rohit ";
//     string lastName = "Kumar";
//     string fullName = firstName.append(lastName);
//     cout << "My name is " << fullName;
//     return 0;
// }

// <--------------------------------------- C++ Numbers and Strings ---------------------------------->
// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
    // WARNING !
    // C++ uses the + operator for both addition and concatenation
    // Numbers are added. Strings are concatenated.
    // If you add two numbers, the result will be a number:
    // int x = 10;
    // int y = 30;
    // int z = x + y;
    // cout << z;


    // If you add two strings, the result will be string concatenation:
    // string x = "10";
    // string y = "30";
    // string z = x + y;
    // cout << z;


    // If you try to add a number to a string, an error occurs:
    // string x = "10";
    // int y = 30;
    // string z = x + y;
    // cout << z;
//     return 0;
// }

// <-------------------------------------- String Length ----------------------------------------->
// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
    // To get the length of a string, use the length() function:
    // string myName = "Rohit";
    // cout << "The length of the myName string is: " << myName.length();


    // Tip: You might see some C++ programs that use the size() function to get the length of a string. This is just an alias of length().
    // It is completely up to you if you want to use length() or size():
//     string myName = "Rohit";
//     cout << "The Length of the myName string is: " << myName.size();
//     return 0;
// }

// <--------------------------------------- Access String ---------------------------------->
// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
    // You can access the characters in a string by referring to its index number inside square brackets [].
    // string myString = "Hello";
    // cout << myString[0]; // output H
    // cout << myString[1]; // output e
    // cout << myString[2]; // output l
    // cout << myString[3]; // output l
    // cout << myString[4]; // output o

    // Note: String indexes start with 0: [0] is the first character. [1] is the second character, etc.

    // <--- Change String Characters --->
    // To change the value of a specific character in a string, refer to the index number, and use single quotes:
    // string myString = "Hello";
    // myString[0] = 'J';
    // cout << myString;


    // Another example for change string characters
    // string myString = "Hello";
    // cout << "Before: " << myString;
    // myString[0] = 'R';
    // myString[1] = 'o';
    // myString[2] = 'h';
    // myString[3] = 'i';
    // myString[4] = 't';
    // cout << "\nAfter: " << myString;
    // return 0;
// }

// <-------------------------------------- Strings - Special Characters --------------------------------------->
// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
    // Because strings must be written within quotes, C++ will misunderstand this string, and generate an error:
    // string text = "We are the so-called "Vikings" from the north.";
    // cout << text;


    // Escape character                          Result                             Description
    //        \'                                    '                               Single quote
    //        \"                                    "                               Double quote
    //        \\                                    \                               Backslash

    // The sequence \" inserts a double quote in a string:
    // string txt = "We are the so-colled \"Vikings\" from the north.";
    // cout << txt;


    // The sequence \' inserts a single quote in a string:
    // string txt = "It\'s alright.";
    // cout << txt;


    // The sequence \\ inserts a single backslash in a string:
//     string txt = "The character \\ is called backslash.";
//     cout << txt;
//     return 0;
// }

// <--------------------------------------- User Input String ------------------------------------------>
// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
    // string firstName;
    // cout << "Type here your firstName: ";
    // cin >> firstName;
    // cout << "Your name is: " << firstName;


    // However, cin considers a space(whitespace, tabs, etc) as a terminating character, which means that it can only store a single word (even if type many words):
    // string fullName;
    // cout << "Type here your fullName: ";
    // cin >> fullName;
    // cout << "Your FullName is: " << fullName;


    // <---- getline() function ---->
    // From the example above, you would expect the program to print "Rohit Kumar", but it only prints "Rohit".
    // That's why, when working with strings, we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second:
//     string fullName;
//     cout << "Type here your full name: ";
//     getline(cin, fullName);
//     cout << "Your Full Name is: " << fullName;
//     return 0;
// }

// <-------------------------------------- C++ String Namespace --------------------------------------->
//                                <------- Omitting Namespace ------>
// #include<iostream>
// #include<string>

// int main() {
//     std::string myString = "Hello";
//     std::cout << myString;
//     return 0;
// }

// <----------------------------------------------- C++ Math ----------------------------------------------->
// #include<iostream>
// using namespace std;

// int main() {
    // The max(x, y) function can be used to find the highest value of x and y:
    // cout << max(3, 10);

    // max function another example:
    // int x = 13;
    // int y = 11;
    // cout << max(x, y);


    // And the min(x, y) function can be used to find the lowest value of x and y:
    // cout << min(3, 10);

    // min function another example:
//     int x = 13;
//     int y = 11;
//     cout << min(x, y);
//     return 0;
// }

// <------------------------------------------ C++ <cmath> Header --------------------------------------->
// #include<iostream>
// #include<cmath>
// using namespace std;

// int main() {
//     // Other functions, such as sqrt(square root), round(rounds a number) and log(natural logarithm), can be found in the <cmath> header file:
//     cout << sqrt(64) << endl;
//     cout << round(3.5) << endl;
//     cout << log(2) << endl;
//     return 0;
// }

// <-------------------------------------------- math round() function ----------------------------------->
// #include<iostream>
// #include<cmath>
// using namespace std;

// int main() {
//     float x = 2.8;
//     float y = 2.4;
//     cout << round(x) << endl;
//     cout << round(y);
//     return 0;
// }

// <------------------------------------------- math log() function ------------------------------------>
// #include<iostream>
// #include<cmath>
// using namespace std;

// int main() {
//     int x = 10;
//     cout << log(x) << endl;
//     cout << log10(x) << endl;
//     return 0;
// }

// <--------------------------------------------- Booleans ----------------------------------------->
// #include<iostream>
// using namespace std;

// int main() {
//     bool isCodingFun = true;
//     bool isFishTasty = false;

//     cout << isCodingFun << endl;
//     cout << isFishTasty;
//     return 0;
// }

// <----------------------------------------- Boolean Expressions --------------------------------------->
// #include<iostream>
// using namespace std;

// int main() {
    // You can use a comparison operator, such as the greater than ( > ) operator, to find out if an expression (or variable) is true or false:
    // int x = 10;
    // int y = 9;
    // cout << (x > y) << endl;

    // or even easier:

    // cout << (10 > 9) << endl;


    // In the examples below, we use the equal to (==) operator to evaluate an expression:
    // int x = 10;
    // cout << (x == 10) << endl; // returns 1 (true), because the value of x is equal to 10 
    // cout << (10 == 15) << endl; // returns 0 (false), because 10 is not equal to 15


    // Let's think of a "real life example" where we need to find out if a person is old enough to vote.
    // int myAge = 20;
    // int votingAge = 18;

    // cout << (myAge >= votingAge); // returns 1 (true), meaning 25 year olds are allowed to vote!


    // Example
    // Output "Old enough to vote!" if myAge is greater than or equal to 18. Otherwise output "Not old enough to vote.";
//     int myAge = 20;
//     int votingAge = 18;

//     if(myAge >= votingAge) {
//         cout << "Old enough to vote!";
//     }
//     else {
//         cout << "Not old enough to vote!";
//     }

//     // Outputs: Old enough to vote!
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     float amt, dis;
//     cout << "Enter Purchasing Amount: ";
//     cin >> amt;
//     dis = (amt * 10) / 100;
//     cout << "Purchasing Amount: " << amt << endl;
//     cout << "Discount: " << dis << endl;
//     cout << "Net Payable: " << amt - dis << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a Number: ";
//     cin >> num;
//     if(num > 0) {
//         cout << num << " is Positive Number";
//     }
//     else if(num < 0) {
//         cout << num << " is Negative Number";
//     }
//     else if(num == 0) {
//         cout << num << " (Zero)";
//     }
//     else {
//         cout << "Please Enter Only Value Integer";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int a, b, c;
//     cout << "Enter a three number: ";
//     cin >> a >> b >> c;
//     if(a > b && a > c) {
//         cout << a << ", a is a max number";
//     }
//     else if(b > a && b > c) {
//         cout << b << ", b is a max number";
//     }
//     else {
//         cout << c << ", c is a max number";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int l, b, res;
//     l = 10;
//     b = 30;
//     res = l * b;
//     cout << "Area of Rectangle = " << res;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int l, b, res;
//     l = 10;
//     b = 30;
//     res = 2 * (l + b);
//     cout << "Perimeter = " << res;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     const float pi = 3.14f;
//     float r = 3.0f, res;
//     res = pi * r * r;
//     cout << "Area of circle = " << res;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     float amt, disc, res;
//     cout << "Enter Purchasing Amount: ";
//     cin >> amt;
//     disc = (amt * 10) / 100;
//     res = (amt - disc);
//     cout << "Total Purchasing Amount = " << amt << endl;
//     cout << "Totla Discount = " << disc << endl;
//     cout << "Net Payable Amount = " << res;
//     return 0;
// }

#include<iostream>
using namespace std;

int main() {
    // float math, sci, sst, hin, sas, marks;
    // math = 76;
    // sci = 80;
    // sst = 81;
    // hin = 80;
    // sas = 69;
    // marks = (math + sci + sst + hin + sas) / 5;
    // cout << "Percentage = " << marks;

    float marks, perc;
    marks = 386;
    perc = (marks * 100) / 500;
    cout << "percentage = " << perc;
    return 0;
}