#include <iostream>
using namespace std;

int main()
{
    // //Arithmetic
    // int a = 5, b = 2;
    // cout << "Add : " << a + b << endl;
    // cout << "Sub : " << a - b << endl;
    // cout << "Mul : " << a * b << endl;
    // cout << "Div : " << a / b << endl;
    // cout << "Mod : " << a % b << endl;
    // return 0;

    // // Relational Operator
    // int a = 5, b = 2;
    // cout << "a > b : " << (a > b) << endl;
    // cout << "a < b : " << (a < b) << endl;
    // cout << "a >= b : " << (a >= b) << endl;
    // cout << "a <= b : " << (a <= b) << endl;
    // cout << "a == b : " << (a == b) << endl;
    // cout << "a != b : " << (a != b) << endl;
    // return 0;

    // Logical Opertor (&& -> AND, || -> OR , ! -> NOT)
    int a = 5, b = 3;

    // &&
    if (a > b && a > 2)
    {
        cout << "Limit Exceeded1"<<endl;
    }
    // ||
    if (a > b || a > 6)
    { 
        cout << "Limit Exceeded2"<<endl;
    }
    // !
    if (!(a > b))
    {
        cout << "Limit Exceeded3"<<endl;
    }
    return 0;
}
