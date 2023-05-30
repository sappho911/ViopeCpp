#include <iostream>
using namespace std;

int main(void)
{
    int number, sum = 0, amount = 0;
    double avg;

    cout << "Program calculates the test grade average." << endl;
    cout << "Finish inputting with a negative number." << endl;

    do
    {
        cout << "Input grade (4-10) ";
        cin >> number;

        if (number >= 4 && number <= 10)
        {
            amount++;
            sum = sum + number;
        }

    } while (number >= 0);

    avg = (double)sum / amount;

    cout << "You inputted " << amount << " grades." << endl;
    cout << "Grade average: " << avg << endl;
}