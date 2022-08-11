#include <bits/stdc++.h>
using namespace std;

pair<int, int> add(pair<int, int> a, pair<int, int> b) {
    return {max(a.first, b.first), min(a.second, b.second)};
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<pair<int, int>> a(n), pre(n), suf(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i].first >> a[i].second;
        }
        partial_sum(a.begin(), a.end(), pre.begin(), add);
        partial_sum(a.rbegin(), a.rend(), suf.rbegin(), add);
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            pair<int, int> xd = {1, n};
            if (i > 0) {
                xd = add(xd, pre[i - 1]);
            }
            if (i + 1 < n) {
                xd = add(xd, suf[i + 1]);
            }
            if (i + 1 >= xd.first && i + 1 <= xd.second
            && (i + 1 < a[i].first || i + 1 > a[i].second)) {
                ans.push_back(i + 1);
            }
        }
        cout << ans.size() << '\n';
        for (int v : ans) {
            cout << v << '\n';
        }
    }
}