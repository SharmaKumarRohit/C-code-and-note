#include<iostream>
#include<cmath>
using namespace std;

int main() {
    // // 1.) Write a program to take to numbers as input and print the sum as an output.
    // int num1, num2, sum;
    // cout << "Enter a num1: ";
    // cin >> num1;
    // cout << "Enter a num2: ";
    // cin >> num2;
    // sum = num1 + num2;
    // cout << num1 << " + " << num2 << " = " << sum;

    // // 2. ) WAP to find the average the 5 numbers.
    // int num1, num2, num3, num4, num5;
    // cout << "Enter a 5 numbers: ";
    // cin >> num1;
    // cin >> num2;
    // cin >> num3;
    // cin >> num4;
    // cin >> num5;
    // cout << "(" << num1 << " + " << num2 << " + " << num3 << " + " << num4 << " + " << num5 << ")" << " / " << 5 << " = " << (num1 + num2 + num3 + num4 + num5) / 5;

    // // 3. ) Calculate simple Interest principal amount 5000 for a peroid of 5 year at a rate of Interest 10% per amount.
    // int pri, time, rate, SI;
    // pri = 5000;
    // time = 5;
    // rate = 10;
    // SI = (pri * time * rate) / 100;
    // cout << "(" << pri << " * " << time << " * " << rate << ")" << " / " << 100 << " = " << SI;

    // // 4. ) WAP to Calculate the area of triangle.
    // int base, height, triangle;
    // cout << "Enter base value: ";
    // cin >> base;
    // cout << "Enter height value: ";
    // cin >> height;
    // triangle = (1 * base * height) / 2;
    // cout << "(" << 1 << " * " << base << " * " << height << ")" << " / " << 2 << " = " << triangle;

    // // 5. ) WAP to Calculate the area of a Scalene triangle.
    // int a, b, c;
    // float S, area;
    // cout << "Enter 3 values: ";
    // cin >> a;
    // cin >> b;
    // cin >> c;
    // S = (a + b + 2) / 2;
    // area = sqrt(S * (S - a) * (S - b) * (S - c));
    // cout << "Area of a Scalene triangle = " << area;

    // // 6. ) Write a program two inter change value of two different variable.
    // int num1 = 10, num2 = 20, temp;
    // cout << "<---- Original Value ---->\n" << "num1 = " << num1 << "\t" << "num2 = " << num2 << "\n\n";
    // temp = num1;
    // num1 = num2;
    // num2 = temp;
    // cout << "<---- Inter Change Value ---->\n" << "num1 = " << num1 << "\t" << "num2 = " << num2;

    // 7. ) Write a program two inter change value of two different variable without another variable.
    int num1 = 10, num2 = 20;
    cout << "<---- Original Value ---->\n" << "num1 = " << num1 << "\t" << "num2 = " << num2 << "\n\n";
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "<---- Inter Change Value ---->\n" << "num1 = " << num1 << "\t" << "num2 = " << num2;
    return 0;
}