#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;

    }
    return a;
} // 최대공약수 구하는 것(유클리드 호제법 이용)

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
} // 최소공배수 구하는 것

int main(void)
{
    int a, b;
    cin >> a >> b;
    if (a > b) cout << gcd(a, b) << " " << lcm(a, b) << endl;
    else cout << gcd(b, a) << " " << lcm(b, a) << endl;
    return 0;
}