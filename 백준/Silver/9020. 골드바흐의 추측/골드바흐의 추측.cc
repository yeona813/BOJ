#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;
vector<ll> p;
bool check[10005];

void eratosthenes(ll n) {
    for (ll i = 2; i <= n; i++) {
        if (!check[i]) {
            p.push_back(i);
            for (ll j = i * i; j <= n; j += i) check[j] = i;
        }
    }
}

int gold(int num) {
    int length = num / 2;
    for (int i = 0; i < length; i++) {
        int a = length - i;
        int b = num - a;
        if (check[a] == 0) {
            if (check[b] == 0) {
                cout << a << ' ' << b << "\n";
                return 0;
            }
        }
    }
    return 1;
}
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    eratosthenes(10001);
    ll t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int num;
        cin >> num;
        gold(num);
    }
    return 0;
}