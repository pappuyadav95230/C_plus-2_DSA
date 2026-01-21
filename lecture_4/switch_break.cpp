#include <iostream>
using namespace std;

int main()
{
    int val;
    cout << "enter value : ";
    cin >> val;
    switch (val)
    {
    case 1:
        cout << "Love";
        break;
    case 2:
        cout << "Babber";
        break;
    case 3:
        cout << "Pappu";
        break;
    case 4:
        cout << "Yadav";
        break;
    default:
        cout << "Kumar";
        break;
    }
}
