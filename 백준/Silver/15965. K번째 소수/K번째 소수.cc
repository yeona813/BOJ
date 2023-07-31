#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;
vector<ll> p;
bool check[9000005];

void eratosthenes(ll n) {
    for (ll i = 2; i <= n; i++) {
        if (!check[i]) {
            p.push_back(i);
            for (ll j = i * i; j <= n; j += i) check[j] = i;
        }
    }
}
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    eratosthenes(9000000);
    ll k;
    cin >> k;
    cout << p[k - 1];

}