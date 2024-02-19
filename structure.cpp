// #include<iostream>
// #include<string>
// using namespace std;

// struct employee {
//     int eId;
//     string name;
//     float salary;
// };

// int main() {
//     struct employee rohit;
//     rohit.eId = 1;
//     rohit.name = "Rohit";
//     rohit.salary = 12000000;

//     cout << "Employee Id : " << rohit.eId << endl;
//     cout << "Employee Name : " << rohit.name << endl;
//     cout << "Employee Salary : " << rohit.salary << endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// typedef struct employee {
//     int eId;
//     string name;
//     float salary;
// } emp;

// int main() {
//     emp abhay;
//     abhay.eId = 1;
//     abhay.name = "Abhay Sharma";
//     abhay.salary = 1200000000000000000;

//     cout << "Employee Id : " << abhay.eId << endl;
//     cout << "Employee Name : " << abhay.name << endl;
//     cout << "Employee Salary : " << abhay.salary << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// union money {
//     int rice;
//     char car;
//     float pounds;
// };

// int main() {
//     money u;
//     u.rice = 10;
//     u.car = 'R';
//     u.pounds = 2.8f;
//     cout << u.rice << endl;
//     cout << u.car << endl;
//     cout << u.pounds << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// struct {
//     int num;
//     string letter;
// } myStructure;

// int main() {
//     myStructure.num = 1;
//     myStructure.letter = "memeber";

//     cout << myStructure.num << endl;
//     cout << myStructure.letter;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// struct {
//     string brand;
//     string model;
//     int year;
// } car1, car2;

// int main() {
//     car1.brand = "BMW";
//     car1.model = "X5";
//     car1.year = 1999;

//     car2.brand = "Ford";
//     car2.model = "X4";
//     car2.year = 2004;

//     cout << car1.brand << " " << car1.model << " " << car1.year << endl;
//     cout << car2.brand << " " << car2.model << " " << car2.year;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// struct car {
//     string brand;
//     string model;
//     int year;
// };

// int main() {
//     car c1;
//     c1.brand = "BMW";
//     c1.model = "X5";
//     c1.year = 1999;

//     car c2;
//     c2.brand = "Ford";
//     c2.model = "X4";
//     c2.year = 2004;

//     cout << c1.brand << " " << c1.model << " " << c1.year << endl;
//     cout << c2.brand << " " << c2.model << " " << c2.year;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// struct employee {
//     int eId;
//     string name;
//     float salary;
// };

// int main() {
//     struct employee e1;
//     e1.eId = 1;
//     e1.name = "Rohit";
//     e1.salary = 120000000;

//     cout << e1.eId << " " << e1.name << " " << e1.salary << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// typedef struct employee {
//     int eId;
//     string name;
//     float salary;
// } emp;

// int main() {
//     emp e1;
//     e1.eId = 1;
//     e1.name = "Rohit";
//     e1.salary = 120000000;

//     cout << e1.eId << " " << e1.name << " " << e1.salary << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// union money {
//     int rice;
//     char car;
//     float pounds;
// };

// int main() {
//     union money m1;
//     m1.rice = 22;
//     m1.car = 'c';
//     m1.pounds = 3.11f;
//     cout << m1.pounds << endl;
//     cout << m1.rice << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     enum Meal {var1, var2, var3};
//     // cout << var1 << endl;
//     // cout << var2 << endl;
//     // cout << var3 << endl;
//     Meal m1 = var2;
//     cout << (var2 == 1);
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

int main() {
    // string food = "pizza";
    // string &meal = food;

    // cout << food << endl;
    // cout << meal;

    string food = "pizza";

    cout << &food;
    return 0;
}