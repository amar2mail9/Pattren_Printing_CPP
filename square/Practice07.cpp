/*\
Practice 07
A B C D
E F G H
I G K L
M N O P
*/

#include <iostream>
using namespace std;
int main()
{
    int num = 4;
    char ch = 'A';

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << char(ch++) << " ";
                }

        cout << endl;
    }
}