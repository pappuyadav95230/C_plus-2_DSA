// write function to add sum of all number
// #include <iostream>
// using namespace std;

// int sumOfAllNumber(int n)
// {
//     int sum = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     return sum;
// }

// int main()
// {
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     int sum = sumOfAllNumber(n);
//     cout << "Sum is : " << sum << endl;
//     return 0;
// }


// Write functionof sum of even number 
#include <iostream>
using namespace std;

int getEvenSum(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i = i + 2)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int sum = getEvenSum(n);
    cout << "Sum of Even number is : " << sum << endl;
    return 0;
}