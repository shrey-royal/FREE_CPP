#include<iostream>
using namespace std;

class Dad {
protected:
    string car = "OMNI";
    string hobby = "Driving";
};

class Son : public Dad {
public:
    void introduce() {
        cout << "I have " << car << " and my hobby is " << hobby << endl;
    }
};

int main() {
    Son mhawk;

    mhawk.introduce();

    return 0;
}

/*
Tasks:

1. Vehicle Inheritance Hierarchy: Implement a program that demonstrates single inheritance by creating a base class 'Vehicle' with derived classes 'Car', 'Motorcycle', and 'Truck'. Each derived class should inherit properties and methods from the base class while also adding its own unique characteristics.

2. Employee Inheritance: Develop a system for managing employees in an organization using inheritance. Create a base class 'Employee' with derived classes 'Manager', 'Engineer', and 'Clerk'. Each derived class should inherit common attributes and methods from the base class while having specialized features specific to their role.

3. Geometry Inheritance: Construct a program to represent various geometric shapes using inheritance. Define a base class 'Shape' and derived classes such as 'Circle', 'Square', and 'Triangle'. Implement methods to calculate area and perimeter for each shape, inheriting appropriate properties and behaviors from the base class.

4. Animal Inheritance: Build a system to model different animals using inheritance. Design a base class 'Animal' with derived classes like 'Mammal', 'Bird', and 'Reptile'. Each derived class should inherit common traits from the base class while also possessing distinct characteristics inherent to their category.

5. Bank Account Inheritance: Create a banking application to manage different types of bank accounts utilizing inheritance. Develop a base class 'Account' with derived classes 'SavingsAccount', 'CheckingAccount', and 'CreditAccount'. Implement methods for deposit, withdrawal, and interest calculation, inheriting appropriate functionalities from the base class.

*/