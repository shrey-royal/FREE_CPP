#include<iostream>
using namespace std;

class Person {
    string name;
    int age;
    float height;
public:
    string getName() {
        return name;
    }

    void setName(string name) {
        if(!name.empty()) {
            this->name = name;
        } else {
            cout << "Erorr: Name can't be empty." << endl;
        }
    }

    int getAge() {
        return age;
    }

    void setAge(int age) {
        // this->age = age;
        if(age >= 0  && age <= 120) {
            this->age = age;
        } else {
            cout << "Erorr: Age must be between o and 120." << endl;
        }
    }

    float getHeight() {
        return height;
    }

    void setHeight(float height) {
        // this->height = height;
        if(height > 0) {
            this->height = height;
        } else {
            cout << "Erorr: Height must be a +ve value." << endl;
        }
    }
};


int main() {
    Person person;

    person.setName("Mohak");
    person.setAge(21);
    person.setHeight(1.75);

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Height: " << person.getHeight() << endl;

    person.setName("");
    person.setAge(130);
    person.setHeight(-1.5);

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Height: " << person.getHeight() << endl;


    return 0;
}