#include <iostream>
#include <cmath>
using namespace std;

class Vector {
private:
    double x, y;

public:
    Vector() : x(0), y(0) {}
    Vector(double xVal, double yVal) : x(xVal), y(yVal) {}

    void show() const {
        cout << "x = " << x << ", y = " << y << endl;
    }

    double length() const {
        return sqrt(x * x + y * y);
    }

    Vector operator-(const Vector& other) const {
        return Vector(x - other.x, y - other.y);
    }

    bool operator<(const Vector& other) const {
        return this->length() < other.length();
    }

    bool operator>(const Vector& other) const {
        return this->length() > other.length();
    }
};

int main() {
    Vector a(3, 4);
    Vector b(1, 2);

    cout << "Vector a: ";
    a.show();

    cout << "Vector b: ";
    b.show();

    Vector c = a - b;
    cout << "Difference a - b: ";
    c.show();

    if (a > b)
        cout << "a LONGER than b\n";
    else if (a < b)
        cout << "a SHORTER than b\n";
    else
        cout << "a і b are EQUAL\n";

}