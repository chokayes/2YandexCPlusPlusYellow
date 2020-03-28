//
//  15_inheritance.cpp
//  yellow_playground
//
//  Created by Artsiom Kaliaha on 2/27/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

struct Fruit {
    int health = 0;
};

struct Apple : public Fruit {
    Apple() {
        health = 10;
    }
};

struct Orange : public Fruit {
    Orange() {
        health = 20;
    }
};

class Animal {
private:
    int hp = 0;
public:
    void eat(const Fruit& fruit) {
        hp += fruit.health;
        cout << "new hp " << hp << endl;
    }
};

int main15() {
    Animal animal;
    animal.eat(Apple());
    animal.eat(Orange());
    animal.eat(Orange());
    return 0;
}
