#include<iostream>
using namespace std;

class Shape {
protected:
    string color;
    float area;

public:
    virtual void input() {
        cout << "Enter color: ";
        cin >> color;
    }

    virtual void calculateArea() {
    }

    // virtual function
    virtual void displayDetails() {
        cout << "Shape details\n";
    }
};

// Circle class
class Circle : public Shape {
private:
    float radius;

public:
    void input() {
        cout << "\nEnter color of circle: ";
        cin >> color;
        cout << "Enter radius: ";
        cin >> radius;
    }

    void calculateArea() {
        area = 3.14 * radius * radius;
    }

    void displayDetails() {
        cout << "\n--- Circle ---\n";
        cout << "Color: " << color << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area << endl;
    }
};

// Rectangle class
class Rectangle : public Shape {
private:
    float length, width;

public:
    void input() {
        cout << "\nEnter color of rectangle: ";
        cin >> color;
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    void calculateArea() {
        area = length * width;
    }

    void displayDetails() {
        cout << "\n--- Rectangle ---\n";
        cout << "Color: " << color << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << area << endl;
    }
};

int main() {
    Shape* s;
    int choice;

    cout << "Choose shape:\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if(choice == 1) {
        s = new Circle();  
    }
    else if(choice == 2) {
        s = new Rectangle();
    }
    else {
        cout << "Invalid choice!";
        return 0;
    }

    s->input();
    s->calculateArea();
    s->displayDetails();

    return 0;
}