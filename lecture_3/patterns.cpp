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
int main(){
    for(int row=0; row<3; row++){
        for(int col=0; col<5; col++){
            if(row==0 || row==2 || col==0 || col==4){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}