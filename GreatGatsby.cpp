//
// Created by Isabelle Gagnon on 3/19/21.
//

#include "GreatGatsby.h"

GreatGatsby::GreatGatsby() {
    title = "unknown";
    hasChapters = false;
    hasCover = false;
    pages = 0;
}

GreatGatsby::GreatGatsby(std:: string title, bool hasChapters, bool hasCover, int pages) {
    title = title;
    hasChapters = hasChapters;
    hasCover = hasCover;
    pages = pages;
}

