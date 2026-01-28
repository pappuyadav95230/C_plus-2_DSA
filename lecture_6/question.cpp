// Print digest of a number
// #include <iostream>
// using namespace std;

// void printDigest(int n)
// {
//     while (n != 0)
//     {
//         int digit = n % 10;
//         cout << digit;
//         n = n / 10;
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     printDigest(n);
//     return 0;
// }


// print 567 -> 567 i just try not sure 
#include <iostream>
using namespace std;

void printNumber(int n)
{
    while (n != 0)
    {
        int ans = 0;
        int digit = ans * 10 + n;
        cout << digit;
        break;
    }
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    printNumber(n);
    return 0;
}