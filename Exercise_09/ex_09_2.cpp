#include <iostream>

#include <string>

using namespace std;

class AskAndPrint
{
public:
    void DoYourThing(char charstring[]);
};

void AskAndPrint::DoYourThing(char charstring[])
{
    string input;
    cout << charstring;
    getline(cin, input);
    cout << input << endl;
}

int main(void)

{

    char charstring[] = "Write the text for printing:";

    AskAndPrint thing;

    thing.DoYourThing(charstring);
}