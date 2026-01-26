// find the max of 3 number
// #include <iostream>
// using namespace std;

// int max(int a, int b, int c)
// {
//     if (a > b && a > c)
//     {
//         return a;
//     }
//     else if (b > a && b > c)
//     {
//         return b;
//     }
//     else
//     {
//         return c;
//     }
// }

// int main()
// {
//     int a, b, c;
//     cout << "Enter three number : ";
//     cin >> a >> b >> c;
//     int maxValue = max(a, b, c);
//     cout << maxValue;
//     return 0;
// }

// Counting from 1 to N
#include <iostream>
using namespace std;

void printCounting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    } 
    
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    printCounting(n);
}