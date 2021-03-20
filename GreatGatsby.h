//
// Created by Isabelle Gagnon on 3/19/21.
//

#ifndef CLASS_RELATIONSHIPS_GREATGATSBY_H
#define CLASS_RELATIONSHIPS_GREATGATSBY_H
#include <iostream>

#include "Book.h"

class GreatGatsby : public Book {
public:

    GreatGatsby();

    GreatGatsby(std:: string title, bool hasChapters, bool hasCover, int pages);


};

#endif //CLASS_RELATIONSHIPS_GREATGATSBY_H
