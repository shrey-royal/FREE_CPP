#include<iostream>
using namespace std;

int main() {
    int data = 0;

    cout << "Before Exception" << endl;
    
    try {
        // if(data == 0) throw "trying to Divide by zero";
        // else cout << 12/data << endl;

        // throw '1';
        throw "this is string";
    } catch(const char* e) {
        cout << "const char*: " << e << endl;
    } catch(int i) {
        cout << "int: " << i << endl;
    } catch(char ch) {
        cout << "Char: " << ch << endl;
    } catch(string str) {
        cout << "string: " << str << endl;
    } catch(...) {
        cout << "Default Exception" << endl;
    }

    cout << "After Exception" << endl;

    return 0;
}