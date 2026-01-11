#include <iostream>
using namespace std;

int main()
{
    char ch = 1024;
    //  overflow in conversion from 'int' to 'char' changes value from '1024' to ''\000'' [-Woverflow]
    char ch = 1024;
    cout << ch << endl;
    return 0;
}