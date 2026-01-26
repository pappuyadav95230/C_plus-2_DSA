// with print statement
// #include <iostream>
// using namespace std;

// void studentGrade(int marks)
// {
//     if (marks >= 90)
//     {
//         cout << "A+ Grade" << endl;
//     }
//     else if (marks >= 80)
//     {
//         cout << "B Grade" << endl;
//     }
//     else if (marks >= 70)
//     {
//         cout << "C Grade" << endl;
//     }
//     else if (marks >= 60)
//     {
//         cout << "D Grade" << endl;
//     }
//     else if (marks >= 30)
//     {
//         cout << "Pass" << endl;
//     }
//     else
//     {
//         cout << "Fail" << endl;
//     }
// }

// int main()
// {
//     int marks;
//     cout << "Enter the marks : ";
//     cin >> marks;
//     studentGrade(marks);
//     return 0;
// }

// student grade problem
#include <iostream>
using namespace std;

char getGrade(int marks)
{
    if (marks >= 90)
    {
        return 'A';
    }
    else if (marks >= 80)
    {
        return 'B';
    }
    else if (marks >= 70)
    {
        return 'C';
    }
    else if (marks >= 60)
    {
        return 'D';
    }
    else if (marks >= 30)
    {
        return 'P';
    }
    else
    {
        return 'F';
    }
}

int main()
{
    int marks;
    cout << "Enter the marks : ";
    cin >> marks;
    char grade = getGrade(marks);
    cout << "Grade : " << grade << endl;
}
