#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b && b < c)
    {
        cout << a << " " << b << " " << c;
    }
    else if (a < c && c < b)
    {
        cout << a << " " << c << " " << b;
    }
    else if (b < c && c < a)
    {
        cout << b << " " << c << " " << a;
    }
    else if (b < a && a < c)
    {
        cout << b << " " << a << " " << c;
    }
    else if (c < b && b < a)
    {
        cout << c << " " << b << " " << a;
    }
    else // (c < a && a < b)
    {
        cout << c << " " << a << " " << b;
    }

    return 0;
}
