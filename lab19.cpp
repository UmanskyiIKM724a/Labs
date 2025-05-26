#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
int countOccurrences(const T array[], int size, const T& value) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] == value)
            ++count;
    }
    return count;
}

int main() {
    const int sizeInt = 6;
    int intArray[sizeInt] = {1, 2, 3, 2, 4, 2};
    int intTarget = 2;
    int intResult = countOccurrences(intArray, sizeInt, intTarget);
    cout << "\nInteger array: ";
    for (int i = 0; i < sizeInt; ++i) cout << intArray[i] << " ";
    cout << "\nValue to count: " << intTarget << "\nOccurrences: " << intResult << endl;

    const int sizeFloat = 5;
    float floatArray[sizeFloat] = {1.1f, 2.2f, 1.1f, 3.3f, 1.1f};
    float floatTarget = 1.1f;
    int floatResult = countOccurrences(floatArray, sizeFloat, floatTarget);
    cout << "\nFloat array: ";
    for (int i = 0; i < sizeFloat; ++i) cout << floatArray[i] << " ";
    cout << "\nValue to count: " << floatTarget << "\nOccurrences: " << floatResult << endl;

    const int sizeChar = 6;
    char charArray[sizeChar] = {'a', 'b', 'a', 'c', 'a', 'd'};
    char charTarget = 'a';
    int charResult = countOccurrences(charArray, sizeChar, charTarget);
    cout << "\nChar array: ";
    for (int i = 0; i < sizeChar; ++i) cout << charArray[i] << " ";
    cout << "\nValue to count: " << charTarget << "\nOccurrences: " << charResult << endl;
}

// Написати шаблонну функцію, яка приймає масив і значення елемента та повертає число входжень цього елемента в масив.