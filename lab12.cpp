#include <iostream>
using namespace std;

void third(int a[], int N) {

    int counter = 0;
    int NUM = 0;
    for (int i = 0; i < N; i++) {
        if(a[i] % 2 == 0) {
            counter++;
        }
        if (counter == 3){
            NUM = a[i];
            break;
        }
    }

    if (counter == 3) {
        cout << "Here is the third even number of the " << N << "-numbered array: " << NUM << endl;
    }

    else {
        cout << "There are less than three even numbers in the array\n" << endl;
    }
}


int main() {

    int N;

    cout << "Enter N, N must be > 1\n";
    cin >> N;

    if (N>1) {
        int* a = new int[N];
        a[0] = 0;
        a[1] = 1;
        for (int i = 2; i < N; i++) {
            a[i] = a[i - 1] + a[i - 2];
        }

        cout << "\n" << N << " sized Fibanacci array: \n";
        for (int i = 0; i < N; i++) {
            cout << a[i] << " ";
        }
        cout << endl << endl;
    
    third (a, N);

    delete[] a;
    }

    else {
        cout << "N must be greater than 1!\n";
    }
}

// Для заданого числа N>1 побудувати одномірний масив, що складається з N чисел Фібоначчі. 
// Створити функцію, що визначає значення третього парного числа.