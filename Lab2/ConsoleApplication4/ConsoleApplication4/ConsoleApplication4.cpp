#include <iostream>
#include <iomanip> 
#include <windows.h> 
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

   
    int width = 20; 

    cout << setw(width) << "Прізвище:" << " Мироненко\n";
    cout << setw(width) << "Ім'я:" << " Владислав\n";
    cout << setw(width) << "По батькові:" << " Костянтинович\n";
    cout << setw(width) << "Стать:" << " чоловіча\n";
    cout << setw(width) << "Дата народження:" << " 2006-09-06\n";
    cout << setw(width) << "Адреса:" << " One Microsoft Way, 1, NY, USA\n";
    cout << setw(width) << "Номер телефону:" << " +380 12 3456789\n";
    cout << setw(width) << "Місце навчання:" << " ФІМ, ДНУ ім. Олеся Гончара\n";
    cout << setw(width) << "Група:" << " ПС-24-1\n";
    cout << setw(width) << "Хоббі:" << " програмування\n";

    return 0;
}
