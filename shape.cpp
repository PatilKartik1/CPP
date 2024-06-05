#include <iostream>
#include <string>

// Base class Shape
class Shape {
protected:
    std::string name; // Name of the shape

public:
    // Constructor to initialize the name of the shape
    Shape(const std::string& shapeName) : name(shapeName) {}

    // Virtual function to calculate the area of the shape
    virtual float area() const = 0;

    // Virtual function to display the details of the shape
    virtual void display() const {
        std::cout << "Shape: " << name << std::endl;
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    float radius;

public:
    // Constructor to initialize the circle with its radius
    Circle(float r) : Shape("Circle"), radius(r) {}

    // Overridden function to calculate the area of the circle
    float area() const override {
        return 3.14f * radius * radius;
    }

    // Overridden function to display details of the circle
    void display() const override {
        Shape::display();
        std::cout << "Radius: " << radius << std::endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    // Constructor to initialize the rectangle with its length and width
    Rectangle(float l, float w) : Shape("Rectangle"), length(l), width(w) {}

    // Overridden function to calculate the area of the rectangle
    float area() const override {
        return length * width;
    }

    // Overridden function to display details of the rectangle
    void display() const override {
        Shape::display();
        std::cout << "Length: " << length << ", Width: " << width << std::endl;
    }
};

// Derived class Trapezoid
class Trapezoid : public Shape {
private:
    float base1;
    float base2;
    float height;

public:
    // Constructor to initialize the trapezoid with its bases and height
    Trapezoid(float b1, float b2, float h) : Shape("Trapezoid"), base1(b1), base2(b2), height(h) {}

    // Overridden function to calculate the area of the trapezoid
    float area() const override {
        return ((base1 + base2) * height) / 2;
    }

    // Overridden function to display details of the trapezoid
    void display() const override {
        Shape::display();
        std::cout << "Base 1: " << base1 << ", Base 2: " << base2 << ", Height: " << height << std::endl;
    }
};

// Function to illustrate virtual function behavior
void illustrateVirtualFunction(const Shape& shape) {
    shape.display(); // This will call the appropriate display function based on the derived class type
    std::cout << "Area: " << shape.area() << std::endl;
    std::cout << std::endl;
}

int main() {
    // Creating objects of different shapes
    Circle circle(5.0f);
    Rectangle rectangle(4.0f, 6.0f);
    Trapezoid trapezoid(3.0f, 5.0f, 4.0f);

    // Illustrating virtual function behavior
    illustrateVirtualFunction(circle);
    illustrateVirtualFunction(rectangle);
    illustrateVirtualFunction(trapezoid);

    return 0;
}
