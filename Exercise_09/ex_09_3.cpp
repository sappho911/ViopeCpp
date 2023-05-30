#include <iostream>
using namespace std;

class Calculator
{
public:
    int Sum(int first, int second);
};

int Calculator::Sum(int first, int second)
{
    int sum = first + second;
    return sum;
}

class Printer
{
public:
    void Print();
};

void Printer::Print()
{
    int num1, num2, total;
    Calculator calculation;
    cout << "Give a first integer: ";
    cin >> num1;
    cout << "Give a second integer: ";
    cin >> num2;
    total = calculation.Sum(num1, num2);
    cout << "Sum: " << total << endl;
}

int main()
{
    Printer object;
    object.Print();
}