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
}