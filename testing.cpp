//
// Created by Isabelle Gagnon on 3/19/21.
//

#include <iostream>

#include "Book.h"
#include "ReadingSpeed.h"
#include "Author.h"
#include "GreatGatsby.h"

using namespace std;

int main() {
    bool passed = true;

    Author authorDefault();
    ReadingSpeed speedDefault();
    GreatGatsby gatsbyDefault();

    //Author setters
    Author.setFirstName("Author FN Test");
    Author.setLastName("Author LN Test");
    Author.setBooksWritten(50);

    //Author Getters
    if (Author.getFirstName() != "Author Test") {
        passed = false;
        cout << "Failed: Author.getFirstName() != \"Author\"" << endl;
    }
    if (Author.getLastName() != "Author Test") {
        passed = false;
        cout << "Failed: Author.getLastName() != \"Author\"" << endl;
    }
    if (Author.getBooksWritten() != "Author Test") {
        passed = false;
        cout << "Failed: Author.getBooksWritten() != \"Author\"" << endl;
    }

    //ReadingSpeed setters
    ReadingSpeed.setWordsRead("ReadingSpeed Test");
    ReadingSpeed.setTime("ReadingSpeed Test");
    ReadingSpeed.setSpeed(100);

    //Reading Speed Getters
    if (ReadingSpeed.getFirstName() != "ReadingSpeed Test") {
        passed = false;
        cout << "Failed: ReadingSpeed.getWordsRead() != \"ReadingSpeed\"" << endl;
    }
    if (ReadingSpeed.getLastName() != "ReadingSpeed Test") {
        passed = false;
        cout << "Failed: ReadingSpeed.getTime() != \"ReadingSpeed\"" << endl;
    }
    if (ReadingSpeed.getBooksWritten() != "ReadingSpeed Test") {
        passed = false;
        cout << "Failed: ReadingSpeed.getSpeed() != \"ReadingSpeed\"" << endl;
    }

    if (passed) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl
    }
    return 0;
}







}

