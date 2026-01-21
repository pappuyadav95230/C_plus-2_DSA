#include <iostream>
using namespace std;

// int main()
// {
//     // Local Scope -> Avariable declared inside a blok {}
//     int x = 10; // Local to main
//     cout << x;  // x is accessible only inside main()
//     return 0;
// }

// Block Scope
// A varible declared inside if, loop, or any {} block
// if (true) {
//     int a =5;
//     cout << a;     // cout << a; Error : a lot accessible here
// }

// Globle Scope
// A variable declared outside all functions
#include <iostream>
using namespace std;

int g = 100; // Global

int main()
{
    cout << g;
    return 0;
} 