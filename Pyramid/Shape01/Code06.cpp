#include <iostream>

/*

A
A B
A B C
A B C D
A B C D E


*/

using namespace std;
int main()
{
    char ch = 'A';

    for (int i = 1; i <= 5; i++)

    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(ch + j - 1) << " ";
        }

        cout << "\n";
    }

    return 0;
}