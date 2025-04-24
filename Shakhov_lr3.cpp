#include <iostream>
using namespace std;


void printCurrentDay();
void printCurrentMonth();
void inputCurrentYear();
int inputDaysToAdd();
void calculateNewDate();
void calculateDaysToNextYear();

int main() {
    int choice;

    do {
        // Вывод меню
        cout << "\nМеню:\n";
        cout << "1. Вывести текущий день\n";
        cout << "2. Вывести текущий месяц\n";
        cout << "3. Ввести текущий год\n";
        cout << "4. Ввести количество дней для прибавления\n";
        cout << "5. Вычислить новую дату после прибавления дней\n";
        cout << "6. Найти разницу в днях до 1 января следующего года\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт меню: ";
        cin >> choice;

        // Обработка выбора пользователя
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
            case 0:
                cout << "Выход из программы.\n";
                break;
            default:
                cout << "Неверный выбор! Попробуйте снова.\n";
        }
    } while (choice != 0);

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

int inputDaysToAdd() {
    int days;
    cout << "Введите количество дней для прибавления: ";
    cin >> days;
    return days;
}
    

void calculateNewDate() {
    int day, month, year, daysToAdd;
    cout << "Введите текущую дату (день месяц год): ";
    cin >> day >> month >> year;
    cout << "Введите количество дней для прибавления: ";
    cin >> daysToAdd;

    // Массив с количеством дней в каждом месяце (для обычного года)
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Проверка на високосный год
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysInMonth[1] = 29; // Февраль имеет 29 дней в високосном году
    }

    // Прибавляем дни
    day += daysToAdd;
    while (day > daysInMonth[month - 1]) {
        day -= daysInMonth[month - 1];
        month++;
        if (month > 12) {
            month = 1;
            year++;
            // Обновляем массив дней в месяце для нового года
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                daysInMonth[1] = 29;
            } else {
                daysInMonth[1] = 28;
            }
        }
    }

    // Вывод новой даты
    cout << "Новая дата: " << day << "." << month << "." << year << endl;
}

void calculateDaysToNextYear() {
    int day, month, year;
    cout << "Введите текущую дату (день месяц год): ";
    cin >> day >> month >> year;

    // Массив с количеством дней в каждом месяце (для обычного года)
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Проверка на високосный год
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        daysInMonth[1] = 29; // Февраль имеет 29 дней в високосном году
    }

    // Вычисляем оставшиеся дни в текущем году
    int daysLeft = 0;

    // Добавляем оставшиеся дни в текущем месяце
    daysLeft += daysInMonth[month - 1] - day;

    // Добавляем дни из оставшихся месяцев
    for (int i = month; i < 12; i++) {
        daysLeft += daysInMonth[i];
    }

    // Выводим результат
    cout << "Количество дней до 1 января следующего года: " << daysLeft + 1 << endl;
}