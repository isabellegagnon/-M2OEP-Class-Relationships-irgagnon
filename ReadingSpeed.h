//
// Created by Isabelle Gagnon on 3/19/21.
//

#ifndef CLASS_RELATIONSHIPS_READINGSPEED_H
#define CLASS_RELATIONSHIPS_READINGSPEED_H

#include <string>
#include <iostream>

class ReadingSpeed {
private:
    int wordsRead;
    int time;
    int speed;

public:
    ReadingSpeed();

    ReadingSpeed(int w, int t, int s);

    ~ReadingSpeed();

    int getWordsRead() const;

    int getTime() const;

    int getSpeed() const;


    void setWordsRead(int w);
    void setTime(int t);
    void setSpeed(int s);

};

#endif //CLASS_RELATIONSHIPS_READINGSPEED_H
