#include <iostream>
using namespace std;

int main() {

    int n1;
    cout << "Enter the size of array P: " << endl;
    cin >> n1;

    int n2;
    cout << "Enter the size of array Q: " << endl;
    cin >> n2;

    int* p = new int[n1];
    int* q = new int[n2];

    cout << "Enter " << n1 << " elements for array P: " << endl;
    for (int i = 0; i < n1; i++) {
        cout << "P[" << i << "] = ";
        cin >> p[i];
    }

    cout << "Enter " << n2 << " elements for array Q: " << endl;
    for (int i = 0; i < n2; i++) {
        cout << "Q[" << i << "] = ";
        cin >> q[i];
    }

    int counterP = 0;
    for (int i = 0; i < n1; i++) {
        if (p[i] > 0) {
            counterP++;
        }
    }

    int counterQ = 0;
    for (int i = 0; i < n2; i++) {
        if (q[i] > 0) {
            counterQ++;
        }
    }

    if (counterP > counterQ) {
        cout << "Array P has more positive values";
    }

    else {
        cout << "Array Q has more positive values";
    }

    delete[] p;
    delete[] q;
}

// Створити динамічні масиви, використовуючи покажчики. 
// В якому з двох даних масивів р[n] або q[n] більше додатних елементів?