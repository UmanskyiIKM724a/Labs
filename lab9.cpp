#include <iostream>
#include <ctime>  
#include <cmath>
using namespace std;

int main() {
    srand(time(NULL));

    const int ROW = 5;
    const int COLUMN = 5;
    int array[ROW][COLUMN];

    cout << "Elements in Array:" << endl;
    cout << "-------------------------------------------------------------------------------------------------------------" << endl;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++) {
            int NumberPart = rand() % 201 - 100;
            array[i][j] = NumberPart;
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "-------------------------------------------------------------------------------------------------------------" << endl;

    int maxRow = 0;
    int maxCol = 0;
    int maxIndex;

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++) {
            if (array[i][j] > array[maxRow][maxCol]) { 
                maxRow = i;
                maxCol = j;
            }
        }
    }
    cout << "The largest element: " << array[maxRow][maxCol] << endl;
    maxIndex = maxRow + maxCol;

    int counter = 0;
    if (maxIndex % 2 == 0) {
        cout << "Index of the largest element: " << maxIndex << " - is even" << endl;
        for (int i = 0; i < ROW; i++) {
            for (int j = 0; j < COLUMN; j++) {
                if (array[i][j] > 1) {
                    bool prime = true;
                    for (int k = 2; k <= sqrt(array[i][j]); k++) { 
                        if (array[i][j] % k == 0) {
                            prime = false; 
                            break;
                        }
                    }
                    if (prime) {
                        counter++; 
                    }
                }
            }
        }

        if (counter > 0) {
            cout << "Prime: " << counter << endl;
        } else {
            cout << "No Prime elements" << endl;
        }
    }

    else {
        cout << "Index of the largest element: " << maxIndex << " - is odd" << endl;
        int multi = 1;
        bool perfect = false;

        for (int i = 0; i < ROW; i++) {
            for (int j = 0; j < COLUMN; j++) {
                int sum = 0;
                for (int h = 1; h < array[i][j]; h++) {
                    if (array[i][j] % h == 0) {
                        sum += h;
                    }
                }
                if (sum == array[i][j]) {
                    multi *= array[i][j];
                    perfect = true;
                }
            }
        }

        if (perfect) {
            cout << "Perfect: " << multi << endl;
        } else {
            cout << "No Perfect elements" << endl;
        }
    }
}

// Створити двовимірний масив, що складається з цілих чисел. 
// Якщо сума індексів максимального елемента двовимірного масиву має парне значення, то підрахувати кількість простих елементів 
// інакше – добуток досконалих елементів масиву.