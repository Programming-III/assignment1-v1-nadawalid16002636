#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

class Reptile() :: public Animal {
    private:
    bool isVenamous;
    public:
    void display(string name,int age,bool isVenamous ,bool isHungry);
    
}  








#endif
