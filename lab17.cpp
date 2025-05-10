#include <iostream>
#include <string>
using namespace std;

class Transport {
protected:
    string name;
public:
    Transport(string n) : name(n) {}
    virtual ~Transport() {}
    virtual void print() {
        cout << "\nTransport: " << name << endl;
    }
};

class Car : public Transport {
    int maxSpeed;
public:
    Car(string n, int speed) : Transport(n), maxSpeed(speed) {
        cout << "\nCar has been created: " << name << endl;
    }
    ~Car() {
        cout << "Car has been destroyed: " << name << endl;
    }
    void print() {
        cout << "Car: " << name << ", max speed: " << maxSpeed << " km/h" << endl;
    }
};

class Truck : public Transport {
    int loadCapacity;
public:
    Truck(string n, int capacity) : Transport(n), loadCapacity(capacity) {
        cout << "Truck has been created: " << name << endl;
    }
    ~Truck() {
        cout << "Truck has been destroyed: " << name << endl;
    }
    void print() {
        cout << "Truck: " << name << ", load capacity: " << loadCapacity << " kilograms" << endl;
    }
};

class Steamship : public Transport {
    int crew;
public:
    Steamship(string n, int crewSize) : Transport(n), crew(crewSize) {
        cout << "Ship has been created: " << name << endl;
    }
    ~Steamship() {
        cout << "Ship has been destroyed: " << name << endl;
    }
    void print() {
        cout << "Ship: " << name << ", crew: " << crew << endl;
    }
};

class Airplane : public Transport {
    int range;
public:
    Airplane(string n, int flightRange) : Transport(n), range(flightRange) {
        cout << "Plane has been created: " << name << endl;
    }
    ~Airplane() {
        cout << "\nPlane has been destroyed: " << name << endl;
    }
    void print() {
        cout << "Plane: " << name << ", range of a flight: " << range << " km" << endl;
    }
};

int main() {
    cout << "Transport:" << endl;

    Car car("BMW X5", 250);
    Truck truck("Volvo FH", 20000);
    Steamship ship("Titanic", 900);
    Airplane plane("Boeing 747", 13000);

    cout << endl;

    car.print();
    truck.print();
    ship.print();
    plane.print();
}