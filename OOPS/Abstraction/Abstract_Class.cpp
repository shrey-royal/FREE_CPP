// 4. Diet Planner Application:
//    - Problem: Develop an application to help users plan their diet by selecting meals from different cuisines.
//    - Test Case: Verify that the total calorie count of a selected meal plan is accurate.
//    - Logic: Create an abstract class 'Meal' with methods to calculate total calories. Subclasses like 'Breakfast', 'Lunch', 'Dinner', etc., implement calorie calculation logic based on the chosen cuisine.

#include<iostream>
using namespace std;

class Meal {
protected:
    string name;
    int calories;
public:
    Meal(string n, int c) : name(n), calories(c) {}

    virtual int calculateCalories() = 0;    //Pure virtual function
};

class BreakFast : public Meal {
public:
    BreakFast(string name, int cal) : Meal(name, cal) {}

    int calculateCalories() override {
        return calories;
    }
};

class Lunch : public Meal {
public:
    Lunch(string name, int cal) : Meal(name, cal) {}

    int calculateCalories() override {
        return calories;
    }
};

class Dinner : public Meal {
public:
    Dinner(string name, int cal) : Meal(name, cal) {}

    int calculateCalories() override {
        return calories;
    }
};

int main() {
    BreakFast breakFast("Fafda-Jalebi", 300);
    Lunch lunch("Undhiyu-Puri", 500);
    Dinner dinner("Khichdi-Kadhi", 130);

    int totalCalories = breakFast.calculateCalories() + lunch.calculateCalories() + dinner.calculateCalories();

    cout << "Total Calories: " << totalCalories << endl;


    return 0;
}