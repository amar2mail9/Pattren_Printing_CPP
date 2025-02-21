/*
Practice 05
A B C D
A B C D
A B C D
A B C D

*/

#include <iostream>
using namespace std;

int main()
{

    char ch = 'A';
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << char(ch + j - 1) << " ";
        }

        cout << endl;
    }
}