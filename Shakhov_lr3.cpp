#include <iostream>
using namespace std;


void printCurrentDay();
void printCurrentMonth();
void inputCurrentYear();
void inputDaysToAdd();
void calculateNewDate();
void calculateDaysToNextYear();

int main() {
    cout << "Task 1: вывести текущий день" << endl;
    cout << "Task 2: вывести текущий месяц" << endl;
    cout << "Task 3: ввести текущий год" << endl;
    cout << "Task 4: ввести количество дней для прибавления" << endl;
    cout << "Task 5: вычислить новую дату после прибавления дней" << endl;
    cout << "Task 6: найти разницу в днях между текущей датой и 1 января следующего года" << endl;

    int choice;
    cout << "Выберите задачу (1-6): ";
    cin >> choice;

    switch (choice) {
        case 1:
            printCurrentDay();
            break;
        case 2:
            printCurrentMonth();
            break;
        case 3:
            inputCurrentYear();
            break;
        case 4:
            inputDaysToAdd();
            break;
        case 5:
            calculateNewDate();
            break;
        case 6:
            calculateDaysToNextYear();
            break;
        default:
            cout << "Неверный выбор!" << endl;
    }

    return 0;
}


void printCurrentDay() {
    int day;
    cout << "Введите текущий день: ";
    cin >> day;
    cout << "Текущий день: " << day << endl;
}

void printCurrentMonth() {
    int month;
    cout << "Введите текущий месяц: ";
    cin >> month;
    cout << "Текущий месяц: " << month << endl;
}

void inputCurrentYear() {
    int year;
    cout << "Введите текущий год: ";
    cin >> year;
    cout << "Текущий год: " << year << endl;
}

void inputDaysToAdd() {
    

void calculateNewDate() {
    
}

void calculateDaysToNextYear() {
    
}