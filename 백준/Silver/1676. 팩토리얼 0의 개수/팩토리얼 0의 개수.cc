#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 5; i <= n; i *= 5) {
        cnt += n / i;
    }

    cout << cnt << "\n";

    return 0;
}
