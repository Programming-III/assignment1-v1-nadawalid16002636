#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal() {
    private:
    string name;
    int age;
    bool isHungry;
    
    public:
    void display(string name,int age,bool isHungry)
      this->name=name;
      this->age=age;
      this->isHungry=isHungry;
      
      std::cout << name << endl;
      std::cout << "Age:" << age << endl;
      std::cout << isHungry << endL;
      
      void feed(bool isHungry)
      this->isHungry=isHungry;
}



#endif
