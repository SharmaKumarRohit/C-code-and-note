// #include<iostream>
// using namespace std;

// class myClass { // The class
//     public:     // Access Specifier
//     int myNum;  // Attribute (int variable)
//     string myString; // Attribute (string variable)
// };

// int main() {
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class myClass { // The class
//     public:     // Access Specifier
//     int myNum;  // Attribute (int variable)
//     string myString; // Attribute (string variable)
// };

// int main() {
//     myClass objName; // Create an object of myClass

//     // Access attributes and set values
//     objName.myNum = 15;
//     objName.myString = "some text";

//     // print attribute values
//     cout << objName.myNum << endl;
//     cout << objName.myString;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// // Create a Car Class with same attribute
// class car {
//     public:
//     string brand;
//     string model;
//     int year;
// };

// int main() {
//     // Create an object of car
//     car carObj1;
//     carObj1.brand = "BMW";
//     carObj1.model = "X5";
//     carObj1.year = 1999;

//     // Create another object of car
//     car carObj2;
//     carObj2.brand = "Ford";
//     carObj2.model = "Mustang";
//     carObj2.year = 1969;
 
//     // print attribute values
//     cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
//     cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Myclass { // The Class
//     public:     // Access Specifier
//     void myMethod() { // Method / Function Define inside the class
//         cout << "Hello World!";
//     }
// };

// int main() {
//     Myclass myObj; // Create an Object of Myclass
//     myObj.myMethod(); // Call the Method
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Myclass { // The Class
//     public:     // Access Specifier
//     void myMethod(); // Method / Function declearation
// };

// // Method / Function definition outside the class
// // (::) this operator find function scope
// void Myclass::myMethod() {
//     cout << "Hello World!";
// }

// int main() {
//     Myclass myobj; // Create an object of Myclass
//     myobj.myMethod(); // Call the Method
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class MyClass {
//     public:
//     void myMethod() {
//         cout << "Hello World!";
//     }
// };

// int main() {
//     MyClass myObj;
//     myObj.myMethod();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class MyClass {
//     public:
//     void myMethod();
// };

// void MyClass::myMethod() {
//     cout << "Hello World!";
// }

// int main() {
//     MyClass myObj;
//     myObj.myMethod();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Car {
//     public:
//     int speed(int maxSpeed);
// };

// int Car::speed(int maxSpeed) {
//     return maxSpeed;
// }

// int main() {
//     Car myObj; // Create an object of car
//     cout << myObj.speed(200);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class MyClass { // The Class
//     public:     // Access Specifier
//     MyClass() { // Constructor
//         cout << "Hello World";
//     }
// };

// int main() {
//     MyClass myObj; // Create an Object of MyClass (this will call the constructor)
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Car {
//     public:
//     string brand;
//     string model;
//     int year;
//     Car(string x, string y, int z) { // Constructor with parameters
//         brand = x;
//         model = y;
//         year = z;
//     }
// };

// int main() {
//     // Create Car Objects and the constructor with different values
//     Car myObj1("BMW", "X5", 1999);
//     Car myObj2("Ford", "Mustang", 1969);

//     // print values
//     cout << myObj1.brand << " " << myObj1.model << " " << myObj1.year << endl;
//     cout << myObj2.brand << " " << myObj2.model << " " << myObj2.year;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Car {
//     public:
//     string brand;
//     string model;
//     int year;
//     Car(string x, string y, int z);
// };

// Car::Car(string x, string y, int z) {
//     brand = x;
//     model = y;
//     year = z;
// }

// int main() {
//     Car Obj1("BMW", "X5", 1999);
//     Car Obj2("Ford", "Mustang", 1969);

//     cout << Obj1.brand << " " << Obj1.model << " " << Obj1.year << endl;
//     cout << Obj2.brand << " " << Obj2.model << " " << Obj2.year << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class MyClass {
//     public: // Public Speicfier
//     int x; // Public attribute
//     private: // Private Speicfier
//     int y; // Private attribute
// };

// int main() {
//     MyClass Obj1;
//     Obj1.x = 18; // Allowed (Public)
//     Obj1.y = 20; // Not Allowed (Private)
//     return 0;
// } // return error this code

// #include<iostream>
// using namespace std;

// class employee {
//     private:
//     // Private attribute
//     int salary;

//     public:
//     // Setter
//     void setSalary(int s) {
//         salary = s;
//     }

//     // Getter
//     int getSalary() {
//         return salary;
//     }
// };

// int main() {
//     employee myObj;
//     myObj.setSalary(50000);
//     cout << myObj.getSalary();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class A {
//     public:
//     string brand = "Ford";
//     void someWord() {
//         cout << "Hello World!\n";
//     }
// };

// class B:public A {
//     public:
//     string model = "Mustang";
// };

// int main() {
//     B obj;
//     obj.someWord();
//     cout << obj.brand + " " + obj.model;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class vehicle {
//     public:
//     string brand = "Ford";
//     void hond() {
//         cout << "Inherited Class\n";
//     }
// };

// class car : public vehicle {
//     public:
//     string model = "Mustang";
// };

// int main() {
//     car myCar;
//     myCar.hond();
//     cout << myCar.brand + " " + myCar.model;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// // Base Class (Parent)
// class MyClass {
//     public:
//     void myFunction() {
//         cout << "Some Content in Parent Class.\n";
//     }
// };

// // Derived Class (Child)
// class MyChild : public MyClass {
// };

// // Derived Class (grandChild)
// class MyGrandChild : public MyChild {
// };

// int main() {
//     MyGrandChild myObj;
//     myObj.myFunction();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// // Base Class
// class MyClass {
//     public:
//     void firstParent() {
//         cout << "Inherited First Parent\n";
//     }
// };

// // Another Base Class
// class MyAnotherClass {
//     public:
//     void secondParent() {
//         cout << "Inherited Second Parent";
//     }
// };

// // Derived Class
// class MyChildClass : public MyClass, public MyAnotherClass {
// };

// int main() {
//     MyChildClass myObj;
//     myObj.firstParent();
//     myObj.secondParent();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class MyClass {
//     public:
//     void myFunction() {
//         cout << "Inherited Parent Class";
//     }
// };

// class MyChildClass : public MyClass {
// };

// class MyGrandClass : public MyClass {
// };

// int main() {
//     MyGrandClass myObj;
//     myObj.myFunction();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Employee {
//     protected:
//     int salary;
// };

// class Programmer : public Employee {
//     public:
//     int bonus;
//     void setSalary(int s) {
//         salary = s;
//     }

//     int getSalary() {
//         return salary;
//     }
// };

// int main() {
//     Programmer myObj;
//     myObj.setSalary(50000);
//     myObj.bonus = 15000;
//     cout << "Salary = " << myObj.getSalary() << endl;
//     cout << "Bonus = " << myObj.bonus << endl;
//     cout << "Total Programmer Salary = " << myObj.getSalary() + myObj.bonus << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Employee {
//     protected:
//     int salary;

//     public:
//     void setSalary(int s) {
//         salary = s;
//     }

//     int getSalary() {
//         return salary;
//     }
// };

// int main() {
//     Employee myObj;
//     myObj.setSalary(50000);
//     cout << "Salary : " << myObj.getSalary();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Animal {
//     public:
//     void animalSound() {
//         cout << "The animal makes a sound\n";
//     }
// };

// class Pig : public Animal {
//     public:
//     void animalSound() {
//         cout << "The Pig says : wee wee\n";
//     }
// };

// class Dog : public Animal {
//     public: 
//     void animalSound() {
//         cout << "The Dog says : bow wow\n";
//     }
// };

// int main() {
//     Animal myAnimal;
//     Pig myPig;
//     Dog myDog;

//     myAnimal.animalSound();
//     myPig.animalSound();
//     myDog.animalSound();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class student {
//     public:
//     int rollNo;
//     string name;
//     int marks;
// };

// int main() {
//     student stu1;
//     stu1.rollNo = 1;
//     stu1.name = "Rohit Kumar";
//     stu1.marks = 331;

//     student stu2;
//     stu2.rollNo = 2;
//     stu2.name = "Abhay Sharma";
//     stu2.marks = 386;

//     cout << stu1.rollNo << " " << stu1.name << " " << stu1.marks << endl;
//     cout << stu2.rollNo << " " << stu2.name << " " << stu2.marks;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class MyClass {
//     public:
//     void myFunction();
// };

// void MyClass::myFunction() {
//     cout << "Hello Rohit\n";
// }

// int main() {
//     MyClass myObj;
//     myObj.myFunction();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Car {
//     public:
//     string carName(string myCar);
// };

// string Car::carName(string myCar) {
//     return myCar;
// }

// int main() {
//     Car myCarName;

//     cout << myCarName.carName("Ford Mustang") << endl;
//     return 0;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main() {
//     // create and open a text file
//     ofstream Myfile("filename.txt");

//     // write to the file
//     Myfile << "Files can be tricky, but it is enough!";

//     // close the file
//     Myfile.close();
//     return 0;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main() {
//     // create a text string, which is used to ouput the text file
//     string myText;

//     // Read from the text file
//     ifstream myReadfile("filename.txt");

//     // use a while loop together with the getline() function to read the file line by line
//     while(getline(myReadfile, myText)) {
//         // output the text from the file
//         cout << myText;
//     }

//     // close the file
//     myReadfile.close();
//     return 0;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main() {
//     ofstream myFile("same.txt");

//     myFile << "Hello Brother, You are so..... amazing";

//     myFile.close();
//     return 0;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main() {
//     string Textfile;

//     ifstream myFile("same.txt");

//     while(getline(myFile, Textfile)) {
//         cout << Textfile;
//     }

//     myFile.close();
//     return 0;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main() {
//     ofstream MyFile("filename.txt");

//     MyFile << "Hey, You are so amazing but koe fida nahi";

//     MyFile.close();
//     return 0;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main() {
//     string myText;

//     ifstream MyReadfile("filename.txt");

//     while(getline(MyReadfile, myText)) {
//         cout << myText;
//     }

//     MyReadfile.close();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     try {
//         // Block of code to try
//         throw exception; // Throw an exception when a problem arise
//     }

//     catch() {
//         // Block of code to handle errors
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     try {
//         int age = 15;
//         if(age >= 18) {
//             cout << "Access granted - you are old enough.\n";
//         }
//         else {
//             throw (age);
//         }
//     }

//     catch(int myNum) {
//         cout << "Access Denied - you must be at least 18 years old.\n";
//         cout << "Age is : " << myNum;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     try {
//         int age = 15;
//         if(age >= 18) {
//             cout << "Block is access\n";
//         }
//         else {
//             throw (age);
//         }
//     }

//     catch(int myNum) {
//         cout << "Block is throw error\n";
//         cout << "Age is : " << myNum;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     try {
//         int age = 15;
//         if(age >= 18) {
//             cout << "Block is access\n";
//         }
//         else {
//             throw 505;
//         }
//     }

//     catch(int myNum) {
//         cout << "Block is throw error\n";
//         cout << "Error : " << myNum;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     try {
//         int age = 15;
//         if(age >= 18) {
//             cout << "Block is Access\n";
//         }
//         else {
//             throw 505;
//         }
//     }

//     catch(...) {
//         cout << "Block is throw error\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Addition {
//     private:
//     int a, b;

//     public:
//     void setData() {
//         cout << "Enter a Two Number: ";
//         cin >> a >> b;
//     }

//     void getData() {
//         cout << a << " + " << b << " = " << a + b;
//     }
// };

// int main() {
//     Addition sum;
//     sum.setData();
//     sum.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Addition {
//     int a, b;

//     public:
//     void setData() {
//         cout << "Enter a Two Number: ";
//         cin >> a >> b;
//     }

//     void getData() {
//         cout << a << " + " << b << " = " << a + b;
//     }
// };

// int main() {
//     Addition sum;
//     sum.setData();
//     sum.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Addition {
//     int a, b;

//     public:
//     void setData();
//     void getData();
// };

// void Addition::setData() {
//     cout << "Enter a Two Number: ";
//     cin >> a >> b;
// }

// void Addition::getData() {
//     cout << a << " + " << b << " = " << a + b;
// }

// int main() {
//     Addition sum;
//     sum.setData();
//     sum.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class OddEven {
//     int a;

//     public:
//     void setData();
//     void getData();
// };

// void OddEven::setData() {
//     cout << "Enter a Number: ";
//     cin >> a;
// }

// void OddEven::getData() {
//     if(a % 2 == 0) {
//         cout << a << " is a Even Number";
//     }
//     else {
//         cout << a << " is a Odd Number";
//     }
// }

// int main() {
//     OddEven check;
//     check.setData();
//     check.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class PNZ {
//     int a;

//     public:
//     void setData();
//     void getData();
// };

// void PNZ::setData() {
//     cout << "Enter a Number: ";
//     cin >> a;
// }

// void PNZ::getData() {
//     if(a > 0) {
//         cout << a << " is a Positive Number";
//     }
//     else if(a < 0) {
//         cout << a << " is a Negative Number";
//     }
//     else {
//         cout << a << " is a zero Number";
//     }
// }

// int main() {
//     PNZ check;
//     check.setData();
//     check.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class PNZ {
//     int a;

//     public:
//     void setData();
//     void getData();
// };

// void PNZ::setData() {
//     cout << "Enter a Number: ";
//     cin >> a;
// }

// void PNZ::getData() {
//     if(a > 0) {
//         cout << a << " is a Postive Number";
//     }
//     else if(a < 0) {
//         cout << a << " is a Negative Number";
//     }
//     else {
//         cout << a << " is a Zero Number";
//     }
// }

// int main() {
//     PNZ check;
//     check.setData();
//     check.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Max {
//     int a, b;

//     public:
//     void setData();
//     void getData();
// };

// void Max::setData() {
//     cout << "Enter a Number: ";
//     cin >> a >> b;
// }

// void Max::getData() {
//     if(a > b) {
//         cout << a << " your first number is max number.\n";
//     }
//     else {
//         cout << b << " your second number is max number.\n";
//     }
// }

// int main() {
//     Max check;
//     check.setData();
//     check.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Min {
//     int a, b;

//     public:
//     void setData();
//     void getData();
// };

// void Min::setData() {
//     cout << "Enter a Number: ";
//     cin >> a >> b;
// }

// void Min::getData() {
//     if(a < b) {
//         cout << a << ", Your first number is min number.\n";
//     }
//     else {
//         cout << b << ", Your second number is min number.\n";
//     }
// }

// int main() {
//     Min check;
//     check.setData();
//     check.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Max {
//     int a, b, c;

//     public:
//     void setData();
//     void getData();
// };

// void Max::setData() {
//     cout << "Enter any Three Number: ";
//     cin >> a >> b >> c;
// }

// void Max::getData() {
//     if(a > b && a > c) {
//         cout << a << ", First number is a max number.\n";
//     }
//     else if(b > a && b > c) {
//         cout << b << ", Second number is a max number.\n";
//     }
//     else {
//         cout << c << ", Third number is a max number.\n";
//     }
// }

// int main() {
//     Max check;
//     check.setData();
//     check.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Min {
//     int a, b, c;

//     public:
//     void setData();
//     void getData();
// };

// void Min::setData() {
//     cout << "Enter any Three Number: ";
//     cin >> a >> b >> c;
// }

// void Min::getData() {
//     if(a < b && a < c) {
//         cout << a << ", First number is a min number.\n";
//     }
//     else if(b < a && b < c) {
//         cout << b << ", Second number is a min number.\n";
//     }
//     else {
//         cout << c << ", Third number is a min number.\n";
//     }
// }

// int main() {
//     Min check;
//     check.setData();
//     check.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class oneToTen {
//     public:
//     void getData() {
//         for(int i = 1; i <= 10; i++) {
//             cout << i << "\t";
//         }
//     }
// };

// int main() {
//     oneToTen num;
//     num.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class tenToOne {
//     public:
//     void getData() {
//         for(int i = 10; i >= 1; i--) {
//             cout << i << "\t";
//         }
//     }
// };

// int main() {
//     tenToOne num;
//     num.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class oneToTen {
//     int n;

//     public:
//     void setData();
//     void getData();
// };

// void oneToTen::setData() {
//     cout << "Enter a Number: ";
//     cin >> n;
// }

// void oneToTen::getData() {
//     for(int i = 1; i <= n; i++) {
//         cout << i << "\t";
//     }
// }

// int main() {
//     oneToTen num;
//     num.setData();
//     num.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class tenToOne {
//     int n;

//     public:
//     void setData();
//     void getData();
// };

// void tenToOne::setData() {
//     cout << "Enter a Number: ";
//     cin >> n;
// }

// void tenToOne::getData() {
//     for(int i = n; i >= 1; i--) {
//         cout << i << "\t";
//     }
// }

// int main() {
//     tenToOne num;
//     num.setData();
//     num.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class reverse {
//     int n;

//     public:
//     void setData();
//     void getData();
// };

// void reverse::setData() {
//     cout << "Enter a Number: ";
//     cin >> n;
// }

// void reverse::getData() {
//     int rev = 0;

//     while(n > 0) {
//         rev = (rev * 10) + (n % 10);
//         n = n / 10;
//     }
//     cout << "Reverse = " << rev;
// }

// int main() {
//     reverse num;
//     num.setData();
//     num.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class arrayOfObject {
//     int a, b;

//     public:
//     void setData();
//     void getData();
// };

// void arrayOfObject::setData() {
//     cout << "Enter Two Number: ";
//     cin >> a >> b;
// }

// void arrayOfObject::getData() {
//     cout << "\na = " << a << "\tb = " << b << endl;
// }

// int main() {
//     arrayOfObject num[5];

//     for(int i = 0; i < 5; i++) {
//         num[i].setData();
//     }

//     for(int i = 0; i < 5; i++) {
//         num[i].getData();
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Time {
//     int h, m;

//     public:
//     void setData();
//     void getData();
//     void sum(Time t1, Time t2);
// };

// void Time::setData() {
//     cout << "Enter Hours & Minutes: ";
//     cin >> h >> m;
// }

// void Time::getData() {
//     cout << "\nHours = " << h << "\tMinutes = " << m << endl;
// }

// void Time::sum(Time t1, Time t2) {
//     h = (t1.m + t2.m) / 60;
//     m = (t1.m + t2.m) % 60;
//     h = h + (t1.h + t2.h);
// }

// int main() {
//     Time t1, t2, t3;
//     t1.setData();
//     t2.setData();
//     t3.sum(t1, t2);
//     t1.getData();
//     t2.getData();
//     t3.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//     int a, b;

//     public:
//     void setData();
//     // esh friend function eshi class ka name hai.
//     friend int sum(demo);
// };

// void demo::setData() {
//     cout << "Enter a Number: ";
//     cin >> a >> b;
// }

// // sum function normal function ka jasha he define hoga but, esh ka argument main clas ka shath esh ka object vei pass hoga.
// int sum(demo num) {
//     return num.a + num.b;
// }

// int main() {
//     demo num;
//     num.setData();
//     cout << "Addition = " << sum(num);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Name {
//     string firstName, lastName;

//     public:
//     void setData();
//     friend string concateName(Name);
// };

// void Name::setData() {
//     cout << "Enter your first name: ";
//     cin >> firstName;
//     cout << "Enter your last name: ";
//     cin >> lastName;
// }

// string concateName(Name naam) {
//     return naam.firstName + " " + naam.lastName;
// }

// int main() {
//     Name naam;
//     naam.setData();
//     cout << "Your Full Name is " << concateName(naam);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class B;
// class C;

// class A {
//     int a;

//     public:
//     void setData() {
//         cout << "Enter value of A: ";
//         cin >> a;
//     }

//     friend void max(A, B, C);
// };

// class B {
//     int b;

//     public:
//     void setData() {
//         cout << "Enter value of B: ";
//         cin >> b;
//     }

//     friend void max(A, B, C);
// };

// class C {
//     int c;

//     public:
//     void setData() {
//         cout << "Enter value of C: ";
//         cin >> c;
//     }

//     friend void max(A, B, C);
// };

// void max(A num1, B num2, C num3) {
//     if(num1.a > num2.b && num1.a > num3.c) {
//         cout << num1.a << ", A is a greater number.\n";
//     }
//     else if(num2.b > num1.a && num2.b > num3.c) {
//         cout << num2.b << ", B is a greater number.\n";
//     }
//     else {
//         cout << num3.c << ", C is a greater number.\n";
//     }
// }

// int main() {
//     A num1;
//     num1.setData();
//     B num2;
//     num2.setData();
//     C num3;
//     num3.setData();
//     max(num1, num2, num3);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class B;
// class C;

// class A {
//     int a;

//     public:
//     void setData() {
//         cout << "Enter value of A: ";
//         cin >> a;
//     }
//     friend void min(A num1, B num2, C num3);
// };

// class B {
//     int b;

//     public:
//     void setData() {
//         cout << "Enter value of B: ";
//         cin >> b;
//     }
//     friend void min(A num1, B num2, C num3);
// };

// class C {
//     int c;

//     public:
//     void setData() {
//         cout << "Enter value of C: ";
//         cin >> c;
//     }
//     friend void min(A num1, B num2, C num3);
// };

// void min(A num1, B num2, C num3) {
//     if(num1.a < num2.b && num1.a < num3.c) {
//         cout << num1.a << ", A is a smallest number.\n";
//     }
//     else if(num2.b < num1.a && num2.b < num3.c) {
//         cout << num2.b << ", B is a smallest number.\n";
//     }
//     else {
//         cout << num3.c << ", C is a smalles number.\n";
//     }
// }

// int main() {
//     A num1;
//     num1.setData();
//     B num2;
//     num2.setData();
//     C num3;
//     num3.setData();
//     min(num1, num2, num3);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//     int x, y;
//     static int z;

//     public:
//     void setData(int a, int b) {
//        x = a;
//        y = b;
//        z = z + 1; 
//     }
//     void getData() {
//         cout << "\nx = " << x << "\ty = " << y << "\tz = " << z;
//     }
// };

// // esh statement ko write karna compulsory hai
// // esh ka matlab hai, ke ak static data member class ka ander initialized hai
// int demo::z; // esh statement ka matlab hai, integer type ka demo class main static data member hai. "::" ya scope resolution operator hai

// int main() {
//     demo num1, num2;
//     num1.setData(10, 20);
//     num2.setData(5, 15);
//     num1.getData();
//     num2.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//     int x, y;
//     static int z;

//     public:
//     void setData(int a, int b) {
//         x = a;
//         y = b;
//         z++;
//     }

//     void getData() {
//         cout << "\nx = " << x << "\ty = " << y << "\tz = " << z;
//     }

//     static void myfunction() {
//         cout << "\nStatic Data Member Z is: " << z;
//     }
// };

// int demo::z;

// int main() {
//     demo num1, num2;
//     num1.setData(5, 10);
//     num2.setData(6, 8);
//     num1.getData();
//     num1.getData();
//     demo::myfunction();
//     return 0;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main() {
//     ofstream myFile("filename.txt");

//     myFile << "Files can be tricky, but it is enough!";

//     myFile.close();
//     return 0;
// }

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main() {
//     // string myText;

//     // ifstream myFile("filename.txt");

//     // while(getline(myFile, myText)) {
//     //     cout << myText;
//     // }

//     // myFile.close();

//     string myText;

//     ifstream myFile("loop.cpp");

//     while(getline(myFile, myText)) {
//         cout << myText;
//     }

//     myFile.close();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     try {
//         int age = 20;

//         if(age >= 18) {
//             cout << "Access granted - you are old enough.\n";
//         }
//         else {
//             throw (age);
//         }
//     }

//     catch(int myNum) {
//         cout << "Access denied - you must be at least 18 year old.\n";
//         cout << "Age is : " << myNum;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     try {
//         int age = 15;

//         if(age >= 18) {
//             cout << "Block is Accessed.\n";
//         }
//         else {
//             throw 505;
//         }
//     }

//     catch(int myNum) {
//         cout << "Accessed Error.\n";
//         cout << "Error Number: " << myNum;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     try {
//         int age = 15;

//         if(age >= 18) {
//             cout << "Block is Accessed.\n";
//         }
//         else {
//             throw 505;
//         }
//     }

//     catch(...) {
//         cout << "Block is throw error.\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//     int a, b;

//     public:
//     demo () {
//         a = 10;
//         b = 20;
//     }

//     void getData();
// };

// void demo::getData() {
//     cout << "\na = " << a << "\tb = " << b;
// }

// int main() {
//     demo myObj;
//     myObj.getData();

//     demo myObj2;
//     myObj2.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//     int a, b;

//     public:
//     demo (int m, int n);
//     void getData();
// };

// demo::demo(int m, int n) {
//     a = m;
//     b = n;
// }

// void demo::getData() {
//     cout << "\na = " << a << "\tb = " << b;
// }

// int main() {
//     int x, y;
//     cout << "Enter two number: ";
//     cin >> x >> y;

//     demo myObj(x, y);
//     myObj.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//     int a, b;

//     public:
//     void setData();
//     friend int sum(demo num);
// };

// void demo::setData() {
//     cout << "Enter two number: ";
//     cin >> a >> b;
// }

// int sum(demo num) {
//     return num.a + num.b;
// }

// int main() {
//     demo num;
//     num.setData();
//     cout << "Addition = " << sum(num);
//     return 0;
// }

// #include <iostream>

// class MyClass {
// public:
//     // Default constructor
//     MyClass() {
//         std::cout << "Default Constructor called" << std::endl;
//         data = 0;
//     }

//     // Parameterized constructor
//     MyClass(int value) {
//         std::cout << "Parameterized Constructor called" << std::endl;
//         data = value;
//     }

//     // Copy constructor
//     MyClass(const MyClass &other) {
//         std::cout << "Copy Constructor called" << std::endl;
//         data = other.data;
//     }

//     // Member function to display data
//     void displayData() {
//         std::cout << "Data: " << data << std::endl;
//     }

// private:
//     int data;
// };

// int main() {
//     // Using the default constructor
//     MyClass obj1;

//     // Using the parameterized constructor
//     MyClass obj2(42);

//     // Using the copy constructor
//     MyClass obj3 = obj2;

//     // Displaying data for each object
//     std::cout << "Object 1: ";
//     obj1.displayData();

//     std::cout << "Object 2: ";
//     obj2.displayData();

//     std::cout << "Object 3: ";
//     obj3.displayData();

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//     int a;

//     public:
//     demo () {
//         cout << "Default constructor are called\n";
//         a = 10;
//     }

//     demo (demo &other) {
//         cout << "Copy constructor are called\n";
//         a = other.a;
//     }

//     void getData();
// };

// void demo::getData() {
//     cout << "\na = " << a;
// }

// int main() {
//     demo obj1;
//     // copy constructor main passing arguement pass karte hai class ka he ak object, mathlab jesh object ka content ko copy karna ho ushi object ko pass karte hai.
//     demo obj2(obj1); // copy constructor 1st assignment method
//     demo obj3 = obj1; // copy constructor 2nd assignment method
//     obj1.getData();
//     obj2.getData();
//     obj3.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//     int a;

//     public:
//     demo () {
//         cout << "Default constructor are called\n";
//         a = 10;
//     }

//     demo (int z) {
//         cout << "Parameterized constructor are called\n";
//         a = z;
//     }

//     demo (demo &other) {
//         cout << "Copy constructor are called\n";
//         a = other.a;
//     }

//     void getData();
// };

// void demo::getData() {
//     cout << "\na = " << a;
// }

// int main() {
//     demo obj1;
//     demo obj2(20);
//     demo obj3(obj1);

//     obj1.getData();
//     obj2.getData();
//     obj3.getData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class base {
//     public:
//     virtual void print() {
//         cout << "print base class\n";
//     }

//     void show() {
//         cout << "show base class1\n";
//     }
// };

// class drived:public base {
//     public:
//     void print() {
//         cout << "print deived class\n";
//     }

//     void show() {
//         cout << "show base class2\n";
//     }
// };

// int main() {
//     base* bptr;
//     drived d;
//     bptr = &d;

//     // Virtual function, binded at runtime
//     bptr->print();

//     // Non-virtual function, binded at compile time
//     bptr->show();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class A {
//     public:
//     void foo() {
//         cout << "A::foo()\n";
//     }
// };

// class B:public A {
//     public:
//     void foo() {
//         cout << "B::foo()\n";
//     }
// };

// class C:public A {
//     public:
//     void foo() {
//         cout << "C::foo()\n";
//     }
// };

// class D:public B, public C {
// };

// int main() {
//     // D d;
//     // d.foo();

//     D d;
//     d.B::foo();
//     d.C::foo();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int count = 0;

// class A {
//     public:
//     A () {
//         count++;
//         cout << "Values Construct by " << count << endl;
//     }
//     ~A () {
//         cout << "Destorys the object by " << count << endl;
//         count--;
//     }
// };

// int main() {
//     A obj1;
//     A obj2;
//     A obj3;
//     {
//         A obj4;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//     int a, b;
//     public:
//     void setData();
//     friend int sum(demo);
// };

// void demo::setData() {
//     cout << "Enter two number: ";
//     cin >> a >> b;
// }

// int sum(demo num) {
//     return num.a + num.b;
// }

// int main() {
//     demo N;
//     N.setData();

//     cout << "Addition = " << sum(N);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class B;
// class A {
//     int a;

//     public:
//     void setData() {
//         cout << "Enter a Number: ";
//         cin >> a;
//     }

//     friend void max(A, B);
// };

// class B {
//     int b;

//     public:
//     void setData() {
//         cout << "Enter a Number: ";
//         cin >> b;
//     }

//     friend void max(A, B);
// };

// void max(A num1, B num2) {
//     if(num1.a > num2.b) {
//         cout << num1.a << ", A is a greater number.\n";
//     }
//     else {
//         cout << num2.b << ", B is a greater number.\n";
//     }
// }

// int main() {
//     A obj1;
//     obj1.setData();
//     B obj2;
//     obj2.setData();

//     max(obj1, obj2);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// template<typename T>
// T myMax(T a, T b) {
//     return (a > b)? a : b;
// }

// int main() {
//     cout << myMax<int>(8, 5) << endl;
//     cout << myMax<double>(3.0, 7.0) << endl;
//     cout << myMax<char>('e', 'd') << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// template<class T>
// class M {
//     T num1;
//     T num2;

//     public:
//     M(const T& n1, const T& n2) : num1(n1), num2(n2) {}

//     T Maltiply() const {
//         return num1 * num2;
//     }
// };

// int main() {
//     M<int>Obj1(5, 8);
//     M<double>Obj2(8.5, 3.5);

//     cout << "Product of two integer: " << Obj1.Maltiply() << endl;
//     cout << "Product of two double: " << Obj2.Maltiply() << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// template<class Temp>
// class Calculator {
//         Temp n1, n2;

//         public:
//         Calculator(Temp num1, Temp num2) {
//                 n1 = num1;
//                 n2 = num2;
//         }

//         void show() {
//                 cout << n1 << " + " << n2 << " = " << addition() << endl;
//                 cout << n1 << " - " << n2 << " = " << subraction() << endl;
//                 cout << n1 << " x " << n2 << " = " << multiplication() << endl;
//                 cout << n1 << " / " << n2 << " = " << division() << endl;
//         }

//         Temp addition() {
//                 return (n1 + n2);
//         }

//         Temp subraction() {
//                 return (n1 - n2);
//         }

//         Temp multiplication() {
//                 return (n1 * n2);
//         }

//         Temp division() {
//                 return (n1 / n2);
//         }
// };

// int main() {
//         Calculator<int> Obj1(20, 10);
//         Calculator<float> Obj2(9.5, 8.5);

//         cout << "\nShow Integers Result: " << endl;
//         Obj1.show();

//         cout << "\nShow Decimal Result: " << endl;
//         Obj2.show();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//         int a;

//         public:
//         void setData() {
//                 cout << "Enter a number: ";
//                 cin >> a;
//         }

//         void getData() {
//                 cout << "Value = " << a << endl;
//         }

//         demo operator+ (demo num) {
//                 demo num1;
//                 num1.a = a + num.a;
//                 return num1;
//         }
// };

// int main() {
//         demo num1, num2, num3;
//         num1.setData();
//         num2.setData();
//         num3 = num1 + num2;

//         num1.getData();
//         num2.getData();
//         num3.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//         int a;

//         public:
//         void setData();
//         void getData();
//         demo operator+ (demo num);
// };

// void demo::setData() {
//         cout << "Enter a Number: ";
//         cin >> a;
// }

// void demo::getData() {
//         cout << "Value = " << a << endl;
// }

// demo demo::operator+ (demo num) {
//         demo num1;
//         num1.a = a + num.a;
//         return num1;
// }

// int main() {
//         demo num1, num2, num3;
//         num1.setData();
//         num2.setData();
//         num3 = num1 + num2;

//         num1.getData();
//         num2.getData();
//         num3.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class A {
//         protected:
//         int a;

//         public:
//         void setData() {
//                 cout << "Enter a Number: ";
//                 cin >> a;
//         }
// };

// class B:public A {
//         int b;

//         public:
//         void setData2() {
//                 cout << "Enter a Number: ";
//                 cin >> b;
//         }

//         void getData() {
//                 cout << a << " + " << b << " = " << a + b;
//         }
// };

// int main() {
//         B num;
//         num.setData();
//         num.setData2();
//         num.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class A {
//         int a;

//         public:
//         void setData() {
//                 cout << "Enter a Number: ";
//                 cin >> a;
//         }

//         int geta() {
//                 return a;
//         }
// };

// class B:public A {
//         int b;

//         public:
//         void setData2() {
//                 cout << "Enter a Number: ";
//                 cin >> b;
//         }

//         void getData() {
//                 cout << geta() << " + " << b << " = " << geta() + b;
//         }
// };

// int main() {
//         B num;
//         num.setData();
//         num.setData2();
//         num.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class A {
//         protected:
//         int a;

//         public:
//         void setData() {
//                 cout << "Enter a Number: ";
//                 cin >> a;
//         }
// };

// class B {
//         protected:
//         int b;

//         public:
//         void setData2() {
//                 cout << "Enter a Number: ";
//                 cin >> b;
//         }
// };

// class C:public A, public B {
//         public:
//         void getData() {
//                 cout << a << " + " << b << " = " << a + b;     
//         }
// };

// int main() {
//         C num;
//         num.setData();
//         num.setData2();
//         num.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class A {
//         protected:
//         int rollno;

//         public:
//         void setData() {
//                 cout << "Enter a rollno: ";
//                 cin >> rollno;
//         }

//         void getData() {
//                 cout << "Roll No: " << rollno << endl;
//         }
// };

// class B:public A {
//         protected:
//         int sub1, sub2;

//         public:
//         void setData2() {
//                 cout << "Enter two subject marks: ";
//                 cin >> sub1 >> sub2;
//         }

//         void getData2() {
//                 cout << "First subject marks: " << sub1 << endl;
//                 cout << "Second subject marks: " << sub2 << endl;
//         }
// };

// class C:public B {
//         int stm;

//         public:
//         void setData3() {
//                 cout << "Enter a stm: ";
//                 cin >> stm;
//         }

//         void getData3() {
//                 cout << "stm: " << stm << endl;
//         }

//         void fullMarks() {
//                 setData();
//                 setData2();
//                 setData3();
//                 getData();
//                 getData2();
//                 getData3();
//                 cout << "Final marks is: " << sub1 + sub2 + stm;
//         }
// };

// int main() {
//         C num;
//         num.fullMarks();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class A {
//         protected:
//         int a;

//         public:
//         void setData() {
//                 cout << "Enter a Number: ";
//                 cin >> a;
//         }
// };

// class B:public A {
//         protected:
//         int b;

//         public:
//         void setData2() {
//                 cout << "Enter a Number: ";
//                 cin >> b;
//         }
// };

// class C:public B {
//         public:
//         void getData() {
//                 setData();
//                 setData2();
//                 cout << a << " + " << b << " = " << a + b;
//         }
// };

// int main() {
//         C num;
//         num.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class A {
//         public:
//         void message() {
//                 cout << "Inherited\n";
//         }
// };

// class B:public A {
//         public:
//         void getData() {
//                 cout << "Inside class B\n";
//         }
// };

// class C:public A {
//         public:
//         void getData2() {
//                 cout << "\nInside class C\n";
//         }
// };

// int main() {
//         B bObj;
//         bObj.getData();
//         bObj.message();

//         C cObj;
//         cObj.getData2();
//         cObj.message();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class A {
//         public:
//         void getData() {
//                 cout << "Inside class A\n";
//         }
// };

// class B:public A {
//         public:
//         void getData2() {
//                 cout << "Inside class B\n";
//         }
// };

// class C {
//         public:
//         void getData3() {
//                 cout << "Inside class C\n";
//         }
// };

// class D:public B, public C {
//         public:
//         void getData4() {
//                 cout << "Inside class D\n";
//         }
// };

// int main() {
//         D dObj;
//         dObj.getData();
//         dObj.getData2();
//         dObj.getData3();
//         dObj.getData4();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class A {
//         public:
//         void setData() {
//                 cout << "Base Class\n";
//         }
// };

// class B:public A {
//         public:
//         void setData() {
//                 cout << "Derived Class\n";
//                 // A::setData(); -------> 1st Method to calling overriding data
//         }
// };

// int main() {
//         B bObj;
//         bObj.setData();
//         bObj.A::setData(); // --------> 2nd Method to calling overriding data
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class A {
//         protected:
//         int a;

//         public:
//         A(int x) {
//                 a = x;
//         }

//         void getData() {
//                 cout << "A = " << a << endl;
//         }
// };

// class B {
//         protected:
//         int b;

//         public:
//         B(int y) {
//                 b = y;
//         }

//         void getData2() {
//                 cout << "B = " << b << endl;
//         }
// };

// class C:public A, public B {
//         protected:
//         int c;

//         public:
//         C(int p, int q, int r):A(p), B(q) {
//                 c = r;
//         }

//         void getData3() {
//                 cout << "C = " << c << endl;
//         }
// };

// int main() {
//         C cObj(10, 20, 30);
//         cObj.getData();
//         cObj.getData2();
//         cObj.getData3();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class A {
//         protected:
//         int a;

//         public:
//         void setData() {
//                 cout << "Enter value of A: ";
//                 cin >> a;
//         }

//         void getData() {
//                 cout << "A = " << a << endl;
//         }
// };

// class B {
//         protected:
//         int b;

//         public:
//         void setData() {
//                 cout << "Enter value of B: ";
//                 cin >> b;
//         }

//         void getData2() {
//                 cout << "B = " << b << endl;
//         }
// };

// class C:public A, public B {
//         int c;

//         public:
//         void setData() {
//                 cout << "Enter value of C: ";
//                 cin >> c;
//                 A::setData();
//                 B::setData();
//         }

//         void getData3() {
//                 cout << "C = " << c << endl; 
//         }
// };

// int main() {
//         C cObj;
//         cObj.setData();
//         cObj.getData();
//         cObj.getData2();
//         cObj.getData3();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class A {
//         public:
//         virtual void setData() {
//                 cout << "Class A\n";
//         }
// };

// class B:public A {
//         public:
//         void setData() {
//                 cout << "Class B\n";
//         }
// };

// int main() {
//         // Pointer ko base class main hee define karna hota hai.
//         // It's program called Runtime polymorphism or Late Binding.
//         A* bptr;
//         B bObj;
//         bptr = &bObj;
//         bptr->setData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class A {
//         public:
//         void setData() {
//                 cout << "Class A\n";
//         }
// };

// class B:public A {
//         public:
//         void setData() {
//                 cout << "Class B\n";
//         }
// };

// int main() {
//         // Pointer ko base class main hee define karna hota hai.
//         // It's program called Compile Time Polymorphism or Early Binding.
//         A* bptr;
//         A aObj;
//         bptr = &aObj;
//         bptr->setData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class Base {
//         int x;

//         public:
//         // pure virtual function
//         virtual void fun() = 0;

//         int getx() {
//                 return x;
//         }
// };

// class Derived:public Base {
//         int y;

//         public:
//         // implementation of the pure virtual function
//         void fun() {
//                 cout << "fun() Called\n";
//         }
// };

// int main() {
//         Derived d;
//         d.fun();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//         int a;

//         public:
//         void setData() {
//                 cout << "Enter a Number: ";
//                 cin >> a;
//         }

//         void getData() {
//                 cout << "Value of A = " << a << endl;
//         }

//         demo operator+(demo bb) {
//                 demo cc;
//                 cc.a = a + bb.a;
//                 return cc;
//         }
// };

// int main() {
//         demo aa, bb, cc;
//         aa.setData();
//         bb.setData();
//         cc = aa + bb;
//         aa.getData();
//         bb.getData();
//         cc.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//         int a;

//         public:
//         void setData() {
//                 cout << "Enter a Number: ";
//                 cin >> a;
//         }

//         void getData() {
//                 cout << "Value of A = " << a << endl;
//         }

//         demo operator-(demo numb) {
//                 demo numc;
//                 numc.a = a - numb.a;
//                 return numc;
//         }
// };

// int main() {
//         demo numa, numb, numc;
//         numa.setData();
//         numb.setData();
//         numc = numa - numb;
//         numa.getData();
//         numb.getData();
//         numc.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//         int a;

//         public:
//         void setData() {
//                 cout << "Enter a Number: ";
//                 cin >> a;
//         }

//         void getData() {
//                 cout << "Value of A = " << a << endl;
//         }

//         demo operator*(demo num2) {
//                 demo num3;
//                 num3.a = a * num2.a;
//                 return num3;
//         }
// };

// int main() {
//         demo num1, num2, num3;
//         num1.setData();
//         num2.setData();
//         num3 = num1 * num2;
//         num1.getData();
//         num2.getData();
//         num3.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//         int a;

//         public:
//         void setData() {
//                 cout << "Enter a Number: ";
//                 cin >> a;
//         }

//         void getData() {
//                 cout << "Value of A = " << a << endl;
//         }

//         demo operator/(demo B) {
//                 demo C;
//                 C.a = a / B.a;
//                 return C;
//         }
// };

// int main() {
//         demo A, B, C;
//         A.setData();
//         B.setData();
//         C = A / B;
//         A.getData();
//         B.getData();
//         C.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//         int a;

//         public:
//         void setData() {
//                 cout << "Enter a Number: ";
//                 cin >> a;
//         }

//         void getData() {
//                 cout << a;
//         }

//         void operator++(int) {
//                 a = a + 1;
//         }
// };

// int main() {
//         demo aa;
//         aa.setData();
//         cout << "Original value = ";
//         aa.getData();
//         aa++;
//         cout << "\nIncremented value = ";
//         aa.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//         int a;

//         public:
//         void setData() {
//                 cout << "Enter a Number: ";
//                 cin >> a;
//         }

//         void getData() {
//                 cout << a;
//         }

//         void operator--(int) {
//                 a = a - 1;
//         }
// };

// int main() {
//         demo aa;
//         aa.setData();
//         cout << "Original value = ";
//         aa.getData();
//         aa--;
//         cout << "\nDecrment value = ";
//         aa.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//         int a;

//         public:
//         void setData() {
//                 cout << "Enter a Number: ";
//                 cin >> a;
//         }

//         void getData() {
//                 cout << a;
//         }

//         void operator--() {
//                 a = a - 1;
//         }
// };

// int main() {
//         demo aa;
//         aa.setData();
//         cout << "Original value = ";
//         aa.getData();
//         --aa;
//         cout << "\nDecrement value = ";
//         aa.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//         int a;

//         public:
//         void setData() {
//                 cout << "Enter a Number: ";
//                 cin >> a;
//         }

//         void getData() {
//                 cout << "Value of A = " << a << endl;
//         }

//         void operator=(demo bb) {
//                 a = bb.a;
//         }
// };

// int main() {
//         demo aa, bb;
//         bb.setData();
//         aa = bb;
//         aa.getData();
//         bb.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//         int a, b;

//         public:
//         void setData() {
//                 cout << "Enter two Number: ";
//                 cin >> a >> b;
//         }

//         void getData() {
//                 cout << "Value of A = " << a << "\nValue of B = " << b << endl;
//         }

//         void operator=(demo bb) {
//                 a = bb.a;
//                 b = bb.b;
//         }
// };

// int main() {
//         demo aa, bb;
//         bb.setData();
//         aa = bb;
//         aa.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//         int a;

//         public:
//         void setData() {
//                 cout << "Enter a Number: ";
//                 cin >> a;
//         }

//         void getData() {
//                 cout << "Value = " << a << endl;
//         }

//         void operator+=(demo bb) {
//                 a += bb.a;
//                 // a = a + bb.a;
//         }
// };

// int main() {
//         demo aa, bb;
//         aa.setData();
//         bb.setData();
//         aa.getData();
//         bb.getData();
//         aa += bb;
//         aa.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//         int a;

//         public:
//         void setData() {
//                 cout << "Enter a Number: ";
//                 cin >> a;
//         }

//         void getData() {
//                 cout << "Value = " << a << endl;
//         }

//         void operator-=(demo bb) {
//                 a -= bb.a;
//         }
// };

// int main() {
//         demo aa, bb;
//         aa.setData();
//         bb.setData();
//         aa.getData();
//         bb.getData();
//         aa -= bb;
//         aa.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//         int a;

//         public:
//         void setData() {
//                 cout << "Enter a Number: ";
//                 cin >> a;
//         }

//         void getData() {
//                 cout << "Value = " << a << endl;
//         }

//         void operator*=(demo bb) {
//                 a *= bb.a;
//         }
// };

// int main() {
//         demo aa, bb;
//         aa.setData();
//         bb.setData();
//         aa.getData();
//         bb.getData();
//         aa *= bb;
//         aa.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//         int a;

//         public:
//         void setData() {
//                 cout << "Enter a Number: ";
//                 cin >> a;
//         }

//         void getData() {
//                 cout << "Value = " << a << endl;
//         }

//         void operator/=(demo bb) {
//                 a /= bb.a;
//         }
// };

// int main() {
//         demo aa, bb;
//         aa.setData();
//         bb.setData();
//         aa.getData();
//         bb.getData();
//         aa /= bb;
//         aa.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class swapNum {
//         int a;

//         public:
//         void setData() {
//                 cout << "Enter a Number: ";
//                 cin >> a;
//         }

//         void getData() {
//                 cout << "Value = " << a << endl;
//         }

//         void operator+=(swapNum bb) {
//                 a += bb.a;
//         }
// };

// int main() {
//         swapNum aa, bb;
//         aa.setData();
//         bb.setData();
//         aa.getData();
//         bb.getData();
//         aa += bb;
//         aa.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class complex {
//         int r, i;

//         public:
//         void setData() {
//                 cout << "Enter Real & Imaginary Number: ";
//                 cin >> r >> i;
//         }

//         void getData() {
//                 cout << r << " + " << "i" << i << endl;
//         }

//         complex operator+(complex bb) {
//                 complex cc;
//                 cc.r = r + bb.r;
//                 cc.i = i + bb.i;
//                 return cc;
//         }
// };

// int main() {
//         complex aa, bb, cc;
//         aa.setData();
//         bb.setData();
//         cc = aa + bb;
//         aa.getData();
//         bb.getData();
//         cc.getData();
//         return 0;
// }

// #include<iostream>
// using namespace std;

// class demo {
//         int x;

//         public:
//         void setData() {
//                 cout << "Enter a Number: ";
//                 cin >> x;
//         }

//         void getData() {
//                 cout << x;
//         }

//         bool operator==(demo bb) {
//                 if(x == bb.x) {
//                         return true;
//                 }
//                 else {
//                         return false;
//                 }
//         }
// };

// int main() {
//         demo aa, bb;
//         aa.setData();
//         bb.setData();

//         if(aa == bb) {
//                 aa.getData();
//                 cout << " == ";
//                 bb.getData();
//         }
//         else {
//                 aa.getData();
//                 cout << " != ";
//                 bb.getData();
//         }
//         return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//         int a, b, c;
//         cout << "Enter a Number: ";
//         cin >> a >> b;

//         try {
//                 if(b != 0) {
//                         c = a / b;
//                         cout << a << " / " << b << " = " << c;
//                 }
//                 else {
//                         throw (b);
//                 }
//         }

//         catch(int b) {
//                 cout << b << " doesn't divide by another number.";
//         }
//         return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//         int x;
//         cout << "Enter a Number: ";
//         cin >> x;
//         try {
//                 if(x == 0) {
//                         throw (x);
//                 }
//                 if(x == 100) {
//                         throw ('E');
//                 }
//                 if(x == 1000) {
//                         throw (405.5f);
//                 }
//         }
//         // Multiple catch statement
//         catch(int x) {
//                 cout << "Exception: " << x;
//         }
//         catch(char x) {
//                 cout << "Exception: " << x;
//         }
//         catch(float x) {
//                 cout << "Exception: " << x;
//         }
//         return 0;
// }

#include<iostream>
using namespace std;

int main() {
        int x;
        cout << "Enter a Number: ";
        cin >> x;
        try {
                if(x == 0) {
                        throw (x);
                }
                if(x == 100) {
                        throw ('E');
                }
                if(x == 1000) {
                        throw (405.5f);
                }
        }
        // Single catch statement for multiple exception
        catch(...) {
                cout << "Some Errow Occured...";
        }
        return 0;
}