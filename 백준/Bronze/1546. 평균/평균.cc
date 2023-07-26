#include <iostream>
using namespace std;

int main(void)
{
    double num;
    double sum = 0;
    double a[1000];

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }

    double max = a[0];
    for (int i = 0; i < num; i++)
    {
        if (a[i] > max) max = a[i];
    }
 
    for (int i = 0; i < num; i++)
    {
        a[i] = (a[i] / max * 100);
        sum += a[i];
    }
  
    cout << fixed;
    cout.precision(6);
    cout << sum / num;

    return 0;

}