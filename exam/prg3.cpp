#include<iostream>
using namespace std;

class Shape {
private:
    string color;
    float area;

public:
    void setColor(string c) {
        color = c;
    }

    string getColor() {
        return color;
    }

    void setArea(float a) {
        area = a;
    }

    float getArea() {
        return area;
    }
};


class Circle : public Shape {
private:
    float radius;

public:
    void input() {
        string c;
        cout << "\nEnter color of circle: ";
        cin >> c;
        setColor(c);

        cout << "Enter radius of circle: ";
        cin >> radius;
    }

    void calculateArea() {
        float a = 3.14 * radius * radius;
        setArea(a);
    }

    void display() {
        cout << "\n--- Circle ---\n";
        cout << "Color: " << getColor() << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << getArea() << endl;
    }
};


class Rectangle : public Shape {
private:
    float length, width;

public:
    void input() {
        string c;
        cout << "\nEnter color of rectangle: ";
        cin >> c;
        setColor(c);

        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;
    }

    void calculateArea() {
        float a = length * width;
        setArea(a);
    }

    void display() {
        cout << "\n--- Rectangle ---\n";
        cout << "Color: " << getColor() << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << getArea() << endl;
    }
};

int main() {
    Circle c1;
    Rectangle r1;

   
    c1.input();
    c1.calculateArea();  
    c1.display();

    
    r1.input();
    r1.calculateArea();   
    r1.display();

    return 0;
}