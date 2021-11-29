
#ifndef __DOG_H__
#define __DOG_H__
#include <string>

class Dog {
private:
    std::string name;
    int age;
public:
//---- WRITE YOUR NO-ARGS CONSTRUCTOR BELOW THIS LINE----
    // delegate: 0 args constructor calls 3 args constructor. example dog(type var){dog(var1,0,0)};
    // can also do default value constructor. example: dog(type var=value): field{var}{};

    //better because initialize directly to the val
    // Dog() 
    // : name{"None"}, age{0}{};

    // initialize then assign
    Dog(){
        name = "None";
        age = 0;
    }

//---- WRITE YOUR NO_ARGS CONSTRUCTOR ABOVE THIS LINE----
//---- DO NOT MODIFY THE CODE BELOW THIS LINE----


    std::string get_name() {return name; }
    void set_name(std::string n) {name = n; }
    int get_age() {return age; }
    void set_age(int a) { age = a;}
    int get_dog_years() { return age * 7; }
    std::string speak() { return "Woof";}

};


#endif 
