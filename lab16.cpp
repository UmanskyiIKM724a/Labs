#include <iostream>
using namespace std;

class Train {
public:
    string destination;
    int number;
    int time;
    int seatsKup;
    int seatsPlaz;

    string getDestination() {
        return destination;
    }

    int getTime() {
        return time;
    }

    int getSeats() {
        return seatsKup + seatsPlaz;
    }

    void printInfo() {
        cout << "Train " << number << " to " << destination << ", Departure: " << time << ":00" << ", Coupe seats: " << seatsKup << ", Platzkart seats: " << seatsPlaz << ", Total: " << getSeats() << endl;
    }
};

void Out(Train t[], int size) {
    
    cout << "\nAll possible trains: " << endl;
    for (int i = 0; i < size; i++) {
        t[i].printInfo();
    }

    cout << "\n------------------------" << "\nDirection: " << t[0].getDestination() << "\n------------------------" << endl;

    cout << "\nTrains with the same destination: " << endl;
    for (int i = 0; i < size; i++) {
        bool stop = false;
        for (int j = 0; j < i; j++) {
            if (t[i].getDestination() == t[j].getDestination()) {
                stop = true;
                break;
            }
        }
        if (stop == true) continue;

        int count = 0;
        for (int j = 0; j < size; j++) {
            if (t[j].getDestination() == t[i].getDestination()) {
                count++;
            }
        }

        if (count >= 2) {
            for (int j = 0; j < size; j++) {
                if (t[j].getDestination() == t[i].getDestination()) {
                    t[j].printInfo();
                }
            }
            cout << "-----------------------" << endl;
        }
    }

    cout << "\nTrains with the same destination and time: " << endl;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (t[i].getDestination() == t[j].getDestination() && t[i].getTime() == t[j].getTime()) {
                t[i].printInfo();
                t[j].printInfo();
                cout << "-----------------------" << endl;
            }
        }
    }

    cout << "\nTrains with the same number of seats:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (t[i].getDestination() == t[j].getDestination() && t[i].getTime() == t[j].getTime() && t[i].getSeats() == t[j].getSeats()) {
                t[i].printInfo();
                t[j].printInfo();
            }
        }
    }
}

int main() {
    const int size = 4;
    Train t[size] = { {"Kyiv", 100, 15, 50, 25}, {"Lviv", 200, 15, 20, 30}, {"Kyiv", 150, 15, 25, 50}, {"Kyiv", 300, 17, 50, 25}
    };

    Out(t, size);
}

// Train: Пункт призначення, Номер поїзда, Час відправлення, Число загальних місць, купейних, плацкартних. 
// Створити масив об'єктів, вивести:
// а) список поїздів, які прямують до заданого пункту призначення;
// б) список поїздів, які прямують до заданого пункту призначення і відправляються після заданої години;
// в) список поїздів, які відправляються до заданого пункту призначення і мають спільні місця.