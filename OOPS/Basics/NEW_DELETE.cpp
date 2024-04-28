#include<iostream>
using namespace std;

class Student {
    int rno;
    string name;
    float marks;

public:
    Student() {}
    Student(int r, string n, float m) : rno(r), name(n), marks(m) {}

    void display() {
        cout << "Roll No: " << rno;
        cout << ", Name: " << name;
        cout << ", Marks: " << marks << endl;
    }
};

int main() {
    // int *arr, size;

    // cout << "Enter the size: ";
    // cin >> size;

    // arr = new int[size];

    // for (int i = 0; i < size; i++) {
    //     arr[i] = rand() % 100;
    // }

    // cout << "arr[" << size << "] = { ";
    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] << ", ";
    // }
    // cout << "\b\b }" << endl;

    // delete[] arr;


    Student *s = new Student[2];

    s[0] = Student(101, "Mohak", 23);
    s[1] = Student(102, "Vishwa", 99);

    for (int i = 0; i < 2; i++) {
        s[i].display();
    }
    
    delete[] s;

    return 0;
}