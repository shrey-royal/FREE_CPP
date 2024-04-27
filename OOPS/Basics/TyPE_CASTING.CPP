#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double a;

    a = 2321342343243244.456789098767890;
    cout << fixed << setprecision(10) << a << endl;

    return 0;
}