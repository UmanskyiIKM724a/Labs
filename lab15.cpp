#include <iostream>
using namespace std;

bool Prime(int j) {
    
    for (int i = 2; i * i <= j; i++) {
        if (j % i == 0) {
            return false;
        }
    }
    return true;
}

int Sort(int a[], int counter) {
    int temp;
    for (int i = 0; i < counter - 1; i++) {
        for (int j = 0; j < counter - i - 1; j++) {
            if (a[j] < a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main () {

    int n;
    cout << "Enter n: ";
    cin >> n;

    int* a = new int[n];

    int counter = 0;
    for (int k = 1; k <= n; k++) { 
        if (n % k == 0 && Prime(k)) {
            a[counter] = k;
            counter++;
        }
    }

    cout << "\nCreated array: \n" << endl;

    for (int i = 0; i < counter; i++) {
        cout << "Element number " << i << ": " << a[i] << endl;
    }

    int sort = Sort(a, counter);

    cout << "\nAfter sorting: \n" << endl;

    for (int i = 0; i < counter; i++) {
        cout << "Element number " << i << ": " << a[i] << endl;
    }


    delete[] a;         
}



// Створити одновимірний масив, який складається тільки з простих дільників цілого числа n, уведеного з клавіатури. 
// Вивести створений масив на екран. 
// Відсортувати отриманий масив у порядку убування і вивести результат на екран