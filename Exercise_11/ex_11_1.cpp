#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file;
    char file_name[] = "numbers.txt";
    int num, sum = 0;
    file.open(file_name, ios_base::in);
    if (!file.is_open())
    {
        cout << "Failed to open file!";
        exit - 1;
    }
    while (file >> num)
    {
        sum += num;
    }
    file.close();

    file.open(file_name, ios_base::out | ios_base::app);
    file << endl
         << sum << endl;
    cout << "Sum is " << sum << endl;
    file.close();
}