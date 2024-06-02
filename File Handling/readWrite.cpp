#include<iostream>
#include<fstream>
using namespace std;

class FileHandler {
    string fileName = "";
    string str;
public:
    void setFileName(string fileName) {
        this->fileName = fileName;
        this->fileName.append(".txt");
    }

    void readFile() {
        // ifstream file;
        // file.open(fileName, ios::in);

        ifstream file(fileName);
        char arr[255];

        if(file.is_open()) {
            // file.read(arr, 255);
            while(getline(file, str)) {
                cout << str << endl;
            }
        }
        file.close();
    }

    void writeFile() {
        ofstream file(fileName);

        if(file.is_open()) {
            cout << "Enter the data you want to store into the file: \n> ";
            cin.ignore();
            getline(cin, str);

            file << str;
        }
        file.close();
    }
};

int main() {
    FileHandler fh;
    int choice;
    string name;

    do {
        cout << "\n1. Read File" << endl;
        cout << "2. Write File" << endl;
        cout << "3. Enter new FileName" << endl;
        cout << "4. Exit" << endl;
        cout << "-> ";
        cin >> choice;

        switch (choice) {
            case 1:
                fh.readFile();
                break;
                
            case 2:
                fh.writeFile();
                break;

            case 3:
                cout << "Enter filename: ";
                cin >> name;
                fh.setFileName(name);
                break;

            case 4:
                cout << "Exiting the program..." << endl;
                break;
            
            default:
                cout << "Invalid Choice, try again!" << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}