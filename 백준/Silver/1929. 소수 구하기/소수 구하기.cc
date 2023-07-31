#include <iostream>
#include <vector>
using namespace std;

bool isprime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long n, m;
    cin >> n >> m;
    for (int i = n; i <= m; i++) {
        if (isprime(i)) cout << i << "\n";
    }
    return 0;

}