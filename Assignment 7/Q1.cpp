#include <iostream>
using namespace std;

class Polygon {
protected:
    int width, height;

public:
    void set_value(int w, int h) {
        width = w;
        height = h;
    }

    virtual void calculate_area() {
    }
};

class Rectangle : public Polygon {
public:
    void calculate_area() {
        cout <<"The area of rectangle is : "<< width * height << endl;
    }
};

class Triangle : public Polygon {
public:
    void calculate_area() {
        cout << "The area of triangle is : "<<(width * height) / 2 << endl;
    }
};

int main() {
    Polygon *p;
    Rectangle r;
    Triangle t;

    p = &r;
    p->set_value(10, 5);
    p->calculate_area();

    p = &t;
    p->set_value(10, 5);
    p->calculate_area();

    return 0;
}
