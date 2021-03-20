//
// Created by Isabelle Gagnon on 3/19/21.
//

#ifndef CLASS_RELATIONSHIPS_AUTHOR_H
#define CLASS_RELATIONSHIPS_AUTHOR_H
#include <string>
class Author {
public:

    Author();

    Author(std:: string firstName, std::string lastName, int booksWritten);

    ~Author();

    std::string getFirstName() const;

    std::string getLastName() const;

    int booksWritten() const;


    void setFirstName(std::string firstName);

    void setLastName(std::string lastName);

    void setBooksWritten(int booksWritten);


protected:
    std::string firstName;
    std::string lastName;

};

#endif //CLASS_RELATIONSHIPS_AUTHOR_H
