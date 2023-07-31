#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    int c;
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    vector<int> d(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        d[i] = abs(a[i] - s);
    }
    int ans;
    int result = d[0];
    for (int i = 1; i < d.size(); i++) {
        result = gcd(result, d[i]);
    }
    ans = result;
    cout << ans;
}