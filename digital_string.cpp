#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        int n = s.size();

        vector<int> pref2(n + 1, 0);
        vector<int> suff13(n + 1, 0);

        for (int i = 0; i < n; i++) {
            pref2[i + 1] = pref2[i] + (s[i] == '2');
        }

        for (int i = n - 1; i >= 0; i--) {
            suff13[i] = suff13[i + 1] +
                         (s[i] == '1' || s[i] == '3');
        }

        int best = 0;

        for (int i = 0; i <= n; i++) {
            best = max(best, pref2[i] + suff13[i]);
        }

        cout << n - best << '\n';
    }

    return 0;
}