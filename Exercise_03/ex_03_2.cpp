#include <iostream>
using namespace std;

int main()
{
    double pi = 3.142;
    double radius;

    cout << "Input circle radius:";

    cin >> radius;

    cout << "Circle area with the given radius: " << pi * (radius * radius) << endl;
}