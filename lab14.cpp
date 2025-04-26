#include <iostream>
using namespace std;

int interpolationSearch(int a[], int size, int search) {
		
    int high = size - 1;
    int low = 0;
    
    while(search >= a[low] && search <= a[high] && low <= high) {
        
        int probe = low + (high - low) * (search - a[low]) / 
                    (a[high] - a[low]);
        
        if(a[probe] == search) {
            return probe;
        }
        else if(a[probe] < search) {
            low = probe + 1;
        }
        else {
            high = probe -1;
        }
    }
    
    return -1;
}


int main () {

    const int size = 30;
    int a[size];

    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i < size; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }

    cout << "\n" << size << " sized Fibanacci array: \n";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl << endl;


    int search;
    cout << "Enter the number, which you would like to find: ";
    cin >> search;

    int index = interpolationSearch(a, size, search);

    if(index != -1) {
        cout << "\nElement found at index: " << index << endl;
    }
    else {
        cout << "\nElement not found" << index << endl;
    }
}

// Створити одновимірний масив, який складається з тридцяти чисел Фібоначчі. 
// Створити функцію інтерполяційного пошуку, яка визначає знаходження заданого з клавіатури числа.