// #include <iostream>
// #include <string>
// #include <cmath>
// using namespace std;

// int main()
// {
//     // string firstName = "Rohit ";
//     // string lastName = "Kumar";
//     // string fullName = firstName + lastName;
//     // cout << fullName;

//     // string firstName = "Rohit";
//     // string lastName = "Kumar";
//     // string fullName = firstName + " " + lastName;
//     // cout << fullName;

//     // string firstName = "Rohit ";
//     // string lastName = "Kumar";
//     // string fullName = firstName.append(lastName);
//     // cout << fullName;

//     // string firstName = "Abhay ";
//     // string lastName = "Sharma";
//     // string fullName = firstName.append(lastName);
//     // cout << fullName;

//     // int x = 10;
//     // int y = 20;
//     // int sum = x + y;
//     // cout << sum;

//     // string x = "10";
//     // string y = "20";
//     // string add = x + y;
//     // cout << add;

//     // string x = "10";
//     // int y = 20;
//     // int z = x + y;
//     // cout << z;

//     // string name = "Abhay Sharma";
//     // cout << name.length();

//     // string name = "Rohit Kumar";
//     // cout << name.size();

//     // string name = "Rohit Kumar";
//     // cout << name[0];
//     // cout << name[1];
//     // cout << name[2];
//     // cout << name[3];
//     // cout << name[4];
//     // cout << name[5];
//     // cout << name[6];
//     // cout << name[7];
//     // cout << name[8];
//     // cout << name[9];
//     // cout << name[10];

//     // string name = "Rohit Kumar ";
//     // name[0] = 'A';
//     // name[1] = 'b';
//     // name[2] = 'h';
//     // name[3] = 'a';
//     // name[4] = 'y';
//     // name[6] = 'S';
//     // name[7] = 'h';
//     // name[8] = 'a';
//     // name[9] = 'r';
//     // name[10] = 'm';
//     // name[11] = 'a';
//     // cout << name;

//     // string text = "We are the so-called \"vikings\" form the north.";
//     // cout << text;

//     // string text = "It\'s alright.";
//     // cout << text;

//     // string text = "29 \\ 11 \\ 2023";
//     // cout << text;

//     // string fullName;
//     // cout << "Enter Your Full Name: ";
//     // cin >> fullName;
//     // cout << "Your Name is " << fullName;

//     // string fullName;
//     // cout << "Enter Your Full Name: ";
//     // getline(cin, fullName);
//     // cout << "Your Name is " << fullName;

//     // int x = 10;
//     // int y = 20;
//     // int value = max(x, y);
//     // cout << value;

//     // int x = 10;
//     // int y = 20;
//     // int value = min(x, y);
//     // cout << value;

//     // cout << sqrt(64) << endl;
//     // cout << round(2.6) << endl;
//     // cout << round(2.3) << endl;
//     // cout << log10(10);

//     // int age;
//     // cout << "Enter Your Age: ";
//     // cin >> age;
//     // int votingAge = 18;

//     // if(age >= votingAge) {
//     //     cout << "They can vote";
//     // }

//     // else if(age < votingAge && age >= 0) {
//     //     cout << "They can not vote";
//     // }

//     // else {
//     //     cout << "Only Enter Your Vaild Age";
//     // }

//     // int age = 21;
//     // int votingAge = 18;
//     // (age >= votingAge) ? cout << "They can vote" : cout << "They cannot vote";
//     // return 0;

//     // int num1, num2, num;
//     // cout << "<---- Calculator ---->\n";
//     // cout << "1. Addition\n";
//     // cout << "2. Subtraction\n";
//     // cout << "3. Multiplication\n";
//     // cout << "4. Division\n";
//     // cout << "Enter here: ";
//     // cin >> num;
//     // cout << "Enter First oprand: ";
//     // cin >> num1;
//     // cout << "Enter second oprand: ";
//     // cin >> num2;
//     // switch(num) {
//     //     case 1: cout << num1 << " + " << num2 << " = " << num1 + num2;
//     //     break;
//     //     case 2: cout << num1 << " - " << num2 << " = " << num1 - num2;
//     //     break;
//     //     case 3: cout << num1 << " * " << num2 << " = " << num1 * num2;
//     //     break;
//     //     case 4: cout << num1 << " / " << num2 << " = " << num1 / num2;
//     //     break;
//     //     default: cout << "Enter Valid Number";
//     // }

//     // int i = 1, sum = 0;

//     // while(i <= 5) {
//     //     sum += i;
//     //     i++;
//     // }

//     // cout << "sum of 5 natural is " << sum;

//     // int i = 1, fact = 1;

//     // do {
//     //     fact *= i;
//     //     i++;
//     // } while(i <= 5);

//     // cout << "Factorial of 5! is " << fact;

//     // int num = 5;

//     // for(int i = 1; i <= 10; i++) {
//     //     cout << num << " x " << i << " = " << num * i << endl;
//     // }

//     // for(int i = 1; i <= 2; i++) {
//     //     cout << "outer: " << i << endl;
//     //     for(int i = 1; i <= 3; i++) {
//     //         cout << "\tinner: " << i << endl;
//     //     }
//     // }

//     // int number[] = {10, 20, 30, 40, 50, 60};

//     // for(int i : number) {
//     //     cout << i << "\t";
//     // }

//     // int i = 1;

//     // while(i <= 10) {
//     //     if(i == 5) {
//     //         break;
//     //     }
//     //     cout << i << "\t";
//     //     i++;
//     // }

//     // int i = 1;

//     // while(i <= 10) {
//     //     if(i == 6) {
//     //         i++;
//     //         continue;
//     //     }
//     //     cout << i << endl;
//     //     i++;
//     // }

//     // string text = "Abhay Sharma";
//     // int count = 0;

//     // for(int i = 0; i <= text.length(); i++) {
//     //     if(text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' || text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U') {
//     //         count++;
//     //     }
//     // }
//     // cout << "Vowels is " << count;

//     // float a, b, c, root1, root2, root_part;
//     // cout << "Enter a three number: ";
//     // cin >> a;
//     // cin >> b;
//     // cin >> c;
//     // root_part = sqrt((b * b) - (4 * a * c));
//     // if(root_part > 0) {
//     //     root1 = (-b + root_part) / 2 * a;
//     //     root2 = (-b - root_part) / 2 * a;
//     //     cout << "root1 = " << root1 << endl << "root2 = " << root2;
//     // }
//     // else {
//     //     cout << "Root are Imagenary";
//     // }

//     // float p, t, r, am, si;
//     // cout << "Enter a amount: ";
//     // cin >> p;
//     // cout << "Enter a time: ";
//     // cin >> t;
//     // r = 11.5;
//     // si = (p * t * r) / 100;
//     // cout << "Simple Interest is: " << si << endl;
//     // am = si + p;
//     // cout << "Total amount is: " << am;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     cout << "\n<---- Fill Your Loan Amount Details ---->\n\n";
//     double p, t, amount, interest;
//     cout << "Enter Your Loan Amount: ";
//     cin >> p;
//     cout << "Enter Your Loan Time: ";
//     cin >> t;
//     float r = 11.5;
//     cout << "\n<---- Your Loan Details ---->\n\n";
//     cout << "Your Loan Amount is " << p << endl;
//     cout << "Your Loan Time is " << t << endl;
//     cout << "Your Loan Interest is " << r << endl;
//     interest = (p * t * r) / 100;
//     cout << "Your Loan Amount Interest is " << interest << endl;
//     amount = p + interest;
//     cout << "Your Loan Amount with Interest is " << amount;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int num = 12345;
//     cout << "Original Number: " << num << endl;
//     int a, b, c, d, e;
//     cout << "Now Reversing Number: ";
//     a = num % 10;
//     cout << a;
//     num = num / 10;
//     b = num % 10;
//     cout << b;
//     num = num / 10;
//     c = num % 10;
//     cout << c;
//     num = num / 10;
//     d = num % 10;
//     cout << d;
//     num = num / 10;
//     e = num % 10;
//     cout << e;
//     return 0;
// }

// Formula --> f = c * 9 / 5 + 32;
// Formula --> c = f - 32 * 5 / 9;

// #include<iostream>
// using namespace std;

// int main() {
//     float cel, fah;
//     cout << "Enter Temp in cels: ";
//     cin >> cel;
//     fah = (cel * (9.0 / 5.0)) + 32;
//     cout << "Fah is " << fah;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     float fah, cel;
//     cout << "Enter Temp in Fah: ";
//     cin >> fah;
//     cel = (fah - 32) * (5.0 / 9.0);
//     cout << "Fah is " << cel;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     // Prime Number --> Divided by 1 and itself. Prime Numbers have exactly two factors.
//     int n, count = 0;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
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
//     int n, count = 0;
//     cout << "Enter a number: ";
//     cin >> n;
//     int i = 1;

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
//     int n, count = 0;
//     cout << "Enter a number: ";
//     cin >> n;
//     int i = 1;

//     do {
//         if(n % i == 0) {
//             count++;
//         }
//         i++;
//     }while(i <= n);

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
//     int n, count = 0;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         if(n % i == 0) {
//             cout << i << endl;
//             count++;
//         }
//     }

//     cout << n << " Ka Total Factors = " << count;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, count = 0;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
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
//     int n, x, y, z;
//     cout << "Enter a Number: ";
//     cin >> n;
//     x = 0;
//     y = 1;
//     z = 0;

//     while(z <= n) {
//         cout << z << endl;
//         x = y;
//         y = z;
//         z = x + y;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, x, y;
//     cout << "Enter a Number: ";
//     cin >> n;
//     x = 0;
//     y = 1;

//     for(int i = 0; i <= n; i = x + y) {
//         cout << i << endl;
//         x = y;
//         y = i;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, x, y, z, count = 1;
//     cout << "Enter a Number: ";
//     cin >> n;
//     x = 0;
//     y = 1;
//     z = 0;

//     while(count <= n) {
//         x = y;
//         y = z;
//         z = x + y;
//         count = count + 1;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int a = 5, b = 6, c;
//     c = (a > b) ? a : b;
//     cout << c;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;
//     cout << "Enter a Number: ";
//     cin >> n;
//     int temp = n;

//     for( ; n > 0; n /= 10) {
//         sum = sum + (n % 10);
//     }
//     cout << "sum of digits number " << temp << " = " << sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;
//     cout << "Enter a Number: ";
//     cin >> n;
//     int temp = n;

//     while(n > 0) {
//         sum = sum + (n % 10);
//         n /= 10;
//     }
//     cout << "sum of digits number " << temp << " = " << sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, prod = 1;
//     cout << "Enter a Number: ";
//     cin >> n;
//     int temp = n;

//     for( ; n > 0; n /= 10) {
//         prod = prod * (n % 10);
//     }
//     cout << "product of digit number " << temp << " = " << prod;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, prod = 1;
//     cout << "Enter a Number: ";
//     cin >> n;
//     int temp = n;

//     while(n > 0) {
//         prod = prod * (n % 10);
//         n /= 10;
//     }
//     cout << "product of digit number " << temp << " = " << prod;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(int i = 0; i <= n; i++) {
//         sum = sum + i;
//     }
//     cout << "sum of " << n << "th natural number = " << sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;
//     cout << "Enter a Number: ";
//     cin >> n;
//     int i = 0;

//     while(i <= n) {
//         sum += i;
//         i++;
//     }
//     cout << "sum of " << n << "th natural number = " << sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, sum = 0, prod = 1;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for( ; n > 0; n /= 10) {
//         int digit = n % 10;
//         if(digit % 2 == 0) {
//             sum = sum + digit;
//         }
//         else {
//             prod = prod * digit;
//         }
//     }
//     cout << "sum of digit = " << sum << endl;
//     cout << "product of digit = " << prod;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n = 5, fact = 1;

//     for(int i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     cout << "Factorial = " << fact;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n = 5, fact = 1, i;
//     i = 1;

//     while(i <= n) {
//         fact *= i;
//         i++;
//     }
//     cout << "Factorial = " << fact;
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
//         n /= 10;
//     }
//     cout << "Reversed Number = " << rev;
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
//     cout << "Reversed Number: " << rev;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, rev = 0, temp;
//     cout << "Enter a Number: ";
//     cin >> n;
//     temp = n;

//     while(n > 0) {
//         rev = (rev * 10) + (n % 10);
//         n /= 10;
//     }

//     if(rev == temp) {
//         cout << "(" << temp << " = " << rev << ")" << " is a Palindrome Number";
//     }
//     else {
//         cout << "(" << temp << " != " << rev << ")" << " is Not a Palindrome Number";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, rev = 0, temp;
//     cout << "Enter a Number: ";
//     cin >> n;
//     temp = n;

//     for( ; n > 0; n /= 10) {
//         rev = (rev * 10) + (n % 10);
//     }

//     if(rev == temp) {
//         cout << "(" << temp << " = " << rev << ")" << " is a Palindrome Number";
//     }
//     else {
//         cout << "(" << temp << " != " << rev << ")" << " is Not a Palindrome Number";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, count = 0;
//     cout << "Enter a Number: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
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
//     int n = 2;

//     for(int i = 1; i <= 10; i++) {
//         cout << n << " x " << i << " = " << n * i << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n = 3, i;
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
//     int num1, num2, n, count = 1;
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
//     cout << "Enter a Number: ";
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

// int main() {
//     int n, num1, num2, i, count = 1;
//     cout << "Enter a Number: ";
//     cin >> n;
//     num1 = 0;
//     num2 = 1;
//     i = 0;

//     while(count <= n) {
//         cout << i << "\t";
//         num1 = num2;
//         num2 = i;
//         i = num1 + num2;
//         count++;
//     }
//     return 0;
// }

// #include<iostream>
// #include<math.h>
// using namespace std;

// int main() {
//     float n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     float res = pow(n, 2);
//     cout << res;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, p, i, prod = 1;
//     cout << "Enter value of n & p: ";
//     cin >> n >> p;
//     i = 1;

//     while(i <= p) {
//         prod *= n;
//         i++;
//     }
//     cout << n << "^" << p << " = " << prod;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, p, i, prod = 1;
//     cout << "Enter value of n & p: ";
//     cin >> n >> p;

//     for(i = 1; i <= p; i++) {
//         prod *= n;
//     }
//     cout << n << "^" << p << " = " << prod;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     if(n % 2 == 0) {
//         goto even;
//     }
//     else {
//         goto odd;
//     }

//     even: cout << n << " is a Even Number";
//     odd: cout << n << " is a Odd Number";
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int num1, num2, num;
//     cout << "1. Addition\n";
//     cout << "2. Subtraction\n";
//     cout << "3. Multiplication\n";
//     cout << "4. Division\n";
//     cout << "Enter here: ";
//     cin >> num;
//     cout << "Enter Operand1 and Operand2: ";
//     cin >> num1 >> num2;

//     switch(num) {
//         case 1: cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
//         break;

//         case 2: cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
//         break;

//         case 3: cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
//         break;

//         case 4: cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
//         break;

//         default : cout << "Please enter valid number";
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
//     char n;
//     cout << "Enter a Number: ";
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
//     char n, i, j;
//     cout << "Enter a Number: ";
//     cin >> n;
//     i = 'a';

//     while(i <= n) {
//         int s = 1;
//         while(s <= n - i) {
//             cout << "   ";
//             s++;
//         }
//         j = 'a';
//         while(j <= i) {
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
//     int n, i, j, s;
//     cout << "Enter a Number: ";
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

// void printHello();

// int main() {
//     printHello();
//     return 0;
// }

// void printHello() {
//     cout << "Hello World\n";
// }

// #include<iostream>
// using namespace std;

// void printHello(int count);

// int main() {
//     printHello(5);
//     return 0;
// }

// void printHello(int count) {
//     if(count == 0) {
//         return;
//     }
//     cout << "Hello World\n";
//     printHello(count - 1);
// }

// #include<iostream>
// using namespace std;

// int sum(int n);

// int main() {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     int res = sum(n);
//     cout << "sum = " << res;
//     return 0;
// }

// int sum(int n) {
//     if(n == 0) {
//         return 0;
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
//     if(n == 1) {
//         return 1;
//     }

//     int num1 = fact(n - 1);
//     int num2 = num1 * n;
//     return num2;
// }

// #include<iostream>
// using namespace std;

// void country(string cName = "India") {
//     cout << "Country Name = " << cName << endl;
// }

// int main() {
//     country();
//     country("Norway");
//     return 0;
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
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;
//     cout << "Square of " << n << " = " << square(n) << endl;
//     cout << "Cube of " << n << " = " << cube(n) << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int add(int a, int b) {
//     return a + b;
// }

// float add(float a, float b) {
//     return a + b;
// }

// float add(float a, int b) {
//     return a + b;
// }

// float add(float a, int b, int c) {
//     return a + b + c;
// }

// int main() {
//     cout << "Addition = " << add(2, 8) << endl;
//     cout << "Addition = " << add(2, 8.5) << endl;
//     cout << "Addition = " << add(2, 8) << endl;
//     cout << "Addition = " << add(2.5, 8, 8) << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class maxN {
//     int a, b, c;

//     public:
//     void setData();
//     void getData();
// };

// void maxN::setData() {
//     cout << "Enter three Number: ";
//     cin >> a >> b >> c;
// }

// void maxN::getData() {
//     if(a > b) {
//         if(a > c) {
//             cout << a << ", a is max number.\n";
//         }
//     }
//     else if(b > a) {
//         if(b > c) {
//             cout << b << ", b is max number.\n";
//         }
//     }
//     else {
//         cout << c << ", c is max number.\n";
//     }
// }

// int main() {
//     maxN num;
//     num.setData();
//     num.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Reverse {
//     int n;

//     public:
//     void setData();
//     void getData();
// };

// void Reverse::setData() {
//     cout << "Enter a Number: ";
//     cin >> n;
// }

// void Reverse::getData() {
//     int rev = 0;

//     while(n > 0) {
//         rev = (rev * 10) + (n % 10);
//         n = n / 10;
//     }

//     cout << "Reversed Number = " << rev;
// }

// int main() {
//     Reverse num;
//     num.setData();
//     num.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class student {
//     string name;
//     int rollno;

//     public:
//     void setData();
//     void getData();
// };

// void student::setData() {
//     cout << "Enter Name of student: ";
//     cin >> name;
//     cout << "Enter student rollno: ";
//     cin >> rollno;
// }

// void student::getData() {
//     cout << "Student name: " << name << endl;
//     cout << "Student rollno: " << rollno << endl;
// }

// int main() {
//     student count[2];

//     for(int i = 0; i < 2; i++) {
//         count[i].setData();
//     }

//     for(int i = 0; i < 2; i++) {
//         count[i].getData();
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class MaxNum {
//     int a, b, c;

//     public:
//     void setData();
//     friend int findMax(MaxNum);
// };

// void MaxNum::setData() {
//     cout << "Enter a three Number: ";
//     cin >> a >> b >> c;
// }

// int findMax(MaxNum num1) {
//     if(num1.a > num1.b && num1.a > num1.c) {
//         cout << num1.a << ", A is max number.\n";
//     }
//     else if(num1.b > num1.c) {
//         cout << num1.b << ", B is max number.\n";
//     }
//     else {
//         cout << num1.c << ", C is max number.\n";
//     }
// }

// int main() {
//     MaxNum num;
//     num.setData();

//     findMax(num);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//     int a, b;
//     static int z;

//     public:
//     void setData(int x, int y);
//     void getData();
//     static void myFunction();
// };

// void demo::setData(int x, int y) {
//     a = x;
//     b = y;
//     z++;
// }

// void demo::getData() {
//     cout << "a = " << a << " b = " << b << " z = " << z << endl;
// }

// void demo::myFunction() {
//     cout << "Static Data member z is: " << z << endl;
// }

// int demo::z;

// int main() {
//     demo num;
//     num.setData(5, 10);
//     num.setData(9, 15);
//     num.getData();
//     num.getData();
//     demo::myFunction();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//     int a, b;
//     static int z;

//     public:
//     void setData(int x, int y) {
//         a = x;
//         b = y;
//         z++;
//     }

//     void getData() {
//         cout << "a = " << a << "\tb = " << b << "\tc = " << z << endl;
//     }

//     static void myfunction() {
//         cout << "Static Member function z is: " << z << endl;
//     }
// };

// int demo::z; // static function main important line hai.

// int main() {
//     demo num1, num2;
//     num1.setData(5, 8);
//     num2.setData(3, 5);
//     num1.getData();
//     num2.getData();
//     demo::myfunction();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class A {
//     public:
//     void functionMember() {
//         cout << "A is Inherited.\n";
//     }
// };

// class B:public A {
//     // public:
//     // void functionMember() {
//     //     cout << "B is Inherited.\n";
//     // }
// };

// class C:public B {
//     // public:
//     // void functionMember() {
//     //     cout << "C is Inherited.\n";
//     // }
// };

// int main() {
//     C Obj1;
//     Obj1.functionMember();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, sum = 0;
//     cout << "Enter a Number: ";
//     cin >> n;

//     while(n > 0) {
//         sum = sum + (n % 10);
//         n = n / 10;
//     }
//     cout << "Sum of Digit = " << sum << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void sum (int a = 5, int b = 6);

// int main() {
//     sum();
//     sum(8);
//     sum(9, 10);
//     return 0;
// }

// void sum(int a, int b) {
//     int sum = a + b;
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
//     cout << "Square = " << square(5) << endl;
//     cout << "Cube = " << cube(5) << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void add(int a, int b);
// void add(int a, float b);
// void add(int a, int b, int c);

// int main() {
//     add(2, 8);
//     add(3, 5.8f);
//     add(3, 6, 8);
//     return 0;
// }

// void add(int a, int b) {
//     cout << a << " + " << b << " = " << a + b << endl;
// }

// void add(int a, float b) {
//     cout << a << " + " << b << " = " << a + b << endl;
// }

// void add(int a, int b, int c) {
//     cout << a << " + " << b << " + " << c << " = " << a + b + c;
// }

// #include<iostream>
// using namespace std;

// class Addition {
//     int a, b;

//     public:
//     void setter() {
//         cout << "Enter two number: ";
//         cin >> a >> b;
//     }

//     void getter() {
//         cout << a << " + " << b << " = " << a + b;
//     }
// };

// int main() {
//     Addition add;
//     add.setter();
//     add.getter();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Check {
//     int a;

//     public:
//     void setter() {
//         cout << "Enter a Number: ";
//         cin >> a;
//     }

//     void getter() {
//         if(a % 2 == 0) {
//             cout << a << " is an Even Number";
//         }
//         else {
//             cout << a << " is an Odd Number";
//         }
//     }
// };

// int main() {
//     Check num;
//     num.setter();
//     num.getter();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Check {
//     int a;

//     public:
//     void setter() {
//         cout << "Enter a Number: ";
//         cin >> a;
//     }

//     void getter() {
//         if(a > 0) {
//             cout << a << " is a Postive Number";
//         }
//         else if(a < 0) {
//             cout << a << " is a Negative Number";
//         }
//         else {
//             cout << a << " is a Zero";
//         }
//     }
// };

// int main() {
//     Check num;
//     num.setter();
//     num.getter();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Game {
//     int winningNumber = 15, guessNumber;

//     public:
//     void setter() {
//         cout << "Enter Your Guess Number: ";
//         cin >> guessNumber;
//     }

//     void getter() {
//         if(guessNumber == winningNumber) {
//             cout << "Your guess is right!!";
//         }
//         else {
//             if(guessNumber > winningNumber) {
//                 cout << "too high!!";
//             }
//             else {
//                 cout << "too low!!";
//             }
//         }
//     }
// };

// int main() {
//     Game play;
//     play.setter();
//     play.getter();
//     return 0;
// }

#include<iostream>
using namespace std;

class Max {
    int a, b, c;

    public:
    void setter() {
        cout << "Enter three and check who's number is greater: ";
        cin >> a >> b >> c;
    }

    void getter() {
        if(a > b && a > c) {
            cout << a << ", A is a greater number";
        }
        else if(b > c) {
            cout << b << ", B is a greater number";
        }
        else {
            cout << c << ", C is a greater number";
        }
    }
};

int main() {
    Max check;
    check.setter();
    check.getter();
    return 0;
}