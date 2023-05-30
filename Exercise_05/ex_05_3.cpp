#include <iostream>
using namespace std;

int main()
{

    int first, second, op;

    cout << "Choose desired calculation:" << endl;
    cout << "1: subtraction" << endl;
    cout << "2: addition" << endl;
    cout << "3: multiplication" << endl;
    cout << "4: division" << endl;
    cout << "5: Remainder" << endl;

    cout << "Choose a calculation:";
    cin >> op;

    cout << "Input first number:";
    cin >> first;
    cout << "Input second number:";
    cin >> second;

    switch (op)
    {
    case 1:
        cout << first << "-" << second << " = " << first - second << endl;
        break;
    case 2:
        cout << first << "+" << second << " = " << first + second << endl;
        break;
    case 3:
        cout << first << "*" << second << " = " << first * second << endl;
        break;
    case 4:
        cout << first << "/" << second << " = " << first / second << endl;
        break;
    case 5:
        cout << first << "%" << second << " = " << first % second << endl;
        break;
    }
}
