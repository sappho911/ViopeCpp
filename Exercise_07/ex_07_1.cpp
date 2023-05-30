#include <iostream>
using namespace std;

int largest(int first, int second, int third);
int smallest(int first, int second, int third);

int main()

{

    int number1, number2, number3, largestnumber, smallestnumber;

    cout << "Input the first integer";

    cin >> number1;

    cout << "Input the second integer:";

    cin >> number2;

    cout << "Input the third integer:";

    cin >> number3;

    largestnumber = largest(number1, number2, number3);

    smallestnumber = smallest(number1, number2, number3);

    cout << "The largest number was " << largestnumber;

    cout << " and the smallest " << smallestnumber << "." << endl;
}

int largest(int number1, int number2, int number3)
{

    if (number1 > number2 && number1 > number3)
    {
        return number1;
    }
    else if (number1 < number2 && number2 > number3)
    {
        return number2;
    }
    else if (number1 < number3 && number2 < number3)
    {
        return number3;
    }

} // end of method largest.

int smallest(int number1, int number2, int number3)
{
    if (number1 < number2 && number1 < number3)
    {
        return number1;
    }
    else if (number1 > number2 && number2 < number3)
    {
        return number2;
    }
    else if (number1 > number3 && number2 > number3)
    {
        return number3;
    }

} // end of method smallest.
