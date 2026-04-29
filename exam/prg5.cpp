#include<iostream>
using namespace std;

class Vehicle {
public:
    virtual void startEngine() = 0;
    virtual void drive() = 0;
};

class Car : public Vehicle {
public:
    void startEngine() {
        cout << "Car engine started\n";
    }

    void drive() {
        cout << "Car is driving\n";
    }
};

class Bike : public Vehicle {
public:
    void startEngine() {
        cout << "Bike engine started\n";
    }

    void drive() {
        cout << "Bike is driving\n";
    }
};

int main() {
    Vehicle* v[2];

    Car c1;
    Bike b1;

    v[0] = &c1;
    v[1] = &b1;

    for(int i = 0; i < 2; i++) {
        v[i]->startEngine();
        v[i]->drive();
    }

    return 0;
}