#include <iostream>
#include <fstream>
using namespace std;

void print_matrix(int matrix[5][5]);
int calculate_sum(int matrix[5][5]);

int main(void)
{
    int matrix[5][5];
    int sum;
    ifstream file("matrix.txt");
    if (!file)
    {
        cout << "File cannot be opened!";
    }
    else
    {
        for (int y = 0; y < 5; y++)
        {
            for (int x = 0; x < 5; x++)
            {
                file >> matrix[y][x];
            }
        }
        file.close();
        cout << "Matrix:" << endl;
        print_matrix(matrix);
        sum = count_sum(matrix);
        cout << "Sum of elements: " << sum << endl;
    }
} // main close.

void print_matrix(int matrix[5][5])
{
    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            cout << matrix[y][x] << " ";
        } // end nested loop for x;
        cout << endl;
    } // end for nested loop y
} // end of print_matrix method

int count_sum(int matrix[5][5])
{
    int sum_matrix = 0;
    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            sum_matrix += matrix[y][x];
        } // end nested loop x
    }     // end nested loop y
    return sum_matrix;
} // end of count_sum method