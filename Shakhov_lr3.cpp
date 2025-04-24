#include <iostream>
using namespace std;

// Объявления функций
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

// Определения функций (пока пустые)
void printCurrentDay() {
    // Реализация будет добавлена позже
}

void printCurrentMonth() {
    // Реализация будет добавлена позже
}

void inputCurrentYear() {
    // Реализация будет добавлена позже
}

void inputDaysToAdd() {
    // Реализация будет добавлена позже
}

void calculateNewDate() {
    // Реализация будет добавлена позже
}

void calculateDaysToNextYear() {
    // Реализация будет добавлена позже
}