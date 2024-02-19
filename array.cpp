// #include<iostream>
// using namespace std;

// int main() {
//     // int marks[5] = {24, 89, 28, 32, 45};
//     // cout << marks[0] << endl;
//     // cout << marks[1] << endl;
//     // cout << marks[2] << endl;
//     // cout << marks[3] << endl;
//     // cout << marks[4] << endl;

//     // int mathMarks[5];
//     // mathMarks[0] = 89;
//     // mathMarks[1] = 38;
//     // mathMarks[2] = 42;
//     // mathMarks[3] = 68;
//     // mathMarks[4] = 98;
//     // mathMarks[0] = 98;

//     // cout << mathMarks[0] << endl;
//     // cout << mathMarks[1] << endl;
//     // cout << mathMarks[2] << endl;
//     // cout << mathMarks[3] << endl;
//     // cout << mathMarks[4] << endl;

//     // int num[] = {1, 2, 3, 4, 5};

//     // for(int i = 0; i < 5; i++) {
//     //     cout << num[i] << endl;
//     // }

//     // int i = 0;

//     // while(i < 5) {
//     //     cout << num[i] << endl;
//     //     i++;
//     // }

//     // int i = 0;

//     // do {
//     //     cout << num[i] << endl;
//     //     i++;
//     // }while(i < 5);

//     string name[5] = {"ROHIT", "ABHAY", "DHEERAJ", "RAM", "PROGRAMMING"};

//     for(int i = 0; i < 5; i++) {
//         cout << name[i] << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int marks[] = {45, 50, 76, 80, 81};

//     // for(int i = 0; i < 5; i++) {
//     //     cout << "The value of " << i << " is " << marks[i] << endl;
//     // }

//     for(int i : marks) {
//         cout << i << endl;
//     }

//     cout << "Next Topic\n\n"; // Pointer in Array
//     int *p = marks;
//     cout << *(p++) << endl;
//     cout << *(++p) << endl;
//     cout << "The value of marks[0] is " << *p << endl;
//     cout << "The value of marks[1] is " << *(p + 1) << endl;
//     cout << "The value of marks[2] is " << *(p + 2) << endl;
//     cout << "The value of marks[3] is " << *(p + 3) << endl;
//     cout << "The value of marks[4] is " << *(p + 4) << endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
//     string cars[] = {"Volvo", "BMW", "Ford", "Tesla", "Mozrd"};

//     // for(int i = 0; i < 5; i++) {
//     //     cout << i << " = " << cars[i] << endl;
//     // }

//     for(string car : cars) {
//         cout << car << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int num[5] = {10, 20, 30, 40, 50};
//     cout << sizeof(num) << endl;
//     cout << sizeof(int) << endl;
//     cout << sizeof(num) << " / " << sizeof(int) << " = " << sizeof(num) / sizeof(int);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int num[5] = {10, 20, 30, 40, 50};

//     for(int i = 0; i < 5; i++) {
//         cout << num[i] << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int num[5] = {10, 20, 30, 40, 50};

//     for(int i = 0; i < sizeof(num) / sizeof(int); i++) {
//         cout << num[i] << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int num[5] = {10, 20, 30, 40, 50};

//     for(int i : num) {
//         cout << i << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int arr[2][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8}
//     };

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 4; j++) {
//             cout << arr[i][j] << endl;
//         }
//     }
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
//     // // Two Dimensions
//     // string letters[2][4] = {
//     //     {"A", "B", "C", "D"},
//     //     {"E", "F", "G", "H"}
//     // };

//     // Three Dimensions
//     string letters[2][2][2] = {
//         {
//             {"A", "B"},
//             {"C", "D"}
//         },
//         {
//             {"E", "F"},
//             {"G", "H"}
//         }
//     };
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
//     string letters[2][4] = {
//         {"A", "B", "C", "D"},
//         {"E", "F", "G", "H"}
//     };

//     cout << "row(0) and column(2) = " << letters[0][2] << endl;
//     cout << "letters[0][0] Original value = " << letters[0][0] << endl;
//     letters[0][0] = "Z";
//     cout << "Replace A and Insert Z = " << letters[0][0];
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
//     string letters[2][4] = {
//         {"A", "B", "C", "D"},
//         {"E", "F", "G", "H"}
//     };

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 4; j++) {
//             cout << i << j << " = " << letters[i][j] << endl;
//         }
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     string letters[2][2][2] = {
//         {
//             {"A", "B"},
//             {"C", "D"}
//         },
//         {
//             {"E", "F"},
//             {"G", "H"}
//         }
//     };

//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 2; j++) {
//             for(int k = 0; k < 2; k++) {
//                 cout << i << j << k << " = " << letters[i][j][k] << endl;
//             }
//         }
//     }
//     return 0;
// }

// <=========================================== Game of Battleship =========================================>
#include<iostream>
using namespace std;

int main() {
    // We put "1" to indicate there is a ship.
    bool ships[4][4] = {
        {0, 0, 1, 0},
        {1, 0, 0, 0},
        {0, 0, 0, 1},
        {0, 1, 0, 0}
    };

    // Keep track of how many hits the player has and how many turns they have played in these variables
    int hits = 0;
    int numberOfTurns = 0;

    // Allow the player to keep going until they have hit all four ships
    while(hits < 4) {
        int row, column;

        cout << "Selecting Coordinates\n";


        // Ask the player for a row
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        // Ask the player for a column
        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        // Check if a ship exists in those coordinates
        if(ships[row][column]) {
            // If the player hit a ship, remove it by setting the value to zero.
            ships[row][column] = 0;

            // Increase the hit counter
            hits++;

            // Tell the player that they have hit a ship and how many ships are left
            cout << "hit! " << (4 - hits) << " left\n\n";
        }
        else {
            // Tell the player that they missed
            cout << "Miss\n\n";
        }

        // Count how many turns the player has taken
        numberOfTurns++;
    }

    cout << "Victory!\n";
    cout << "You Won in " << numberOfTurns << " turns.";
    return 0;
}