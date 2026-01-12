// #include <iostream>
// using namespace std;

// int main()
// {
//     int score;
//     cout << "Enter the  number :";
//     cin >> score;

//     if (score < 300)
//     {
//         cout << "India wins " << endl;
//     }
//     else
//     {
//         cout << "Pakistan wins";
//     }
//     return 0;
// }

// vote system
// #include <iostream>
// using namespace std;

// int main()
// {
//     int age;
//     cout << "Enter the  number :";
//     cin >> age;

//     if (age > 18)
//     {
//         cout << "i can vote " << endl;
//     }
//     else
//     {
//         cout << "I can not vote";
//     }
//     return 0;
// }

// Stude Grade system  using if-else,else if 
#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter the  number :";
    cin >> marks;

    if (marks >= 90)
    {
        cout << "Grade A" << endl;
    }
    else if (marks >= 80)
    {
        cout << "Grade B" << endl;
    }
    else if (marks >= 60)
    {
        cout << "Grade C" << endl;
    }
    else if (marks >= 40)
    {
        cout << "Grade D" << endl;
    }
    else
    {
        cout << "Grade F" << endl;
    }
}
