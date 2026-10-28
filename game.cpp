#include <iostream>

using namespace std;

int main() {
    int choice;
    int num1, num2, result;

    while (true) {
        cout << "=================================\n";
        cout << "      MOBILE CALC                \n";
        cout << "=================================\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Exit\n";
        cout << "-------------------------------\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting CALC. Goodbye!\n";
            break;
        }

        if (choice < 1 || choice > 5) {
            cout << "\nInvalid choice. Please select between 1 and 5.\n\n";
            continue;
        }

        cout << "Enter the num1 value: ";
        cin >> num1;
        cout << "Enter the num2 value: ";
        cin >> num2;

        switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "\nResult: " << num1 << " + " << num2 << " = " << result << "\n\n";
                break;
            case 2:
                result = num1 - num2;
                cout << "\nResult: " << num1 << " - " << num2 << " = " << result << "\n\n";
                break;
            case 3:
                result = num1 * num2;
                cout << "\nResult: " << num1 << " * " << num2 << " = " << result << "\n\n";
                break;
            case 4:
                if (num2 == 0) {
                    cout << "\nError: Division by zero is not allowed!\n\n";
                } else {
                    result = num1 / num2;
                    cout << "\nResult: " << num1 << " / " << num2 << " = " << result << "\n\n";
                }
                break;
        }
    }

    return 0;
}