
#include <iostream>
#include <cmath>

class Cylinder
{
private:
    float radius;
    float height;

public:
    void setradius(float r)
    { // a
        radius = r;
    }

    void setheight(float h)
    { // b
        height = h;
    }

    float volume()
    { // c
        return M_PI * pow(radius, 2) * height;
    }
};

int main()
{
    Cylinder cyl;
    cyl.setradius(3.0); // Setting radius
    cyl.setheight(5.0); // Setting height
    std::cout << "Volume of the cylinder: " << cyl.volume() << std::endl;
    return 0;
}
