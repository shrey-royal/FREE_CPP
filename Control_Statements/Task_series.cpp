// > WAP to print series as 1-3+5-7+9……n
// Output:- 
// Enter one value : 7
// Sum of series is 4

#include<iostream>
using namespace std;

int main() {
    int i, number, sum=0, terms;
    bool flag=true;

    cout << "Enter terms: ";
    cin >> terms;

    number=1;
    for (int i = 0; i < terms; i++, number+=2) {
        if(flag) {
            sum += number;
            flag = false;
        } else {
            sum -= number;
            flag = true;
        }
    }
    cout << "Sum: " << sum;
    return 0;
}