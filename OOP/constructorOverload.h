
#ifndef __DOG_H__
#define __DOG_H__
#include <string>

class Dog {
private:
    std::string name;
    int age;
public:

//---- WRITE YOUR OVERLOADED CONSTRUCTOR BELOW THIS LINE----

    Dog(std::string n, int a) {
        name = n;
        age = a;
    }

    // Dog(std::string n, int a) 
    // : name{n}, age{a}{};

//---- WRITE YOUR OVERLOADED CONSTRUCTOR ABOVE THIS LINE----
    std::string get_name() {return name; }
    void set_name(std::string n) {name = n; }
    int get_age() {return age; }
    void set_age(int a) { age = a;}
    int get_dog_years() { return age * 7; }
    std::string speak() { return "Woof";}
};
#endif

