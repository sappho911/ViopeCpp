#include <iostream>
using namespace std;

int main()
{
    int number;
    int factorial = 1;

    cout << "Input an integer:";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }

    cout << "The factorial of number " << number << " is " << factorial << endl;
}