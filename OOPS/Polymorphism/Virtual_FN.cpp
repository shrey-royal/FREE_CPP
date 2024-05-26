#include<iostream>
using namespace std;

class A {
    int x = 10;
public:
    virtual void display() {
        cout << "Value of x is " << x << endl;
    }
};

class B : public A {
    int y;
public:
    B(int y) : y(y) {}

    void display() override {
        cout << "Value of y is " << y << endl;
    }
};

class C : public A {};

int main() {
    A *a;
    B b(1), b1(2), b2(3);

    a = &b;
    a->display();

    a = &b1;
    a->display();

    a = &b2;
    a->display();

    C c;

    a = &c;
    a->display();


    return 0;
}

