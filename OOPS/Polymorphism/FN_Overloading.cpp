#include<iostream>
using namespace std;

class Adder {
public:
    int add(int a, int b) {
        return a+b;
    }

    int add(int a, int b, int c) {
        return a+b+c;
    }

    string add(char a, char b) {
        string temp = "";
        temp += a;
        temp += b;

        return temp;
    }
};

int main() {
    Adder obj;

    cout << "add(int, int): " << obj.add(2, 3) << endl;
    cout << "add(int, int, int): " << obj.add(2, 3, 5) << endl;
    cout << "add(char, char): " << obj.add('s', 'h') << endl;

    return 0;
}