#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int firstLeg, secondLeg;
    double root;

    cout << "Input first triangle leg:";
    cin >> firstLeg;
    cout << "Input second triangle leg:";
    cin >> secondLeg;

    root = sqrt(firstLeg * firstLeg + secondLeg * secondLeg);

    cout << "Hypotenuse length: " << root << endl;
}