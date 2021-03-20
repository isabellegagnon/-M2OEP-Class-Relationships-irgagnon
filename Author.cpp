//
// Created by Isabelle Gagnon on 3/19/21.
//

#include "Book.h"

Book::Book() {
    title = "unknown";
    hasChapters = false;
    hasCover = false;
    pages = 0;
}

Book::Book(std:: string title, bool hasChapters, bool hasCover, int pages) {
    title = title;
    hasChapters = hasChapters;
    hasCover = hasCover;
    pages = pages;
}

Book::~Book() {

}

std::string Book::getTitle() const {
    return title;
}

bool Book::getHasChapters() const {
    return hasChapters;
}

bool Book::getHasCover() const {
    return hasCover;
}

int Book::getPages() const {
    return pages;
}

void Book::setTitle(std::string title) {
    title = title;
}

void Book::setHasChapters(bool hasChapters) {
    hasChapters = hasChapters;
}

void Book::setHasCover(bool hasChapters) {
    hasCover = hasCover;
}

void Book::setPages(int pages) {
    pages = pages;
}


