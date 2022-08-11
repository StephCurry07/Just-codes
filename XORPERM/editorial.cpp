#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n == 3) {
            cout << "-1\n";
        } else {
            cout << "1 3 4 2 ";
            for (int i = 5; i <= n; i++) {
                cout << i << " ";
            }
            cout << '\n';
        }
    }
}