//
// Created by Isabelle Gagnon on 3/19/21.
//
#include <string>
#include <iostream>
#include "ReadingSpeed.h"

ReadingSpeed::ReadingSpeed() {
    wordsRead = 0;
    time = 0;
    speed = 0;
}

ReadingSpeed::~ReadingSpeed() {

}

int ReadingSpeed::getWordsRead() const {
    return wordsRead;
}

int ReadingSpeed::getTime() const {
    return time;
}

int ReadingSpeed::speed() const {
    return speed;
}

void ReadingSpeed::setWordsRead(int w) {
    wordsRead = w;
}

void ReadingSpeed::setTime(int t) {
    time = t;
}

void ReadingSpeed::speed(int s) {
    speed = s;
}







