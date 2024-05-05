/*
Problem Statement:
Build a reservation system for a restaurant where each cell in a 2D array represents a table in the dining area. Each cell stores instances of a Reservation class, representing reservations made by customers. Implement functionalities to make, cancel, and manage reservations, check table availability, calculate waiting times, etc.
*/

#include<iostream>
#include<string>
using namespace std;

const int MAX_TABLES = 10;
const int MAX_RESERVATIONS_PER_TABLE = 2;

class Reservation {
private:
    string customerName;
    string date;
    float time;
public:
    Reservation() {}

    Reservation(string customerName, string date, float time) : customerName(customerName), date(date), time(time) {}

    string getCustomerName() {
        return customerName;
    }

    string getDate() {
        return date;
    }

    float getTime() {
        return time;
    }

    void setCustomerName(string CustomerName) {
        this->customerName = customerName;
    }

    void setDate(string date) {
        this->date = date;
    }

    void setTime(float time) {
        this->time = time;
    }
};

class Restaurant {
private:
    Reservation reservations[MAX_TABLES][MAX_RESERVATIONS_PER_TABLE];
    bool tableAvailable[MAX_TABLES];
public:
    Restaurant() {
        for (int i = 0; i < MAX_TABLES; i++) {
            tableAvailable[i] = true;
        }
    }

    //make reservation
    bool makeReservation(int tableNumber, string customerName, string date, float time) {
        if(tableNumber < 0 || tableNumber >= MAX_TABLES) {
            cout << "Invalid table number." << endl;
            return false;
        }

        if(!tableAvailable[tableNumber]) {
            cout << "Table " << tableNumber + 1 << " is already reserved." << endl;
            return false;
        }

        for (int i = 0; i < MAX_RESERVATIONS_PER_TABLE; i++) {
            if(reservations[tableNumber][i].getCustomerName().empty()) {
                reservations[tableNumber][i].setCustomerName(customerName);
                reservations[tableNumber][i].setDate(date);
                reservations[tableNumber][i].setTime(time);
                tableAvailable[tableNumber] = false;
                cout << "Reservation made successfully for table: " << tableNumber + 1 << "." << endl;
                return true;
            }
        }

        cout << "Sorry, table " << tableNumber + 1 << " is fully booked." << endl;
        return false;
    }

    bool isTableAvailable(int tableNumber) {
        if(tableNumber < 0 || tableNumber >= MAX_TABLES) {
            cout << "Invalid table number." << endl;
            return false;
        }

        return tableAvailable[tableNumber];
    }
};

int main() {
    Restaurant taj;

    taj.makeReservation(0, "Mohak Patel", "2024-05-07", 18.00);
    taj.makeReservation(1, "Dhiraj Sir", "2024-07-01", 19.30);
    taj.makeReservation(2, "Alice Johnson", "2024-05-06", 13.00);

    cout << "Table 1 available? -> " << (taj.isTableAvailable(0) ? "Yes" : "No") << endl;
    cout << "Table 2 available? -> " << (taj.isTableAvailable(1) ? "Yes" : "No") << endl;
    cout << "Table 3 available? -> " << (taj.isTableAvailable(2) ? "Yes" : "No") << endl;

    return 0;
}