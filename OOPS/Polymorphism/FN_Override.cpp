#include<iostream>
using namespace std;

class Parent {
private:
    int privateData;
public:
    Parent() : privateData(45) {}

    void displayData() {
        cout << "Private data from parent is " << privateData << endl;
    }
};

class Child : public Parent {
private:
    int privateData;
public:
    Child() : privateData(420) {}

    void displayData() {    //Overridden method
        cout << "Private data from child is " << privateData << endl;
    }
};

int main() {
    Parent p;
    Child c;

    p.displayData();
    c.displayData();

    return 0;
}