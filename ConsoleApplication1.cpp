#include <iostream>
#include <string>
using namespace std;


void taskProd() {
    int num;
    long long prod = 1;
    cout << "Task: PROD\nEnter integers (0 to end):" << endl;
    while (true) {
        cin >> num;
        if (num == 0)
            break;
        prod *= num;
    }
    cout << "PROD = " << prod << endl;
}

int main() {
    taskProd();
    return 0;
}
