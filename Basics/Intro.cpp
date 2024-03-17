/*
CPP is a Semi-Object Oriented Programming language
iostream = istream + ostream

istream - cin
ostream - cout

all the objects comes under standard namespace

ostream object uses insertion operator (<<) to print the data on the console
istream object uses extraction operator (>>) to scan the data from the console

*/

#include<iostream>
using namespace std;

int main() {
    // int a, b, c;
    // cout << "Hello World!" << endl << "hello again";

    // cout << "Enter a, b & c: ";
    // cin >> a >> b >> c;

    // cout << "a = " << a << ", b = " << b << ", c = " << c;

    char str[10];
    string str1;

    cout << "Enter str: ";
    // cin >> str;
    cin.getline(str, 10);   //char array

    cout << "Enter str1: ";
    // cin >> str1;
    getline(cin, str1);  //string

    cout << "Str = " << str << endl << "str1 = " << str1;


    return 0;
}