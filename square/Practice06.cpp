/*

Practice 06
A A A A
B B B B
C C C C
D D D D

*/
#include <iostream>

using namespace std;

int main()
{

    char ch = 'A';

    int num = 4;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            cout << char(ch + i - 1) << " ";
        }

        cout << endl;
    }
}