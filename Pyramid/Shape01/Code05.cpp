#include <iostream>
using namespace std;

/*

A
B B
C C C
D D D D
E E E E E
F F F F F F

*/
int main()
{
    char ch = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(ch + i - 1) << " ";
        }

        cout << endl;
    }

    return 0;
}