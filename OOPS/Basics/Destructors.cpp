#include<iostream>
using namespace std;

class Food {
private:
    string name;
public:
    Food(string name) : name(name) {
        cout << name << " has been prepared." << endl;
    }

    ~Food() {   // (~ -> tilde)
        cout << name << " has been consumed." << endl;
    }

    string getName() {
        return name;
    }
};


int main() {
    Food apple("Apple");

    {
        Food banana("Banana");

        cout << "Name: " << banana.getName() << endl;
    }

    // cout << "Name: " << banana.getName() << endl;
    cout << "Name: " << apple.getName() << endl;
    
    return 0;
}

/*
Tasks: 

1. Create a class representing a car. Implement a destructor that prints a message indicating the destruction of a car object.

2. Design a class to manage student records. Implement a destructor that displays a message when a student record object is destroyed.

3. Develop a simple calculator class. Add a destructor that prints a farewell message when a calculator object is destroyed.

4. Build a class representing a shopping cart. Include a destructor that displays a message when a shopping cart object is destroyed.

5. Design a class representing a computer. Implement a destructor that prints a message when a computer object is destroyed.

*/