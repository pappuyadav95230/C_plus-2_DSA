// #include <iostream>
// using namespace std;

// void AddTwoNum()
// {
//     int a, b;
//     cout << "Enter first number : ";
//     cin >> a;
//     cout << "Enter second number : ";
//     cin >> b;
//     int c;
//     c = a + b;
//     cout << "Sum is : " << c << endl;
// }

// int main()
// {
//     AddTwoNum();
// }

// #include <iostream>
// using namespace std;

// int AddTwoNum()
// {
//     int a, b;
//     cout << "Enter first number : ";
//     cin >> a;
//     cout << "Enter second number : ";
//     cin >> b;
//     int c;
//     c = a + b;
//     return c; // return the value of the c for main
// }

// int main()
// {

//     int sum = AddTwoNum(); // store the value of c thne print
//     cout << "Sum is : " << sum << endl;
//     return 0;
// }

// write a function to print two number with passing argument
// #include <iostream>
// using namespace std;

// int AddTwoNum(int a, int b)  // this a,b is creted the copy of the main function a or b this concept is pas by value
// {
//     int c;
//     c = a + b;
//     return c;
// }

// int main()
// {
//     int a = 5;
//     int b = 10;
//     int sum = AddTwoNum(a, b);
//     cout << "Sum is : " << sum << endl;
// }

// Pass by value -> copy Create karna
#include <iostream>
using namespace std;

int mul(int x) // x is taken copyof the a not original value
{
    int y = x * x;
    return y;
}

int main()
{
    int a = 5;
    int result = mul(a);
    cout << "Mul : " << result << endl;
    cout << "value of a original : " << a << endl;
}