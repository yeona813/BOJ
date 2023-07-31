#include <iostream>
using namespace std;
typedef long long ll;

const ll MOD = 1e9 + 7;

ll pow_mod(ll x) {
    if (x == 0) return  1;
    if (x % 2 == 1) return (pow_mod(x - 1) * 2) % MOD;
    ll a = pow_mod(x / 2);
    return (a * a) % MOD;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n , c, x;
    cin >> n;
    ll sum = 0;
    while (n--) {
        cin >> c >> x;
        sum = (sum + ((c * x) % MOD) * pow_mod(x - 1)) % MOD;
    }

    cout << sum;

    return 0;
}