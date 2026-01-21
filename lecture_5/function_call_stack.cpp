#include <iostream>
using namespace std;

void fun1()
{
    cout << "function one" << endl;
}

void fun2()
{
    fun1();
    cout << "Function two" << endl;
}

int main()
{
    fun2();
    return 0;  // it return the 0 for operting system
}