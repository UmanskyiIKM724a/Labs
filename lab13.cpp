#include <iostream>
using namespace std;

int recFUNC (int n) {
    int rec;
    if (n == 1) {
        return 1;
    }
    
    else {
        return recFUNC(n - 1) + 2;
    }
}


int main () {
    int n;
    cout << "Enter N (1-11): \n";
    cin >> n;

    if (n >= 1 && n <= 11) {
        cout << n << "-th term of the series: " << recFUNC(n) << endl;
    }

    else {
        cout << "The sequence has only 11 terms (1 to 11)" << endl;
    }
}

// Описати рекурсивну функцію для обчислення n-го члена ряду 1, 3, 5,..., 21.