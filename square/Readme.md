<!-- Pattern printing -->
<h1>Square Pattern</h1>

<h2>Practice 01</h2>
* * * * <br>
* * * *<br>
* * * *<br>
* * * *<br>

```cpp
/*
Practice 01

* * * *
* * * *
* * * *
* * * *

*/

#include <iostream>

using namespace std;

int main()
{
    int num = 4;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j <= num; j++)
        {
            cout << "*" << " ";
        }

        cout << "\n";
    }
}

```

<h2>Practice 02</h2>
1 2 3 4 <br>
1 2 3 4 <br>
1 2 3 4<br>
1 2 3 4<br>

```cpp
/*

Practice 02
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

*/

#include <iostream>
using namespace std;

int main()
{
    int number = 4;

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}
```

<h2>Practice 03</h2>
1 1 1 1<br>
2 2 2 2<br>
3 3 3 3<br>
4 4 4 4<br>

```cpp
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

```

<h2>Practice 04</h2>
1 2 3 4 <br>
5 6 7 8<br>
9 10 11 12<br>
13 14 15 16<br>

```cpp
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
```

<h2>Practice 05</h2>
A B C D<br>
A B C D<br>
A B C D<br>
A B C D<br>

```cpp
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
```

<h2>Practice 06</h2>
A A A A <br>
B B B B <br>
C C C C <br>
D D D D <br>

```cpp
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
```

<h2>Practice 07</h2>
A B C D <br>
E F G H <br>
I G K L<br>
M N O P<br>

```cpp
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
```
