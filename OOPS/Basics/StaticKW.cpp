#include<iostream>
using namespace std;

class Movie {
    string name;
    float price;
    int maxSeats;
    static int reservedSeats;

public:
    Movie(string name, float price, int maxSeats) {
        this->name = name;
        this->price = price;
        this->maxSeats = maxSeats;
    }

    void bookTicket(int numTickets) {
        char flag;
        if( numTickets <= (maxSeats-reservedSeats) ) {
            cout << "Your total is Rs." << (price * numTickets) << "\nDo you want to book? \n(Y/N)-> ";
            cin >> flag;

            if(flag == 'Y' || flag == 'y') {
                cout << numTickets << " Seats reserved, Enjoy the show..." << endl;
                reservedSeats += numTickets;
            }
        } else {
            cout << "Sorry, We're booked out!" << endl;
        }
    }

    void display() {
        cout << "Price of " << name << " is Rs." << price << "." << endl;
    }

    static int getReservedSeats() {
        return reservedSeats;
    }
};

//initialization
int Movie::reservedSeats = 0;

int main() {
    Movie movie("Article 370", 250, 60);
    Movie movie1("Hanuman", 180, 120);

    movie.bookTicket(8);
    movie1.bookTicket(7);

    // cout << "Current Reserved Seats: " << movie1.getReservedSeats(); //Incorrect way
    // cout << "Current Reserved Seats: " << Movie::reservedSeats;
    cout << "Current Reserved Seats: " << Movie::getReservedSeats();



    return 0;
}