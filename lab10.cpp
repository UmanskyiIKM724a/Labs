#include <iostream>
#include <ctime>  
#include <cmath>
using namespace std;


struct Student {
    string Name;
    string Fac;
    string Group;
    int Miss_L;
};

int main() {

    const int STUDENT_NUM = 4;
    Student student[STUDENT_NUM];

    for (int i = 0; i < STUDENT_NUM; i++) {
    cout << "\nStudent #" << i + 1 << endl;
    
    cout << "Enter student's Name: ";
    cin >> student[i].Name;

    cout << "\nEnter student's Faculty: ";
    cin >> student[i].Fac;

    cout << "\nEnter student's Group: ";
    cin >> student[i].Group;

    cout << "\nEnter student's Number of Missed Lectures: ";
    cin >> student[i].Miss_L;
    }
    
    cout << "----------------------------------------------------------------------------------------------" << endl;
    cout << "Students Info" << endl;
    
    for (int i = 0; i < STUDENT_NUM; i++) {
    cout << "Name: " << student[i].Name << "\t Faculty: " << student[i].Fac << "\t Group: " << student[i].Group << "\t Number of Missed Lectures: " << student[i].Miss_L << endl;
    }

    int max = 0;
    for (int i = 0; i < STUDENT_NUM; i++) {
        if (student[i].Miss_L > student[max].Miss_L) {
            max = i;
        }
    }

    cout << "----------------------------------------------------------------------------------------------" << endl;
    cout << "Student with the most missed lectures:" << endl;
    
    cout << "Name: " << student[max].Name << "\t Faculty: " << student[max].Fac << "\t Group: " << student[max].Group << "\t Number of Missed Lectures: " << student[max].Miss_L << endl;

}

// У відомості зберігається інформація про пропуски занять студентів (прізвище, факультет, група, кількість пропусків. 
// Вивести на екран повний список студентів. Вивести на екран дані студента з найбільшою кількістю пропусків.