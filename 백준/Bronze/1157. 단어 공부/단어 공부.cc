#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    string str;
    int ch[26] = { 0 };
    int num;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    } // 대문자를 소문자로 변환

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            num = str[i] - 'a';
            ch[num]++;
        }
    } // 해당 알파벳이 몇개 있는지 카운트

    int maxcount = -1;
    int maxindex = 0;
    int count = 1;

    for (int i = 0; i < 26; i++)
    {
        if (ch[i] > maxcount)
        {
            maxcount = ch[i];
            maxindex = i;
            count = 1;
        }
        else if (ch[i] == maxcount)
        {
            count++;
        }
    }

    char alpha;
    if (count == 1)
    {
        alpha = maxindex + 'A';
        cout << alpha << endl;

    }

    else
        cout << "?" << endl;


}