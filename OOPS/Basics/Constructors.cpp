#include<iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    // Student() {
    //     rollNo = 0;
    //     name = "";
    //     marks = 0.0f;
    //     // marks = 0.0F;
    //     // marks = (float)0.0;
    //     cout << "Default Constructor..." << endl;
    // }

    Student(int rno, string n, float m) {
        rollNo = rno;
        name = n;
        marks = m;

        cout << "Parameterized Constructor..." << endl;
    }

    Student(Student& obj) {
        rollNo = obj.rollNo;
        name = obj.name;
        marks = obj.marks;
    }

    void show() {
        cout << "RollNo: " << rollNo << endl; 
        cout << "Name: " << name << endl; 
        cout << "Marks: " << marks << endl; 
    }
};

int main() {
    Student mohak(101, "Mohak Patel", 78.5);
    Student vishwa(mohak);

    mohak.show();
    vishwa.show();

    return 0;
}

/*
Tasks: (Constructor)

1. Online Shopping Cart:
You are developing an online shopping website, and you need to implement a "ShoppingCart" class. The default constructor of this class will initialize the cart with default values such as an empty list of items, total cost set to zero, and a default currency (e.g., USD). Create an object of the "ShoppingCart" class using the default constructor and display the initial details of the cart.

2. Employee Database:
You are building an application to manage employee data for a company. Implement an "Employee" class with data members like name, employee ID, designation, and salary. The default constructor will initialize the employee with default values like "Unknown" for name and designation, ID set to zero, and salary set to the minimum wage. Create an object using the default constructor to represent a new employee and display their details.

3. Temperature Sensor:
Imagine you are working on an Internet of Things (IoT) project involving temperature sensors. Create a "TemperatureSensor" class with data members to store the current temperature reading, sensor ID, and location. The default constructor initializes the sensor with a default temperature value, sets the ID as "Unknown," and location as "Unspecified." Create an object of the "TemperatureSensor" class using the default constructor and display its properties.

4. School Attendance Tracker:
You are developing a system to track student attendance in a school. Implement a "Student" class with data members for student name, roll number, class, and attendance status. The default constructor will set the attendance status to "Absent" by default. Create an object of the "Student" class using the default constructor to represent a new student and display their attendance status.

5. Car Rental System:
Design a "Car" class to represent cars available for rent in a car rental system. The class should have attributes like car brand, model, year, and rental status. The default constructor initializes the car with default values like "Unknown" for brand and model, year set to the current year, and rental status as "Available." Create an object of the "Car" class using the default constructor and display its details.
*/

/*
Tasks: (Copy Constructor)

1. Create a class representing a basic geometric shape such as a circle or rectangle. Implement a copy constructor to duplicate objects of this class.
   
2. Design a class to represent a simple shopping cart item with attributes like name, price, and quantity. Implement a copy constructor to create a copy of a shopping cart item object.

3. Develop a class to model a basic employee with attributes like name, age, and salary. Write a copy constructor to duplicate an employee object.

4. Construct a class to represent a basic book with attributes such as title, author, and publication year. Implement a copy constructor to duplicate book objects.

5. Create a class to represent a simple bank account with attributes like account number, balance, and account holder name. Write a copy constructor to duplicate a bank account object.

6. Design a class to model a basic vehicle with attributes like make, model, and year. Implement a copy constructor to duplicate a vehicle object.

7. Develop a class to represent a simple student with attributes like name, age, and grade. Write a copy constructor to duplicate a student object.

8. Construct a class to represent a basic computer with attributes such as brand, processor type, and RAM size. Implement a copy constructor to duplicate computer objects.

9. Create a class to represent a simple contact with attributes like name, email, and phone number. Write a copy constructor to duplicate a contact object.

10. Design a class to model a basic product with attributes such as name, description, and price. Implement a copy constructor to duplicate product objects.

*/