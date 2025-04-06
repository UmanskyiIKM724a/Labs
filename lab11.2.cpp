#include <iostream>
using namespace std;

int main() {

    double a;
    double b;
    double c;

    cout << "Enter the value of A" << endl;
    cin >> a;

    cout << "Enter the value of B" << endl;
    cin >> b;

    cout << "Enter the value of C" << endl;
    cin >> c;

    double* pA = new double;
    double* pB = new double;
    double* pC = new double;

    *pA = a;
    *pB = b;
    *pC = c;

    *pA /= 2;

    cout << "New value of A: " << *pA << endl;
    cout << "Value of B: " << *pB << endl;
    cout << "Value of C: " << *pC << endl;

    delete pA;
    delete pB;
    delete pC;
}


// Описати 3 покажчика на дійсний тип. Виділити для них динамічну пам'ять. 
// Присвоїти довільні значення у виділені осередки в операторі присвоєння. Зменшити в 2 рази першу змінну.