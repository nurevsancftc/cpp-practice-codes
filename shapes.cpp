#include <iostream>
#include <string>
using namespace std;

class Shape {
    protected:
        string color;

    public:
        Shape(string c) : color(c) {}
        
        virtual double getArea() const {
            return 0;
        }
        
        virtual string toString() const {
            return "Shape with color:  " + color;
        }
};

class Rectangle : public Shape {
    double length, width;

    public:
        Rectangle(string c, double l, double w) : Shape(c), length(l), width(w) {}

        double getArea() const override{
            return length * width;
        }

        string toString() const override {
            return "Rectangle [Color=" + color +
            ", Length=" + to_string(length) +
            ", Width=" + to_string(width) +
            ", Area=" + to_string(getArea()) + "]";
     
        }
};

class Triangle : public Shape {
    double base, height;

public:
    Triangle(string c, double b, double h) : Shape(c), base(b), height(h) {}

    double getArea() const override {
        return 0.5 * base * height;
    }

    string toString() const override {
        return "Triangle [Color=" + color +
               ", Base=" + to_string(base) +
               ", Height=" + to_string(height) +
               ", Area=" + to_string(getArea()) + "]";
    }
};

int main()
{
    Shape* shapes[2];
    shapes[0] = new Rectangle("Red", 10, 5);
    shapes[1] = new Triangle("Blue", 8, 4);

    cout<<shapes[0]->toString() << endl;
    cout<<shapes[1]->toString() << endl;

    return 0;
}