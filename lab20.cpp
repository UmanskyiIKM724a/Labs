#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main() {
    srand(time(NULL));

    vector<int> vec(25);

    cout << "\nVector: " << endl;
    for (int i = 0; i < 25; i++) {
        vec[i] = rand() % 101 - 50;
        cout << vec[i] << "\t";
        if (i == 12) {
            cout << "\n";
        }
    }
    cout << "\n-----------------------------------------------------------------------" << endl;

    int counter = 0;
    for (int i = 0; i < 25; i++) {
        if (vec[i] > 0 && vec[i] % 3 == 0) {
            counter++;
        }
    }
    cout << "Number of positive numbers divisible by 3: " << counter << endl;

    int maxN = 0;
    int indexN = 0;
    bool found = false;
    for (int i = 0; i < 25; i++) {
        if (vec[i] < 0) {
            if (found == false || vec[i] > maxN) {
            maxN = vec[i];
            indexN = i;
            found = true;
            }
        }
    }
    cout << "Maximal negative number: " << maxN << endl;
    cout << "Index of maximal negative number: " << indexN << endl;
}
// Створити одновимірний вектор з 25 цілих чисел. Визначити кількість додатних чисел, які діляться на 3 без залишку. 
// Визначити максимальний з від’ємних елементів 
// і його порядковий номер.