#include <iostream>
#include <math.h>
using namespace std;

// int binayToDecimal(int n)
// {
//     int decimal = 0;
//     int i = 0;
//     while (n)
//     {
//         int bit = n % 10;
//         decimal = decimal + bit * pow(2, i++);
//         n = n / 10;
//     }
//     return decimal;
// }


// binar to decimal conversion or binary to decimal conversion

int decimallToBinary(int n)
{
    int i = 0;
    int binary = 0;
    while (n)
    {
        int bit = n % 2;
        binary = binary + bit * pow(10, i++);
        n = n / 2;
    }
    return binary;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    // int binary = binayToDecimal(n);
    // cout << binary;
    int decimal = decimallToBinary(n);
    cout << decimal;
    return 0;
}