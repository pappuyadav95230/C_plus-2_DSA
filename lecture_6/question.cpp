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
// #include <iostream>
// using namespace std;

// void printNumber(int n)
// {
//     while (n != 0)
//     {
//         int ans = 0;
//         int digit = ans * 10 + n;
//         cout << digit;
//         break;
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     printNumber(n);
//     return 0;
// }

// print 567 -> 765 try
// #include <iostream>
// using namespace std;

// int printNumber(int n)
// {
//     int ans = 0;
//     int digit = ans * 10 + n;
//     cout << digit;
//     return digit;
// }

// int main()
// {
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     printNumber(n);

//     return 0;
// }

// final we need to pritn {8,2,3,7} -> 8237
#include <iostream>
using namespace std;

int main()
{
    int digit[] = {8, 2, 3, 7};

    int ans = 0;

    for (int i = 0; i < 4; i++)
    {
        ans = ans * 10 + digit[i];
    }
    cout << ans;
}
