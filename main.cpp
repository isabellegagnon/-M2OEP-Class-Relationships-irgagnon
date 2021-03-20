#include <iostream>
using namespace std;
#include "Book.h"
#include "GreatGatsby.h"
#include "Author.h"
#include "ReadingSpeed.h"
using namespace std;

int main() {
    void readBook(vector<unique_ptr<Book> &books) {

        int readingSpeed;

        cout << "Reading speed is calculated by by dividing the number of the words you read to the amount of time you spent reading the text. " << endl;
        cout << "The result you get is your reading speed rate. Based on the formula, “Words Per Minute” (wpm) is its counting unit." << endl;
        for (int i = 0; i < books.size(); i++) {
            cout << books[i]-> getTitle() << "speed(): ";
            speed += book[i] -> getSpeed();
        }

        cout << "Average reading speed is: "<< wordsRead / time << endl;
    }

    void userSpeed(vector<unique_ptr<Book>> &books, int &wordsRead, int time) {
        int userWords;
        int userTime;
        string trash;

        cout << "To calculate your reading speed enter in the amount of time it took: "  <<endl;
        while (!(cin >> userTime && (userTime = 0))) {
            cin.clear();
            getLine(cin, trash);
            cout <<"Please enter valid number";
        }

    }

}
