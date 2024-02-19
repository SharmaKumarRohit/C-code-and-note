// #include<iostream>
// using namespace std;

// int sum(int a, int b) {
//     int c = a + b;
//     return c;
// }

// int main() {
//     int num1, num2;
//     cout << "Enter Your first Number: ";
//     cin >> num1;
//     cout << "Enter Your second Number: ";
//     cin >> num2;

//     cout << "Sum is: " << sum(num1, num2) << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int sum(int a, int b);
// int main() {
//     int num1, num2;

//     cout << "Enter First Number: ";
//     cin >> num1;
//     cout << "Enter Second Number: ";
//     cin >> num2;

//     cout << sum(num1, num2);
//     return 0;
// }

// int sum(int a, int b) {
//     int c = a + b;
//     return c;
// }

// #include<iostream>
// using namespace std;

// // void g(void);
// void g();

// int main() {
//     g();
//     return 0;
// }

// void g() {
//     cout << "Hello World";
// }

// #include<iostream>
// using namespace std;

// int sum(int a, int b);

// int main() {
//     int a, b;
//     cout << "Enter First Number: ";
//     cin >> a;
//     cout << "Enter Second Number: ";
//     cin >> b;

//     cout << "Sum is: " << sum(a, b) << endl;
//     return 0;
// }

// int sum(int a, int b) {
//     int c = a + b;
//     return c;
// }

// #include<iostream>
// using namespace std;

// int sum(int a, int b);

// int main() {
//     int a, b;
//     cout << "Enter two values: ";
//     cin >> a >> b;
//     int add = sum(a, b);
//     cout << a << " + " << b << " = " << add;
//     return 0;
// }

// int sum(int a, int b) {
//     int c = a + b;
//     return c;
// }

// #include<iostream>
// using namespace std;

// void printEven();
// void printOdd();

// int main() {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     if(n % 2 == 0) {
//         printEven();
//     }
//     else {
//         printOdd();
//     }
//     return 0;
// }

// void printEven() {
//     cout << "Even";
// }

// void printOdd() {
//     cout << "Odd";
// }

// #include<iostream>
// using namespace std;

// void printHello();
// void printGoodBye();

// int main() {
//     printHello();
//     printGoodBye();
//     return 0;
// }

// void printHello() {
//     cout << "Hello\n";
// }

// void printGoodBye() {
//     cout << "Good Bye :)";
// }

// #include<iostream>
// using namespace std;

// void printNamaste();
// void printBonjour();

// int main() {
//     char ch;
//     cout << "If User are Enter an i for Indian & f for french: ";
//     cin >> ch;

//     if(ch == 'i' || ch == 'I') {
//         printNamaste();
//     }
//     else if(ch == 'f' || ch == 'F') {
//         printBonjour();
//     }
//     else {
//         cout << "Error!";
//     }
//     return 0;
// }

// void printNamaste() {
//     cout << "Namaste";
// }

// void printBonjour() {
//     cout << "Bonjour";
// }

// #include<iostream>
// using namespace std;

// int sum(int a, int b);

// int main() {
//     int x, y;
//     cout << "Enter x & y: ";
//     cin >> x >> y;
//     int s = sum(x, y);
//     cout << x << " + " << y << " = " << s;
//     return 0;
// }

// int sum(int a, int b) {
//     return a + b;
// }

// #include<iostream>
// using namespace std;

// void printTable(int n);

// int main() {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     printTable(n);
//     return 0;
// }

// void printTable(int n) {
//     for(int i = 1; i <= 10; i++) {
//         cout << n << " x " << i << " = " << n * i << endl;
//     }
// }

// #include<iostream>
// using namespace std;

// void calculatePrice(float price);

// int main() {
//     float p = 100.0f;
//     calculatePrice(p);
//     cout << "Value is " << p;
//     return 0;
// }

// void calculatePrice(float price) {
//     price = price + (0.18 * price);
//     cout << "Final Price is " << price << endl;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     float n = 5.0f;
//     float value = pow(n, 2);
//     cout << n << "^"
//          << "2"
//          << " = " << value;
//     return 0;
// }

// #include<iostream>
// #define pi 3.14
// using namespace std;

// void square(int n);
// void circle(float r);
// void rectangle(int l, int b);

// int main() {
//     int n;
//     cout << "Enter value of n: ";
//     cin >> n;
//     square(n);
//     float r;
//     cout << "Enter value of r: ";
//     cin >> r;
//     circle(r);
//     int l, b;
//     cout << "Enter value of l & b: ";
//     cin >> l >> b;
//     rectangle(l, b);
//     return 0;
// }

// void square(int n) {
//     int res = n * n;
//     cout << n << " x " << n << " = " << res << endl;
// }

// void circle(float r) {
//     int res = pi * r * r;
//     cout << pi << " x " << r << " x " << r << " = " << res << endl;
// }

// void rectangle(int l, int b) {
//     int res = l * b;
//     cout << l << " x " << b << " = " << res;
// }

// #include<iostream>
// using namespace std;

// void printHW(int count);

// int main() {
//     printHW(5);
//     return 0;
// }

// // recursive function
// void printHW(int count) {
//     if(count == 0) {
//         return;
//     }
//     cout << "Hello World\n";
//     printHW(count - 1);
// }

// #include<iostream>
// using namespace std;

// int sum(int n);

// int main() {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     int res = sum(n);
//     cout << "Sum = " << res;
//     return 0;
// }

// int sum(int n) {
//     if(n == 1) {
//         return 1;
//     }
//     int sumNm = sum(n - 1);
//     int sumNm1 = sumNm + n;
//     return sumNm1;
// }

// #include<iostream>
// using namespace std;

// int fact(int n);

// int main() {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     int res = fact(n);
//     cout << "Factorial = " << res;
//     return 0;
// }

// int fact(int n) {
//     if(n == 0) {
//         return 1;
//     }
//     int factNm = fact(n - 1);
//     int factNm1 = factNm * n;
//     return factNm1;
// }

// #include<iostream>
// using namespace std;

// int fact(int n);

// int main() {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     int res = fact(n);
//     cout << "Factorial = " << res;
//     return 0;
// }

// int fact(int n) {
//     cout << "Calculate of factorial of n: " << n << endl;
//     int factNm = fact(n - 1);
//     int factNm1 = factNm * n;
//     return factNm1;
// }

// #include<iostream>
// using namespace std;

// float calculateTem(float cel);

// int main() {
//     float tem;
//     cout << "Enter Tempature: ";
//     cin >> tem;
//     float res = calculateTem(tem);
//     cout << "Fahrenheit = " << res;
//     return 0;
// }

// float calculateTem(float cel) {
//     float fah = (cel * 9.0 / 5.0) + 32;
//     return fah;
// }

// #include<iostream>
// using namespace std;

// float calculateMarks(float math, float science, float sanskrit);

// int main() {
//     float math = 76.0, science = 80.0, sanskrit = 69.0;
//     float marks = calculateMarks(math, science, sanskrit);
//     cout << "Percentage of marks = " << marks;
//     return 0;
// }

// float calculateMarks(float math, float science, float sanskrit) {
//     int res = (math + science + sanskrit) / 3;
//     return res;
// }

// #include<iostream>
// using namespace std;

// int fib(int n);

// int main() {
//     int n;
//     cout << "Enter nth terms: ";
//     cin >> n;
//     int res = fib(n);
//     cout << "Fibonacci serie " << n << "th term is: " << res;
//     return 0;
// }

// int fib(int n) {
//     if(n == 0) {
//         return 0;
//     }
//     if(n == 1) {
//         return 1;
//     }

//     int fibNm1 = fib(n - 1);
//     int fibNm2 = fib(n - 2);
//     int fibN = fibNm1 + fibNm2;
//     return fibN;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int num1, num2, n;
//     cout << "Enter a Number: ";
//     cin >> n;
//     num1 = 0;
//     num2 = 1;

//     for(int i = 0; i <= n; i = num1 + num2) {
//         cout << i << "\t";
//         num1 = num2;
//         num2 = i;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, num1, num2, i;
//     cout << "Enter nth term: ";
//     cin >> n;
//     num1 = 0;
//     num2 = 1;
//     i = 0;

//     for(int count = 1; count <= n; count++) {
//         cout << i << "\t";
//         num1 = num2;
//         num2 = i;
//         i = num1 + num2;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void sum(int a = 5, int b = 10);

// int main() {
//     sum();
//     sum(10);
//     sum(10, 15);
//     return 0;
// }

// void sum(int a, int b) {
//     cout << "Addition = " << a + b << endl;
// }

// #include<iostream>
// using namespace std;

// int sum(int a, int b);

// int main() {
//     int a = 5, b = 3;
//     int res = sum(a, b);
//     cout << a << " + " << b << " = " << res;
//     return 0;
// }

// int sum(int a, int b) {
//     return a + b;
// }

// #include<iostream>
// using namespace std;

// void defaultN(int a = 5, int b = 6); // passing default argument on function prototype

// int main() {
//     defaultN();
//     defaultN(10);
//     defaultN(3, 6);
//     return 0;
// }

// void defaultN(int a, int b) {
//     cout << a << " + " << b << " = " << a + b << endl;
// }

// #include<iostream>
// using namespace std;

// inline int square(int a) {
//     return a * a;
// }

// inline int cube(int a) {
//     return a * a * a;
// }

// int main() {
//     int a = 3;
//     cout << "Square of 3 = " << square(a) << endl;
//     cout << "Cube of 3 = " << cube(a) << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void myFunction(string country = "Norway");

// int main() {
//     myFunction("Sweden");
//     myFunction("India");
//     myFunction();
//     myFunction("USA");
//     return 0;
// }

// void myFunction(string country) {
//     cout << country << endl;
// }

// #include<iostream>
// using namespace std;

// void myFunction(int myNumbers[5]);

// int main() {
//     int myNumbers[5] = {10, 20, 30, 40, 50};
//     myFunction(myNumbers);
//     return 0;
// }

// void myFunction(int myNumbers[5]) {
//     for(int i = 0; i < 5; i++) {
//         cout << myNumbers[i] << endl;
//     }
// }

#include<iostream>
using namespace std;

int sum(int n) {
    if(n > 0) {
        return n + sum(n - 1);
    }
    else {
        return 0;
    }
}

int main() {
    int res = sum(10);
    cout << res;
    return 0;
}