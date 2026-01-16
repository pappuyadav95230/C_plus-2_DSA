#include <iostream>
using namespace std;

int main()
{
    int a = 12;
    a = a << 1;
    cout << "left shift by 1 :" << a << endl;
    int b = 12;
    b = b >> 1;
    cout << "right shift by 1 :" << b << endl;
}
