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
    long long n;
    while(true){
        cin >> n;
        if (n == 0) break;
        int count = 0;
        for (int i = n + 1; i <= 2 * n; i++) {
            if (isprime(i)) count++;
        }

        cout << count << "\n";
    }
    return 0;

}