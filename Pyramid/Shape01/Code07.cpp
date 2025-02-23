#include <iostream>
using namespace std;

int main()
{
    char ch = 65;

    for (int i = 0; i <= 6; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch++ << " ";
            if (ch == 91)
            {
                break;
            }
        }

        cout << endl;
    }

    return 0;
}
