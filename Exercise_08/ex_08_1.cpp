#include <iostream>
using namespace std;

int main()
{
    int userInput;
    double totalWorkHours = 0, days[30];

    cout << "The program calculates the total amount of" << endl;
    cout << "work hours during a given time frame and the average work day length." << endl;

    cout << "How many days:" << endl;
    cin >> userInput;

    for (int index = 0; index < userInput; index++)
    {
        cout << "Input hours of workday " << index + 1 << ": ";
        cin >> days[index];
        totalWorkHours += days[index];
        days[index];
    } // end for loop

    cout << "Total work hours: " << totalWorkHours << endl;
    cout << "Average work day length: " << totalWorkHours / userInput << endl;
    cout << "Inputted hours: ";
    for (int index = 0; index < userInput; index++)
    {
        cout << days[index] << " ";
    }

    cout << endl;

} // end of main