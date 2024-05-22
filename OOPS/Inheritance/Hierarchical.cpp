#include<iostream>
using namespace std;

class Employee {
protected:
    string name;
    int employeesID;
public:
    Employee(string n, int id) : name(n), employeesID(id) {}

    void display() {
        cout << "Name: " << name << ", Employee ID: " << employeesID;
    }
};

class Manager : public Employee {
private:
    string department;
public:
    Manager(string n, int id, string dept) : Employee(n, id), department(dept) {}

    void display() {    //override
        cout << "Manager - ";
        Employee::display();
        cout << ", Department: " << department << endl;
    }
};

class Engineer : public Employee {
private:
    string specialization;
public:
    Engineer(string n, int id, string spec) : Employee(n, id), specialization(spec) {}

    void display() {
        cout << "Engineer - ";
        Employee::display();
        cout << ", Specialization: " << specialization << endl;
    }
};

int main() {
    Manager manager("Darji", 419, "Engineering");
    Engineer engineer("Soni", 420, "Software Development");

    cout << endl;
    manager.display();
    engineer.display();
    cout << endl;

    return 0;
}