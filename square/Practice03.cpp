/*
Practice 03
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/

#include <iostream>
using namespace std;

int main()
{

    // int
    int num = 4;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            cout << i << " ";
        }

        cout << endl;
    }
}