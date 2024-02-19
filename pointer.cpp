// #include<iostream>
// using namespace std;

// int main() {
//     // What is a pointer ? ----> Data type which holds the address of other data types
//     int a = 3;
//     int* b = &a;

//     // & ----> (Address of) Operator
//     cout << "The address of a is " << &a << endl;
//     cout << "The address of a is " << b << endl;

//     // * ----> (value at) Dereference Operator
//     cout << "The value at address b is " << *b;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int a = 3;
//     int* ptr = &a;

//     cout << "The address of a is " << &a << endl;
//     cout << "The address of a is " << ptr << endl;

//     cout << "The value at address *ptr is " << *ptr << endl;
//     cout << "The value at address *(ptr) is " << *(ptr);
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
//     string food = "pizza";
//     string* ptr = &food;

//     cout << food << endl;
//     cout << &food << endl;
//     cout << ptr;
//     return 0;
// }

#include<iostream>
using namespace std;

int main() {
    string food = "pizza";
    string* ptr = &food;

    cout << food << endl;
    cout << &food << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = "Hamburger";
    cout << *ptr << endl;
    cout << food;
    return 0;
}