#include <iostream>
using namespace std;

int main() {

    double a;
    double b;

    cout << "Enter the value of A" << endl;
    cin >> a;

    cout << "Enter the value of B" << endl;
    cin >> b;

    double* pA = &a;
    double* pB = &b;

    if (*pA > *pB) {
        *pA += 5;
        *pB -= 5;
    }

    else {
        *pB += 5;
        *pA -= 5;
    }

    cout << "The new value of A: " << *pA << endl;
    cout << "The new value of B: " << *pB << endl;
}


// Ввести значення 2-х цілих змінних а і b. Направити два покажчика на ці змінні. 
// Більшу з них за допомогою покажчика збільшити в 5 разів, а меншу зменшити на 5.