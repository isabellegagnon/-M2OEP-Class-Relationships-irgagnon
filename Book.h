//
// Created by Isabelle Gagnon on 3/19/21.
//

#ifndef CLASS_RELATIONSHIPS_BOOK_H
#define CLASS_RELATIONSHIPS_BOOK_H
#include <string>

class Book {
public:

    Book();

    Book(std:: string title, bool hasChapters, bool hasCover, int pages );

    ~Book();

    std::string getTitle() const;

    bool getHasChapters() const;

    bool getHasCover() const;

    int getPages() const;


    void setTitle(std::string title);

    void setHasChapters(bool hasChapters);

    void setHasCover(bool hasChapters);

    void setPages(int pages);

protected:
    std::string title;
    bool hasChapters;
    bool hasCover;
    int pages;

};

#endif //CLASS_RELATIONSHIPS_BOOK_H
