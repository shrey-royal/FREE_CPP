#include<iostream>
using namespace std;

class Beverage {
protected:
    string name;
public:
    Beverage(string n) : name(n) {}
};

class ColdDrink {
protected:
    float price;

public:
    ColdDrink(float p) : price(p) {}
};

class Soda : public Beverage, public ColdDrink {
private:
    string flavor;
public:
    Soda(string name, float price, string flavor) : Beverage(name), ColdDrink(price), flavor(flavor) {}

    void display() {
        cout << "Name: " << name << ", Price: " << price << ", Flavor: " << flavor << endl;
    }
};

int main() {
    Soda s("Coca Cola", 20, "Cola");
    s.display();

    Soda s1("Limca", 20, "Lemon");
    s1.display();

    return 0;
}