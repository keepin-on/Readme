#include <iostream>
using namespace std;

int main() {
    char symbol = 'C'; 
    int size = 7;      

   
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << symbol << " ";
        }
        cout << endl;
    }

    return 0;
}

