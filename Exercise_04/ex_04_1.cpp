#include <iostream>
using namespace std;

int main()
{
    int first, second, remainder;

    cout << "Input first integer:";
    cin >> first;
    cout << "Input second integer:";
    cin >> second;

    remainder = first % second;

    cout << first << "+" << second << " = " << first + second << endl;
    cout << first << "-" << second << " = " << first - second << endl;
    cout << first << "*" << second << " = " << first * second << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}