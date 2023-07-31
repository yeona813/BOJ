#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;
vector<ll> p;
bool check[1000005];

void eratosthenes(ll n) {
    for (ll i = 2; i <= n; i++) {
        if (!check[i]) {
            p.push_back(i);
            for (ll j = i * i; j <= n; j += i) check[j] = true;
        }
    }
}

int gold(int num) {
    int length = num / 2;
    int count = 0;
    for (int i = 2; i <= length; i++) {
        int a = i;
        int b = num - a;
        if (!check[a] && !check[b]) {
            count++;
        }
    }
    return count;
}
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    eratosthenes(1000000);
    ll t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int num;
        cin >> num;
       cout << gold(num) << "\n";
    }
    return 0;
}