#include <iostream>
using namespace std;

int main() {
    int a[8];
    int ascending[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int descending[8] = { 8, 7, 6, 5, 4, 3, 2, 1 };
    int num = 0;

    for (int i = 0; i < 8; i++) cin >> a[i];

    bool isascending = true;
    for (int i = 0; i < 8; i++) {
        if (a[i] != ascending[i]) {
            isascending = false;
            break;
        }
    }

    bool isdescending = true;
    for (int i = 0; i < 8; i++) {
        if (a[i] != descending[i]) {
            isdescending = false;
            break;
        }
    }

    if (isascending) cout << "ascending" << endl;
    else if (isdescending) cout << "descending" << endl;
    else cout << "mixed" << endl;
    
    return 0;
}
