#include<iostream>
using namespace std;

class Test {
private:
    int num;
public:
    Test(int n) : num(n) {}

    int operator++() {
        return (num += 2);
    }
    
    int operator++(int) {
        return (num += 5);
    }

    void print() {
        cout << "The count is " << num << endl;
    }
};

class stringArithmetic {
    string str;
public:
    stringArithmetic(string s) : str(s) {}

    stringArithmetic operator+(stringArithmetic& obj) {
        return stringArithmetic(str + obj.str);
    }

    stringArithmetic operator*(int num) {
        string s = str;
        for (int i = 0; i < num-1; i++) {
            str += s;
        }
        return stringArithmetic(str);
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    /*
    Test t(5);

    ++t;
    t.print();

    t++;
    t.print();
    */

    stringArithmetic s1("Hello"), s2(" World!");

    cout << "\nAddition: ";
    (s1+s2).display();

    cout << "\nMultiplication: ";
    (s1*3).display();


    return 0;
}