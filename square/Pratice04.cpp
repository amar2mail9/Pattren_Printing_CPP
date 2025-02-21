/*
Practice 04
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/

#include <iostream>

using namespace std;
int main()
{
    int num;
    cout << "Enter Number ";
    cin >> num;

    int initialNumber = 1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            cout << initialNumber << " ";
            initialNumber++;
        }

        cout << endl;
    }
}