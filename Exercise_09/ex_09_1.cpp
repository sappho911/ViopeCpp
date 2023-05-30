#include <iostream>
#include <string>
using namespace std;

class PrintClass
{
public:
    void print(char charstring[50])
    {
        cout << charstring << endl;
    }
};

int main()

{

    char charstring[50];

    cout << "Input a character string for printing:";

    cin.get(charstring, 50);

    PrintClass printer;

    printer.print(charstring);
}