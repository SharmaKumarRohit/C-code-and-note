// <----------------------------------------- The if Statement -------------------------------------->
// #include<iostream>
// using namespace std;

// int main() {
//     int i = 0;
//     if(i < 3) {
//         cout << i << endl;
//         i++;
//     }
//     return 0;
// }

// <----------------------------------------- The else Statement ------------------------------------->
// #include<iostream>
// using namespace std;

// int main() {
//     int time = 20;
//     if(time < 18) {
//         cout << "Good day.";
//     }
//     else {
//         cout << "Good evening.";
//     }
//     // Outputs - "Good evening."
//     return 0;
// }

// <--------------------------------------- The else if Statement -------------------------------------->
// #include<iostream>
// using namespace std;

// int main() {
//     int age = 20;
//     if(age >= 0 && age < 18) {
//         cout << "You are adult.";
//     }
//     else if(age >= 18 && age < 50) {
//         cout << "You are young.";
//     }
//     else {
//         cout << "You are old.";
//     }
//     return 0;
// }

// <------------------------------ Ternary Operator (Short Hand if... else) ------------------------->
// #include<iostream>
// using namespace std;

// int main() {
//     int marks = 76;
//     string result = (marks >= 30) ? "Pass" : "Fail";
//     cout << result;
//     return 0;
// }

// <---------------------------------------- switch Statement --------------------------------------->
// #include <iostream>
// using namespace std;

// int main()
// {
//     int day = 5;
//     switch (day)
//     {
//     case 1:
//         cout << "Monday";
//         break;
//     case 2:
//         cout << "Tuesday";
//         break;
//     case 3:
//         cout << "Wednesday";
//         break;
//     case 4:
//         cout << "Thursday";
//         break;
//     case 5:
//         cout << "Friday";
//         break;
//     case 6:
//         cout << "Saturday";
//         break;
//     case 7:
//         cout << "Sunday";
//         break;
//     default:
//         cout << "Not a vaild day.";
//     }
//     // Outputs - "Friday"
//     return 0;
// }

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    if(n % 2 == 0) {
        cout << n << " is an Even Number";
    }
    else {
        cout << n << " is an Odd Number";
    }
    return 0;
}