#include<iostream>
using namespace std;


class Grains {
private:
    string color;
    double weight;
    string type;

public:
    void setData(string col, double w, string t) {
        color = col;
        weight = w;
        type = t;
    }

    void display() {
        cout << "Color: " << color << ", Weight: " << weight << ", Type: " << type << endl;
    }

    void grow() {
        cout << "Grains are growing..." << endl;
    }

    
    void harvest() {
        cout << "Harvesting grains..." << endl;
    }

    
    void process() {
        cout << "Processing grains..." << endl;
    }
};

int main() {
    Grains wheat, rice;
    
    wheat.setData("Brown", 10.5, "Whole Wheat");
    rice.setData("White", 5.7, "Basmati");
    
    wheat.display();
    rice.display();

    wheat.grow();
    wheat.harvest();
    wheat.process();


    return 0;
}