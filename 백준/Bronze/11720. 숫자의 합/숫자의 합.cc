#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string num;
    cin >> num;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += num[i] - '0'; // 각 자리 숫자를 더합니다.
    }
  
    cout << sum << endl;

    return 0;
}
