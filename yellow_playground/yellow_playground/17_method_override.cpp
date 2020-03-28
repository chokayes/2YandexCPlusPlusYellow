//
//  17_method_override.cpp
//  yellow_playground
//
//  Created by Artsiom Kaliaha on 2/27/20.
//  Copyright © 2020 Artsiom Kaliaha. All rights reserved.
//

#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Animal {
public:
    //in order to force subclasses to override this method, use pure virtual methods
    //virtual void Sound() const = 0;
    virtual void Sound() const {
        cout << "Default sound" << endl;
    }
};

class Dog : public Animal {
public:
    void Sound() const override {
        cout << "dog sound" << endl;
    }
};

class Cat : public Animal {
public:
    void Sound() const override {
        cout << "cat sound" << endl;
    }
};

int main() {
    cout << "single object" << endl;
    Dog d;
    d.Sound();
    ((Animal)d).Sound();
    cout << endl;
    //always pass objects by reference in order to use virtual functions
    
    cout << "multiple objects" << endl;
    vector<shared_ptr<Animal>> v { make_shared<Dog>(), make_shared<Cat>() };
    for (auto animal : v) {
        (*animal).Sound();
    }
    
    
    return 0;
}
