#include<iostream>
using namespace std;

class Shape {
public:
    void draw() {
        cout << "-> Drawing a shape..." << endl;
    }
};

class ColoredShape : public Shape {
protected:
    string color;
public:
    ColoredShape(string color) : color(color) {}

    // void draw() {
    //     cout << "-> Drawing a colored shape..." << endl;
    // }
};

class Square : public ColoredShape {
public:
    int sideLength;

    Square(int sideLength, string color) : ColoredShape(color), sideLength(sideLength) {}

    void draw() {
        cout << "-> Drawing a square  with side length " << sideLength << " and color " << endl;
    }
};

class Circle : public Shape {
public:
    int radius;
    Circle(int radius) : radius(radius) {}

    void draw() {
        cout << "-> Drawing a circle with radius " << radius << endl;
    }
};

class Triangle : public ColoredShape, public Shape {
public:
    int base, height;

    Triangle(int base, int height, string color) : ColoredShape(color), base(base), height(height) {}

    void draw() {
        cout << "-> Drawing a triangle with base " << base << ", height " << height << ", and color " << color << endl;
    }
};

int main() {
    Square sq(5, "red");
    Circle cir(3);
    Triangle tri(4, 3, "blue");

    sq.draw();
    cir.draw();
    tri.draw();


    return 0;
}