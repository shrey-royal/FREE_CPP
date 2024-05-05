#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    const int row = 3;
    int col = 3;
    int arr[row][col] = {
        {12, 23, 3},
        {45, 5, 63},
        {7, 8, 9}
    };

    // for(int i=0; i<row; i++) {
    //     for(int j=0; j<col; j++) {
    //         cout << "\nEnter arr["<< i <<"][" << j << "]: ";
    //         cin >> arr[i][j];
    //     }
    //     cout << endl;
    // }

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << setw(2) << arr[i][j] << ", ";
        }
        cout << endl;
    }
    // cout << "abcd";

    return 0;
}