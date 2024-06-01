#include<iostream>
using namespace std;

int main() {
    string str = "Hello, World";

    // length
    // cout << str << endl;
    // cout << str.length() << endl;

    // substr
    // string s1 = str.substr(7, 3);
    // cout << s1 << endl;

    // find()
    // int position = str.find("l", 5);
    // cout << "position: " << position << endl;
    // if(position != string::npos) {
    //     cout << "found at " << position << endl;
    // } else {
    //     cout << "not found" << endl;
    // }

    // replace()
    // str.replace(7, 5, "everyone");
    
    // append()
    // str.append(" Have a nice day");

    // erase()
    // str.erase(6, 9);

    // compare()
    // int comp = str.compare("Hello, World");
    // cout << comp << endl;

    // swap()
    // string tempString = "GoodBye!";
    // cout << "str: " << str << ", tempString: " << tempString << endl;
    // swap(str, tempString);
    // cout << "str: " << str << ", tempString: " << tempString << endl;

    // size()
    // cout << str.size() << endl;

    // resize()
    // str.resize(50);
    // cout << str.size() << endl;

    // at()
    // char character = str.at(7);
    // cout << "char: '" << character << "'" << endl;

    // copy()
    // string str1;
    // str1.assign(" Biswa is a worker thread");
    // str.resize(str.size() + str1.size());
    // str1.copy(&str[12], str.size());
    // cout << str << endl;

    return 0;
}

/*
Tasks:

1. Problem Statement: You are tasked with creating a program for a library management system. Implement a function that takes a book title as input and checks if it matches any of the books currently available in the library's database.

   Sample Test Case:
   - Input: "The Great Gatsby"
   - Output: Book found in the library database.

2. Problem Statement: Develop a program to process customer feedback for a restaurant. Write a function that checks if a given feedback comment contains any inappropriate language or words.

   Sample Test Case:
   - Input: "The food was terrible and the service was awful."
   - Output: Inappropriate language detected.

3. Problem Statement: You are building a chat application and need to implement a function that checks if a given username is available or already taken by another user.

   Sample Test Case:
   - Input: "user123"
   - Output: Username available.

4. Problem Statement: Create a program to analyze product reviews. Implement a function that calculates the average rating for a product based on a list of review scores.

   Sample Test Case:
   - Input: "4, 5, 3, 2, 4"
   - Output: Average rating: 3.6

5. Problem Statement: Develop a program for a word game. Implement a function that checks if a player's guess matches the hidden word, considering both the characters and their positions.

   Sample Test Case:
   - Input: Guess: "rainbow", Hidden Word: "rainbow"
   - Output: Correct guess!

6. Problem Statement: You are building a music player application. Create a function that extracts the artist's name from a given song title.

   Sample Test Case:
   - Input: "Shape of You - Ed Sheeran"
   - Output: Artist: Ed Sheeran

7. !ERROR 404 - Program not found

8. Problem Statement: Develop a program to process customer orders for an online store. Implement a function that extracts the product name and quantity from a given order string.

   Sample Test Case:
   - Input: "2 x iPhone 12, 1 x AirPods Pro"
   - Output: Product: iPhone 12, Quantity: 2; Product: AirPods Pro, Quantity: 1

9. Problem Statement: You are building a program to analyze social media posts. Create a function that identifies and extracts hashtags from a given post.

   Sample Test Case:
   - Input: "Just finished my workout! #fitness #healthyliving"
   - Output: Hashtags: #fitness, #healthyliving

10. Problem Statement: Implement a program to manage inventory for a retail store. Write a function that checks if a given product is in stock based on its SKU (Stock Keeping Unit).

    Sample Test Case:
    - Input: SKU: "ABC123"
    - Output: Product in stock.
*/