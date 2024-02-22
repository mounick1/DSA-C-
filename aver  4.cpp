#include <iostream>

using namespace std;

int main() {
    double num1, num2, num3, num4;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    cout << "Enter the fourth number: ";
    cin >> num4;

    double total = num1 + num2 + num3 + num4;
    double average = total / 4;

    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;

    return 0;
}
