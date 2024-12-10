#include <iostream>
#include <string>
using namespace std;

// Task 1: SUM
void taskSum() {
    int num, sum = 0;
    cout << "Task 1: SUM\nEnter integers (0 to end):" << endl;
    while (true) {
        cin >> num;
        if (num == 0)
            break;
        sum += num;
    }
    cout << "SUM = " << sum << endl;
}

// Task 2: CountOdd
void taskCountOdd() {
    int num, oddCount = 0;
    cout << "Task 2: CountOdd\nEnter integers (0 to end):" << endl;
    do {
        cin >> num;
        if (num % 2 != 0 && num != 0)
            oddCount++;
    } while (num != 0);
    cout << "Count of odd numbers = " << oddCount << endl;
}

// Task 3: Parrot2
void taskParrot2() {
    string input;
    cout << "Task 3: Parrot2\nEnter text (type 'Bye', 'Good Bye', or 'Farewell' to exit):" << endl;
    while (true) {
        getline(cin, input);
        if (input == "Bye" || input == "Good Bye" || input == "Farewell")
            break;
        cout << input << endl;
    }
}

// Task 4: MAX
void taskMax() {
    int n, num, maxVal;
    cout << "Task 4: MAX\nEnter the size of the sequence: ";
    cin >> n;

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (i == 0 || num > maxVal)
            maxVal = num;
    }

    cout << "MAX = " << maxVal << endl;
}

// Task 5: MENU
void taskMenu() {
    int choice;
    do {
        cout << "Task 5: MENU\nProgram MENU:\n";
        cout << "1. News of the Day\n2. Joke of the Week\n3. About Author!\n0. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Today's news: Keep coding!" << endl;
            break;
        case 2:
            cout << "Joke: Why don't programmers like nature? It has too many bugs!" << endl;
            break;
        case 3:
            cout << "Author: A passionate coder." << endl;
            break;
        case 0:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);
}

// Task 6: I can only count to N
void taskCountToN() {
    int n;
    cout << "Task 6: I can only count to N\nEnter a natural number N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i;
        if (i < n)
            cout << ", ";
    }
    cout << endl;
}

// Task 7: Fibonacci
void taskFibonacci() {
    int n;
    cout << "Task 7: Fibonacci\nEnter the position of Fibonacci number (N): ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid input!" << endl;
        return;
    }

    long long f0 = 0, f1 = 1, fn = 0;
    if (n == 0) fn = f0;
    else if (n == 1) fn = f1;
    else {
        for (int i = 2; i <= n; i++) {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
    }

    cout << "Fibonacci(" << n << ") = " << fn << endl;
}

int main() {
    int task;
    do {
        cout << "Select a task to run:\n";
        cout << "1. SUM\n2. CountOdd\n3. Parrot2\n4. MAX\n5. MENU\n6. I can only count to N\n7. Fibonacci\n0. Exit\n";
        cout << "Enter the task number: ";
        cin >> task;
        cin.ignore(); // To clear newline from the input buffer

        switch (task) {
        case 1:
            taskSum();
            break;
        case 2:
            taskCountOdd();
            break;
        case 3:
            taskParrot2();
            break;
        case 4:
            taskMax();
            break;
        case 5:
            taskMenu();
            break;
        case 6:
            taskCountToN();
            break;
        case 7:
            taskFibonacci();
            break;
        case 0:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid task number. Please try again." << endl;
        }

        cout << endl;
    } while (task != 0);

    return 0;
}
