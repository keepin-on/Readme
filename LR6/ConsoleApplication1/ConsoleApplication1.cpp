#include <iostream>
using namespace std;

void findElementIndex() {
    const int SIZE = 20; // Розмір статичного масиву
    int array[SIZE];

    // Перший цикл: заповнення масиву
    cout << "Enter 20 numbers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> array[i];
    }

    // Запит числа для пошуку
    int target;
    cout << "Enter a number to search: ";
    cin >> target;

    // Другий цикл: пошук індексу
    int index = -1;
    for (int i = 0; i < SIZE; i++) {
        if (array[i] == target) {
            index = i;
            break; // Зупиняємося після знаходження першого входження
        }
    }

    // Результат
    if (index != -1) {
        cout << "Number found on position: " << (index + 1) << endl;
    }
    else {
        cout << "Such a number has not been found in the array." << endl;
    }
}

void normalizeArray() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    double* array = new double[size]; // Динамічний масив

    // Перший цикл: заповнення масиву та пошук максимального значення
    cout << "Enter " << size << " numbers: ";
    double max = -1e9; // Початкове значення для максимуму
    for (int i = 0; i < size; i++) {
        cin >> array[i];
        if (array[i] > max) {
            max = array[i];
        }
    }

    // Другий цикл: нормалізація масиву
    cout << "Normalized array: ";
    for (int i = 0; i < size; i++) {
        array[i] /= max;
        cout << array[i] << " ";
    }
    cout << endl;

    delete[] array; // Звільнення пам'яті
}

int main() {
    int choice;

    cout << "Choose a task:\n";
    cout << "1. Find Element Index\n";
    cout << "2. Normalize Array\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        findElementIndex();
        break;
    case 2:
        normalizeArray();
        break;
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
