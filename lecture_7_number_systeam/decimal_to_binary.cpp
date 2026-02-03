// #include <iostream>
// #include <math.h>
// using namespace std;

// int decimalToBinary(int n)
// {

//     int binaryno = 0;
//     int i = 0;
//     while (n > 0)
//     {
//         int bit = n % 2;
//         binaryno = bit * pow(10, i++) + binaryno;
//         n = n / 2;
//     }
//     return binaryno;
// }

// int main()
// {
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     int binary = decimalToBinary(n);
//     cout << binary;
//     return 0;
// }

// Using Bitse Method AND operation
#include <iostream>
#include <math.h>
using namespace std;

int decimalToBinary(int n)
{
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n & 1;
        n = n >> 1;
        binaryno = bit * pow(10, i++) + binaryno;
    }
    return binaryno;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int binary = decimalToBinary(n);
    cout << binary;
    return 0;
}