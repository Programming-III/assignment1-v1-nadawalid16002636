#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal() :: public Animal {
    private:
    string furColor;
    public:
    void displayMammal(string name,int age,bool isHungry);
}






#endif
