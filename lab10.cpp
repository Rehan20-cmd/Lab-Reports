#include <iostream>
using namespace std;

// Base Class
class Shape {
public:
    // virtual keyword enables Late Binding
    virtual void draw() {
        cout << "Drawing a generic shape" << endl;
    }
};

// Derived Class 1
class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a Circle" << endl;
    }
};

// Derived Class 2
class Square : public Shape {
public:
    void draw() {
        cout << "Drawing a Square" << endl;
    }
};

// Derived Class 3
class Triangle : public Shape {
public:
    void draw() {
        cout << "Drawing a Triangle" << endl;
    }
};

int main() {
    Shape* s; // Base class pointer

    // Pointer points to a Circle
    Circle c;
    s = &c;
    s->draw(); // Late Binding: Calls Circle's draw()

    // Pointer points to a Square
    Square sq;
    s = &sq;
    s->draw(); // Late Binding: Calls Square's draw()

    // Pointer points to a Triangle
    Triangle t;
    s = &t;
    s->draw(); // Late Binding: Calls Triangle's draw()

    return 0;
}