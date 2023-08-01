#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

void noSquareMultiples(ll n, ll m) {
    vector<bool> check(m - n + 1, false);

    for (ll i = 2; i * i <= m; i++) {
        ll start = (n / (i * i)) * (i * i);
        if (start < n) {
            start += i * i;
        }
        for (ll j = start; j <= m; j += i * i) {
            check[j - n] = true;
        }
    }

    int count = 0;
    for (ll i = n; i <= m; i++) {
        if (!check[i - n]) {
            count++;
        }
    }

    cout << count;
}

int main() {
    ll n, m;
    cin >> n >> m;
    noSquareMultiples(n, m);

    return 0;
}
