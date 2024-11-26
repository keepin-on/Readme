#include <iostream>
#include <cmath>
#include <string>
#include <cctype>
#include <locale>
#include<Windows.h>

using namespace std;

// Завдання 1: ABS
void taskABS() {
    int x;
    cout << "Введіть ціле число X: ";
    cin >> x;
    if (x < 0) {
        x = -x;
    }
    cout << "|X| = " << x << endl;
}

// Завдання 2: Temperature
void taskTemperature() {
    double temp;
    cout << "Введіть температуру у градусах Цельсія: ";
    cin >> temp;
    if (temp < 0) {
        cout << "Холодно. Залишайтесь вдома." << endl;
    }
    else if (temp <= 25) {
        cout << "Комфортна температура: можна виходити." << endl;
    }
    else {
        cout << "Спекотно! Уникайте довготривалого перебування на сонці." << endl;
    }
}

// Завдання 3: Замок безпеки IF
void taskLock() {
    string code = "FR-33-D0M";
    string input;
    cout << "Введіть код по одному символу: ";
    for (char c : code) {
        char userInput;
        cin >> userInput;
        if (toupper(userInput) != c) {
            cout << "Неправильний пароль, спробуйте ще раз." << endl;
            return;
        }
    }
    cout << "Двері відчинено!" << endl;
}

// Завдання 4: Day of the Week
void taskDayOfWeek() {
    int day;
    cout << "Введіть число (1-7): ";
    cin >> day;
    switch (day) {
    case 1: cout << "Понеділок" << endl; break;
    case 2: cout << "Вівторок" << endl; break;
    case 3: cout << "Середа" << endl; break;
    case 4: cout << "Четвер" << endl; break;
    case 5: cout << "П’ятниця" << endl; break;
    case 6: cout << "Субота" << endl; break;
    case 7: cout << "Неділя" << endl; break;
    default: cout << "Некоректне число!" << endl;
    }
}

// Завдання 5: Chess Figure
void taskChessFigure() {
    string start, end;
    cout << "Введіть початкову позицію пішака (наприклад, e2): ";
    cin >> start;
    cout << "Введіть кінцеву позицію (наприклад, e4): ";
    cin >> end;

    // Перевірка формату
    if (start.length() != 2 || end.length() != 2 || //перевіряє, що позиція складається з двох символів (буква і цифра)
        start[0] < 'a' || start[0] > 'h' || end[0] < 'a' || end[0] > 'h' || //перевіряє, чи перший символ позиції (буква) знаходиться в межах від a до h
        start[1] < '1' || start[1] > '8' || end[1] < '1' || end[1] > '8') { //перевіряє, чи другий символ позиції (цифра) знаходиться в межах від 1 до 8
        cout << "Некоректний ввід позицій!" << endl;
        return;
    }

    // Логіка для пішака
    int startRow = start[1] - '1'; // Рядок початкової позиції (0-індексація)
    int endRow = end[1] - '1'; // Рядок кінцевої позиції (0-індексація)
    int colDiff = abs(start[0] - end[0]); // Різниця по стовпцях
    int rowDiff = endRow - startRow; // Різниця по рядках

    if (colDiff == 0 && (rowDiff == 1 || (startRow == 1 && rowDiff == 2))) {   
        cout << "Хід можливий." << endl;
        //colDiff == 0: пішак ходить лише вперед по вертикалі, тому різниця по горизонталі має бути нульовою. 
        // rowDiff == 1: пішак зазвичай ходить на одну клітинку вперед.
        // (startRow == 1 && rowDiff == 2) : якщо пішак знаходиться на стартовій позиції(2 - й ряд, індекс 1 у масиві), він може зробити хід на 2 клітинки вперед.
    }
    else {
        cout << "Хід неможливий." << endl;
    }
}


int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    /**
    // Встановлення локалі для коректного відображення символів
    setlocale(LC_ALL, "Ukr");

    // Встановлення UTF-8 для Windows
#ifdef _WIN32
    system("chcp 65001 > nul");
#endif
/**/
    int choice;
    do {
        cout << "\nОберіть завдання:\n";
        cout << "1 - ABS\n";
        cout << "2 - Temperature\n";
        cout << "3 - Замок безпеки IF\n";
        cout << "4 - Day of the Week\n";
        cout << "5 - Chess Figure\n";
        cout << "0 - Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
        case 1: taskABS(); break;
        case 2: taskTemperature(); break;
        case 3: taskLock(); break;
        case 4: taskDayOfWeek(); break;
        case 5: taskChessFigure(); break;
        case 0: cout << "Програма завершена." << endl; break;
        default: cout << "Некоректний вибір! Спробуйте ще раз." << endl;
        }
    } while (choice != 0);

    return 0;
}

