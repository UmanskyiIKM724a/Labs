#include <iostream>
using namespace std;
#include <ctime>  

int main() {
    
srand(time(0));

const int size = 25;
int array[size];

cout << "Elements in Array:" << endl;
cout << "-------------------------------------------------------------------------------------------------------------" << endl;
for (int i = 0; i < size; i++) {
    int NumberPart = rand();
    int sing = rand();
    if (sing % 2 == 0) {
    NumberPart *= -1;
    }
    array[i] = NumberPart;
    cout << array[i] << endl;
}
cout << "-------------------------------------------------------------------------------------------------------------" << endl;

int counter = 0;
for (int i = 0; i < size; i++ ) {
   if (array[i] > 0 || array[i] % 3 == 0) {
    counter += 1;
   }
}
cout << "Number of Values: " << counter << endl;
}


// Створити одновимірний масив з 25 цілих чисел. Визначити кількість додатних чисел, які діляться на 3 без залишку.