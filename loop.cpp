// <------------------------------------ For Loop ---------------------------------->
// #include<iostream>
// using namespace std;

// int main() {
//     // for(int i = 1; i <= 50; i++) {
//     //     cout << i << endl;
//     // }

//     // for(int j = 1; 34 <= 50; j++) {
//     //     cout << j << endl;
//     // }

//     // for(int i = 1; i <= 10; i++) {
//     //     cout << "6" << " x " << i << " = " << i * 6 << endl;
//     // }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     // <----- Nested for Loop ------>
//     // Outer Loop
//     for(int i = 1; i <= 2; i++) {
//         cout << "outer: " << i << endl;

//         // Inner Loop
//         for(int j = 1; j <= 3; j++) {
//             cout << "  inner: " << j << endl;
//         }
//     }
//     return 0;
// }

// <----------------------------------- The foreach Loop ---------------------------->
// There is also a "for-each loop" (introduced in C++ version 11 (2011), which is used exclusively to loop through elements in an array (or other data sets):
// Syntax -------->
// for(type variableName : arrayName) {
//     // code block to be executed
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int myNumbers[5] = {10, 20, 30, 40, 50};
//     for(int i : myNumbers) {
//         cout << i << endl;
//     }
//     return 0;
// }

// <---------------------------------- while loop --------------------------------->
// #include<iostream>
// using namespace std;

// int main() {
//     // int i = 1;
//     // while(i <= 50) {
//     //     cout << i << endl;
//     //     i++;
//     // }

//     // int i = 1;
//     // while(true) {
//     //     cout << i << endl;
//     //     i++;
//     // }

//     // int i = 1;
//     // while(i <= 10) {
//     //     cout << "6" << " x " << i << " = " << i * 6 << endl;
//     //     i++;
//     // }
//     return 0;
// }

// <----------------------------------- do while loop ------------------------------>
// #include<iostream>
// using namespace std;

// int main() {
//     // int i = 1;
//     // do {
//     //     cout << i << endl;
//     //     i++;
//     // }while(i <= 50);

//     // int i = 1;
//     // do {
//     //     cout << i << endl;
//     //     i++;
//     // }while(false);

//     int i = 1;
//     do {
//         cout << "6" << " x " << i << " = " << i * 6 << endl;
//         i++;
//     }while(i <= 10);
//     return 0;
// }

// <------------------------------------- Break Statement --------------------------------------->

// #include<iostream>
// using namespace std;

// int main() {
//     // for(int i = 1; i <= 10; i++) {
//     //     if(i == 4) {
//     //         break;
//     //     }
//     //     cout << i << endl;
//     // }
//     // // Output -------> 1 2 3

//     for(int i = 1; i <= 10; i++) {
//         cout << i << endl;
//         if(i == 4) {
//             break;
//         }
//     }
//     // Output --------> 1 2 3 4
//     return 0;
// }

// <------------------------------------------ Continue Statement ------------------------------------->

// #include<iostream>
// using namespace std;

// int main() {
//     // for(int i = 1; i <= 10; i++) {
//     //     if(i == 4) {
//     //         continue;
//     //     }
//     //     cout << i << endl;
//     // }
//     // // Output ----------> 1 2 3 5 6 7 8 9 10

//     for(int i = 1; i <= 10; i++) {
//         cout << i << endl;
//         if(i == 4) {
//             continue;
//         }
//     }
//     // Output ----------> 1 2 3 4 5 6 7 8 9 10
//     return 0;
// }

// <---------------------------------- Break and Continue in While Loop ----------------------------------->
// You can also use break and continue in while loops:

// #include<iostream>
// using namespace std;

// int main() {
//     // <------ break ------->
//     // int i = 1;
//     // while(i <= 10) {
//     //     cout << i << endl;
//     //     i++;
//     //     if(i == 4) {
//     //         break;
//     //     }
//     // }

//     int i = 1;
//     while(i <= 10) {
//         if(i == 4) {
//             break;
//         }
//         cout << i << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     // <--------- continue --------->
//     // int i = 1;
//     // while(i <= 10) {
//     //     cout << i << endl;
//     //     i++;
//     //     if(i == 4) {
//     //         i++;
//     //         continue;
//     //     }
//     // }

//     int i = 1;
//     while(i <= 10) {
//         if(i == 4) {
//             i++;
//             continue;
//         }
//         cout << i << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int i = 1;

//     while(i <= 20) {
//         if(i % 2 == 0) {
//             cout << i << endl;
//         }
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, sum = 0, i;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(i = 1; i <= n; i++) {
//         sum = sum + i;
//     }
//     cout << "First " << n << " Natural Number Sum is " << sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, sum = 0, i;
//     cout << "Enter a Number: ";
//     cin >> n;

//     i = 1;
//     while(n > 0) {
//         sum = sum + n % 10;
//         n = n / 10;
//     }
//     cout << "\nSum of Digits = " << sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, sum = 0, i;
//     cout << "Enter a Number: ";
//     cin >> n;

//     i = 1;
//     do {
//         sum = sum + n % 10;
//         n = n / 10;
//     } while(n > 0);
//     cout << "\n Sum of Digits = " << sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, sum = 0, i;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(i = 0; n > 0; n = n / 10) {
//         sum = sum + n % 10;
//     }
//     cout << "\nSum of Digits = " << sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;
//     cout << "Enter a Number: ";
//     cin >> n;
//     for(; n > 0; n = n / 10) {
//         sum = sum + (n % 10);
//     }
//     cout << "\nSum of Digits = " << sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, prod = 1, i;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(; n > 0; n = n / 10) {
//         prod = prod * (n % 10);
//     }

//     cout << "Product of Digit = " << prod;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, prod = 1;
//     cout << "Enter a Number: ";
//     cin >> n;

//     while(n > 0) {
//         prod *= (n % 10);
//         n /= 10;
//     }
//     cout << "Product of Digit = " << prod;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, sum = 0, prod = 1, digit;
//     cout << "Enter a Number: ";
//     cin >> n;

//     while(n > 0) {
//         digit = n % 10;
//         if(digit % 2 == 0) {
//             sum = sum + digit;
//         }
//         else {
//             prod = prod * digit;
//         }
//         n = n / 10;
//     }
//     cout << "Sum of Digit = " << sum << endl << "Product of Digit = " << prod;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, sum = 0, prod = 1, digit;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(; n > 0; n /= 10) {
//         digit = n % 10;
//         if(digit % 2 == 0) {
//             sum += digit;
//         }
//         else {
//             prod *= digit;
//         }
//     }
//     cout << "Sum of Digit = " << sum << endl << "Product of Digit = " << prod;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, sum = 0, prod = 1, digit;
//     cout << "Enter a Number: ";
//     cin >> n;

//     do {
//         digit = n % 10;
//         if(digit % 2 == 0) {
//             sum += digit;
//         }
//         else {
//             prod *= digit;
//         }
//         n /= 10;
//     } while(n > 0);
//     cout << "Sum of Digit = " << sum << endl << "Product of Digit = " << prod;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, fact = 1;
//     cout << "Enter a Number: ";
//     cin >> n;
//     int i = 1;

//     while(i <= n) {
//         fact *= i;
//         i++;
//     }
//     cout << n << "! = " << fact;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, fact = 1;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     cout << n << "! = " << fact;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, count = 0;
//     cout << "Enter a Number: ";
//     cin >> n;
//     cout << "Original Number = " << n << endl;
//     cout << "Reversed Number = ";

//     for( ; n > 0; n /= 10) {
//         count = n % 10;
//         cout << count;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, count = 0;
//     cout << "Enter a Number: ";
//     cin >> n;
//     cout << "Original Number: " << n << endl;
//     cout << "Reserved Number: ";

//     while(n > 0) {
//         count = n % 10;
//         cout << count;
//         n /= 10;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, rev = 0, orig;
//     cout << "Enter a Number: ";
//     cin >> n;
//     // orig = n;
//     while(n > 0) {
//         rev = n % 10;
//         n /= 10;
//     }
//     cout << rev;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, rev = 0;
//     cout << "Enter a Number: ";
//     cin >> n;

//     while(n > 0) {
//         rev = (rev * 10) + (n % 10);
//         n = n / 10;
//     }
//     cout << "\nReverse Number: " << rev;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, rev = 0;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for( ; n > 0; n /= 10) {
//         rev = (rev * 10) + (n % 10);
//     }
//     cout << "\nReverse Number: " << rev;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, rev = 0, orig;
//     cout << "Enter a Number: ";
//     cin >> n;
//     orig = n;

//     while(n > 0) {
//         rev = (rev * 10) + (n % 10);
//         n = n / 10;
//     }

//     if(orig == rev) {
//         cout << orig << " is a Palindrome Number";
//     }
//     else {
//         cout << orig << " is Not a Palindrome Number";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, rev = 0, orig;
//     cout << "Enter a Number: ";
//     cin >> n;
//     orig = n;

//     for(; n > 0; n /= 10) {
//         rev = (rev * 10) + (n % 10);
//     }

//     if(orig == rev) {
//         cout << orig << " is a Palindrome Number";
//     }
//     else {
//         cout << orig << " is Not a Palindrome Number";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, count = 0, i;
//     cout << "Enter a Number: ";
//     cin >> n;
//     i = 1;

//     while(i <= n) {
//         if(n % i == 0) {
//             count++;
//         }
//         i++;
//     }
//     if(count == 2) {
//         cout << n << " is a Prime Number";
//     }
//     else {
//         cout << n << " is Not a Prime Number";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, count = 0, i;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(i = 1; i <= n; i++) {
//         if(n % i == 0) {
//             count++;
//         }
//     }
//     if(count == 2) {
//         cout << n << " is a Prime Number";
//     }
//     else {
//         cout << n << " is Not a Prime Number";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, count = 0, i;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(i = 1; i <= n; i++) {
//         if(n % i == 0) {
//             cout << i << endl;
//             count++;
//         }
//     }
//     cout << "Total Factor = " << count;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(i = 1; i <= 10; i++) {
//         cout << n << " x " << i << " = " << n * i << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i;
//     cout << "Enter a Number: ";
//     cin >> n;
//     i = 1;

//     while(i <= 10) {
//         cout << n << " x " << i << " = " << n * i << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, num1, num2, i;
//     cout << "Enter a Number: ";
//     cin >> n;
//     num1 = 0;
//     num2 = 1;
//     i = 0;
//     cout << "Fibonacci Series = ";

//     while(i <= n) {
//         cout << i << "\t";
//         num1 = num2;
//         num2 = i;
//         i = num1 + num2;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, num1, num2, i;
//     cout << "Enter a Number: ";
//     cin >> n;
//     num1 = 0;
//     num2 = 1;
//     i = 0;

//     while(i <= n) {
//         cout << i << endl;
//         num1 = num2;
//         num2 = i;
//         i = num1 + num2;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, num1, num2, i;
//     cout << "Enter a Number: ";
//     cin >> n;
//     num1 = 0;
//     num2 = 1;

//     for(i = 0; i <= n; i = num1 + num2) {
//         cout << i << endl;
//         num1 = num2;
//         num2 = i;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, num1, num2, i, count = 1;
//     cout << "Enter Number of Terms: ";
//     cin >> n;
//     num1 = 0;
//     num2 = 1;
//     i = 0;

//     while(count <= n) {
//         cout << i << endl;
//         num1 = num2;
//         num2 = i;
//         i = num1 + num2;
//         count++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, num1, num2, i, count = 1;
//     cout << "Enter Number of Terms: ";
//     cin >> n;
//     num1 = 0;
//     num2 = 1;

//     for(i = 0; count <= n; i = num1 + num2) {
//         cout << i << endl;
//         num1 = num2;
//         num2 = i;
//         count++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int x, y, i, prod = 1;
//     cout << "Enter value of x & y: ";
//     cin >> x >> y;
//     i = 1;

//     while(i <= y) {
//         prod = prod * x;
//         i++;
//     }
//     cout << x << "^" << y << " = " << prod;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, x, i, prod = 1;
//     cout << "Enter value of n & x: ";
//     cin >> n >> x;

//     for(i = 1; i <= x; i++) {
//         prod = prod * n;
//     }
//     cout << n << "^" << x << " = " << prod;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     // for(int i = 0; i <= 10; i++) {
//     //     if(i == 5) {
//     //         break;
//     //     }
//     //     cout << i << endl;
//     // }

//     for(int i = 0; i <= 10; i++) {
//         if(i == 5) {
//             continue;
//         }
//         cout << i << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     if (n % 2 == 0)
//     {
//         goto even;
//     }
//     else
//     {
//         goto odd;
//     }

// even:
//     cout << "The Number is Even";
//     return 0;
// odd:
//     cout << "The Number is Odd";
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int i = 1;
//     while(i <= 3) {
//         cout << i << "." << endl;
//         int j = 1;
//         while(j <= 3) {
//             cout << "  " << j << endl;
//             j++;
//         }
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i = 1; i <= 3; i++) {
//         cout << i << "." << endl;
//         for(int j = 1; j <= 3; j++) {
//             cout << "  " << j << endl;
//         }
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, j;
//     cout << "Enter a Number: ";
//     cin >> n;
//     i = 1;

//     while(i <= n) {
//         j = 1;
//         while(j <= i) {
//             cout << "* ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     char n, i, j;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(i = 'a'; i <= n; i++) {
//         for(j = 'a'; j <= i; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, j;
//     cout << "Enter a Number: ";
//     cin >> n;
//     i = 1;

//     while(i <= n) {
//         j = 1;
//         while(j <= i) {
//             cout << "* ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, j;
//     cout << "Enter a Number: ";
//     cin >> n;
//     i = 1;

//     while(i <= n) {
//         j = 1;
//         while(j <= i) {
//             cout << j << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, j;
//     cout << "Enter a Number: ";
//     cin >> n;
//     i = 1;

//     while(i <= n) {
//         j = 1;
//         while(j <= i) {
//             cout << i << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     char n, i, j;
//     cout << "Enter a nth character: ";
//     cin >> n;
//     i = 'a';

//     while(i <= n) {
//         j = 'a';
//         while(j <= i) {
//             cout << j << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     char n;
//     cout << "Enter a nth character: ";
//     cin >> n;

//     for(char i = 'a'; i <= n; i++) {
//         for(char j = 'a'; j <= i; j++) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, j;
//     cout << "Enter a Number: ";
//     cin >> n;
//     i = 1;

//     while(i <= n) {
//         j = 1;
//         while(j <= i) {
//             cout << i + j << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, j;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << i + j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, j;
//     cout << "Enter a Number: ";
//     cin >> n;
//     i = 1;

//     while(i <= n) {
//         j = 1;
//         while(j <= i) {
//             cout << j + i << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << j + i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, j, space;
//     cout << "Enter a Number: ";
//     cin >> n;
//     i = 1;

//     while(i <= n) {
//         space = 1;
//         while(space <= n - i) {
//             cout << " ";
//             space++;
//         }
//         j = 1;

//         while(j <= i) {
//             cout << i + j;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     char n;
//     cout << "Enter Character of rows: ";
//     cin >> n;

//     for(char i = 'a'; i <= n; i++) {
//         for(int s = 1; s <= n - i; s++) {
//             cout << " ";
//         }
//         for(char j = 'a'; j <= i; j++) {
//             cout << i;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, j;
//     cout << "Enter a Number of rows: ";
//     cin >> n;
//     i = 1;

//     while(i <= n) {
//         int s = 1;
//         while(s <= n - i) {
//             cout << " ";
//             s++;
//         }
//         j = 1;
//         while(j <= i) {
//             cout << j;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, j, s;
//     cout << "Enter a Number of rows: ";
//     cin >> n;
//     i = 1;

//     while(i <= n) {
//         s = 1;
//         while(s <= n - i) {
//             cout << " ";
//             s++;
//         }

//         j = 1;
//         while(j <= i) {
//             cout << "*";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter Number of rows: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int s = 1; s <= n - i; s++) {
//             cout << " ";
//         }
//         for(int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, j, s;
//     cout << "Enter Number of rows: ";
//     cin >> n;
//     i = 1;

//     while(i <= n) {
//         s = 1;
//         while(s <= n - i) {
//             cout << " ";
//             s++;
//         }
//         j = 1;

//         while(j <= i) {
//             cout << j;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter Number of rows: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int s = 1; s <= n - i; s++) {
//             cout << " ";
//         }
//         for(int j = 1; j <= i; j++) {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, j, s;
//     cout << "Enter Number of rows: ";
//     cin >> n;
//     i = 1;

//     while(i <= n) {
//         s = 1;
//         while(s <= n - i) {
//             cout << " ";
//             s++;
//         }
//         j = 1;
//         while(j <= i) {
//             cout << i;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter Number of rows: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int s = 1; s <= n - i; s++) {
//             cout << " ";
//         }
//         for(int j = 1; j <= i; j++) {
//             cout << i;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, j, s;
//     cout << "Enter Number of rows: ";
//     cin >> n;
//     i = 1;

//     while(i <= n) {
//         s = 1;
//         while(s <= n - i) {
//             cout << " ";
//             s++;
//         }
//         j = 1;
//         while(j <= i) {
//             cout << i + j;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter Number of rows: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int s = 1; s <= n - i; s++) {
//             cout << " ";
//         }
//         for(int j = 1; j <= i; j++) {
//             cout << i + j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, j, s;
//     cout << "Enter Number of rows: ";
//     cin >> n;
//     i = 1;

//     while(i <= n) {
//         s = 1;
//         while(s <= n - i) {
//             cout << " ";
//             s++;
//         }
//         j = 1;
//         while(j <= i) {
//             cout << j + i;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter Number of rows: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int s = 1; s <= n - i; s++) {
//             cout << " ";
//         }
//         for(int j = 1; j <= i; j++) {
//             cout << j + i;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     char n, i, j;
//     cout << "Enter Character of rows: ";
//     cin >> n;
//     i = 'a';

//     while(i <= n) {
//         int s = 1;
//         while(s <= n - i) {
//             cout << " ";
//             s++;
//         }
//         j = 'a';
//         while(j <= i) {
//             cout << j;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     char n;
//     cout << "Enter Character of rows: ";
//     cin >> n;

//     for(char i = 'a'; i <= n; i++) {
//         for(int s = 1; s <= n - i; s++) {
//             cout << " ";
//         }
//         for(char j = 'a'; j <= i; j++) {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     char n, i, j;
//     cout << "Enter Character of rows: ";
//     cin >> n;
//     i = 'a';

//     while(i <= n) {
//         int s = 1;
//         while(s <= n - i) {
//             cout << " ";
//             s++;
//         }
//         j = 'a';
//         while(j <= i) {
//             cout << i;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     char n;
//     cout << "Enter Character of rows: ";
//     cin >> n;

//     for(char i = 'a'; i <= n; i++) {
//         for(int s = 1; s <= n - i; s++) {
//             cout << " ";
//         }
//         for(int j = 'a'; j <= i; j++) {
//             cout << i;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, j, s;
//     cout << "Enter Number of rows: ";
//     cin >> n;
//     i = 1;

//     while(i <= n) {
//         s = 1;
//         while(s <= n - i) {
//             cout << "   ";
//             s++;
//         }
//         j = 1;
//         while(j <= 2 * i - 1) {
//             cout << " " << i + j << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, j, s;
//     cout << "Enter Number of rows: ";
//     cin >> n;
//     i = 1;

//     while(i <= n) {
//         s = 1;
//         while(s <= n - i) {
//             cout << "   ";
//             s++;
//         }
//         j = 1;
//         while(j <= 2 * i - 1) {
//             cout << " * ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter Number of rows: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int s = 1; s <= n - i; s++) {
//             cout << "   ";
//         }
//         for(int j = 1; j <= 2 * i - 1; j++) {
//             cout << " * ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, j, s;
//     cout << "Enter Number of rows: ";
//     cin >> n;
//     i = 1;

//     while(i <= n) {
//         s = 1;
//         while(s <= n - i) {
//             cout << "   ";
//             s++;
//         }
//         j = 1;
//         while(j <= 2 * i - 1) {
//             cout << " " << j << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter Number of rows: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int s = 1; s <= n - i; s++) {
//             cout << "   ";
//         }
//         for(int j = 1; j <= 2 * i - 1; j++) {
//             cout << " " << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, j, s;
//     cout << "Enter Number of rows: ";
//     cin >> n;
//     i = 1;

//     while(i <= n) {
//         s = 1;
//         while(s <= n - i) {
//             cout << "   ";
//             s++;
//         }
//         j = 1;
//         while(j <= 2 * i - 1) {
//             cout << " " << i << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter Number of rows: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int s = 1; s <= n - i; s++) {
//             cout << "   ";
//         }
//         for(int j = 1; j <= 2 * i - 1; j++) {
//             cout << " " << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, j, s;
//     cout << "Enter Number of rows: ";
//     cin >> n;
//     i = 1;

//     while(i <= n) {
//         s = 1;
//         while(s <= n - i) {
//             cout << "   ";
//             s++;
//         }
//         j = 1;
//         while(j <= 2 * i - 1) {
//             cout << " " << i + j << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter Number of rows: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int s = 1; s <= n - i; s++) {
//             cout << "   ";
//         }
//         for(int j = 1; j <= 2 * i - 1; j++) {
//             cout << " " << i + j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, i, j, s;
//     cout << "Enter Number of rows: ";
//     cin >> n;
//     i = 1;

//     while(i <= n) {
//         s = 1;
//         while(s <= n - i) {
//             cout << "   ";
//             s++;
//         }
//         j = 1;
//         while(j <= 2 * i - 1) {
//             cout << " " << j + i << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int s = 1; s <= n - i; s++) {
            cout << "   ";
        }
        for(int j = 1; j <= 2 * i - 1; j++) {
            cout << " " << j + i << " ";
        }
        cout << endl;
    }
    return 0;
}