// Print digest of a number
#include <iostream>
using namespace std;

void printDigest(int n)
{
    while (n != 0)
    {
        int digit = n % 10;
        cout << digit;
        n = n / 10;
    }
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    printDigest(n);
    return 0;
}