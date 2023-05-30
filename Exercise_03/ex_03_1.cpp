#include <iostream>
using namespace std;

int main()
{

    double number;
    double euros_rate = 0.727802;

    cout << "How much dollars do you want to exchange:";

    cin >> number;

    cout << "Amount in euros: " << number * euros_rate << endl;
}