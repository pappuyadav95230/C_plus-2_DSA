#include <iostream>
using namespace std;

void PrintName()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Pappu" << endl;
    }
}

int main()
{
    PrintName();
    PrintName();
}