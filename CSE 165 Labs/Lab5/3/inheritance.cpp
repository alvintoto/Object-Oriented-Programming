#include <iostream>
#include <vector>

#include "Animal.h"
#include "Dog.h"
#include "display.h"

using namespace std;

int main() {
    int num;

    char type;
    string name;
    int age;

    vector<Animal*> v;

    cin >> num;

    for (int i = 0; i < num; ++i) {
        cin >> type;
        cin >> name;
        cin >> age;

        if (type == 'A') {
            Animal* animal = new Animal();
            animal->setName(name);
            animal->setAge(age);
            v.push_back(animal);
        }
        else {
            Dog* dog = new Dog(name, age);
            dog->setName(name);
            dog->setAge(age);
            v.push_back(dog);
        }
    }

    display(v);
}