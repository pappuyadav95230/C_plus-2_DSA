#include <iostream>
using namespace std;

// sold rectangle
// int main()
// {
//     // outer loop - row obeserve
//     for (int row = 0; row < 3; row++)
//     {
//         // inner loop - column obeserve
//         for (int col = 0; col < 5; col++)
//         {
//             cout << " * ";
//         }
//         cout << endl;
//     }

//     return 0;

// }

// squre pattern
// int main()

// {
//     for (int row = 0; row < 4; row++)
//     {
//         for (int col = 0; col < 4; col++)
//         {
//             cout << " * ";
//         }
//         cout << endl;
//     }
// }

// squre pattern with input
// int main()
// {
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;

//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < n; col++)
//         {
//             cout << " * ";
//         }
//         cout << endl;
//     }
// }

// Hollow Rectangle
// int main(){
//     // outer row for 3 row
//     for(int row=0; row<3; row++){
//         // inner col for 5 col
//         for(int col=0; col<5; col++){
//             // row 0 or row 2 print 5 * or col or col 4 is print the * other is print the space
//             if(row==0 || row==2 || col==0 || col==4){
//                 cout<<" * ";
//             }
//             else{
//                 cout<<"   ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Hollow other methods
// int main()
// {
//     for (int row = 0; row < 3; row++)
//     {
//         if (row == 0 || row == 2)
//         {
//             for (int col = 0; col < 5; col++)
//             {
//                 cout << "* ";
//             }
//         }
//         else
//         {
//             cout << "* ";
//             for (int i = 0; i < 3; i++)
//             {
//                 cout <<"  ";
//             }
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// for big hollow
// int main()
// {
//     for (int row = 0; row < 6; row++)
//     {
//         for (int col = 0; col < 6; col++)
//         {
//             if (row == 0 || row == 5 || col == 0 || col == 5)
//             {
//                 cout << " * ";
//             }
//             else
//             {
//                 cout << "   ";
//             }
//         }
//         cout << endl;
//     }
// }

// other methods
// int main()
// {
//     for (int row = 0; row < 6; row++)
//     {
//         if (row == 0 || row == 5)
//         {
//             for (int col = 0; col < 5; col++)
//             {
//                 cout << " * ";
//             }
//         }
//         else
//         {
//             cout << " * ";
//             for (int i = 0; i < 3; i++)
//             {
//                 cout << "   ";
//             }
//             cout << " * ";
//         }
//         cout << endl;
//     }
// }

// make it generic
// int main()
// {
//     int rowCount, colCount;
//     cin >> rowCount >> colCount;
//     for (int row = 0; row < rowCount; row++)
//     {
//         if (row == 0 || row == rowCount - 1)
//         {
//             for (int col = 0; col < colCount; col++)
//             {
//                 cout << " * ";
//             }
//         }
//         else
//         {
//             cout << " * ";
//             for (int i = 0; i < colCount - 2; i++)
//             {
//                 cout << "   ";
//             }
//             cout << " * ";
//         }
//         cout << endl;
//     }
// }

// Half Pyramid
// int main()
// {
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < row + 1; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// Inverted Half Pyramid
// int main()
// {
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < n - row; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// Numeric Half Pyramid
// int main()
// {
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < row + 1; col++)
//         {
//             cout << col + 1 << " ";
//         }
//         cout << endl;
//     }
// }

// Inverted Numeric Half Pyramid
// int main()
// {
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < n - row; col++)
//         {
//             cout << col + 1 << " ";
//         }
//         cout << endl;
//     }
// }

// full Pyramid
int main()
{
    int n;
    cout << "Enter the number : ";  
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << " ";
        }
        for (int j = 0; j < row + 1; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
}