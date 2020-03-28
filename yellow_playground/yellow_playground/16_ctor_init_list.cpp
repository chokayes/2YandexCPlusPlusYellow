//
//  16_ctor_init_list.cpp
//  yellow_playground
//
//  Created by Artsiom Kaliaha on 2/27/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    //const value can be initialised with init-list
    const string name;
public:
    Animal(const string& newName) : name(newName) {
//        name = newName; //compilation error
    }
};

class Dog : public Animal {
public:
    Dog() : Animal("dog") { }
};

int main16() {
    
    return 0;
}
