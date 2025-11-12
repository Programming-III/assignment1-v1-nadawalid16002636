#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird() :: public Animal {
    private:
    float wingSpan;
    public:
    void display(string name,int age,bool isHungry);
}







#endif
