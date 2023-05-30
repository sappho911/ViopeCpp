#include <iostream>
using namespace std;

int main()
{
    char drink;
    int sugar;

    cout << "Do you drink coffee or tea? (k/t) ";
    cin >> drink;
    cout << "With how many cubes of sugar? ";
    cin >> sugar;

    if (sugar < 0)
    {
        cout << "An error occurred in the program!" << endl;
    }
    else if (drink == 'c' && sugar <= 2)
    {
        cout << "Coffee certainly is invigorating!" << endl;
    }
    else if (drink == 'c' && sugar >= 3)
    {
        cout << "Well, coffee can taste pretty intense..." << endl;
    }
    else if (drink == 't' && sugar <= 2)
    {
        cout << "Tea can have a soothing effect!" << endl;
    }
    else if (drink == 't' && sugar >= 3)
    {
        cout << "Guess you enjoy your tea overly sweet?" << endl;
    }
}