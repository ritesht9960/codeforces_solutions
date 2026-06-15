#include <bits/stdc++.h>
using namespace std;
#define int long long 

void solve() {
	int n, k; cin >> n >> k;
	vector<int> a(n), b(n);
	for (auto &x : a) cin >> x;
	for (auto &x : b) cin >> x;
	
	vector<bool> vis(n);
	vector<int> pos(k);
	map<int, int> cnt;
	for (int i = 0; i < k; i++) {
		pos[i] = a[i];
		for (int j = i + k; j < n; j += k) {
			if (pos[i] != a[j]) pos[i] = -1;
		}
		if (pos[i] != -1) cnt[pos[i]]++;
		
		if (pos[i] == -1) {
			for (int j = i; j < n; j += k) {
				if (b[j] != -1 && b[j] != a[j]) {
					cout << "NO" << "\n";
					return;
				}
			}
		}
	}
	
	map<int, int> cnt2;
	vector<int> ans(k);
	for (int i = 0; i < k; i++) {
	if (pos[i] != -1) {
		set<int> d;
		for (int j = i; j < n; j += k)
			d.insert(b[j]);
		d.erase(-1);
		
		if (d.size() >= 2) {
			for (int j = i; j < n; j += k)
				if (b[j] != -1 && b[j] != a[j]) {
					cout << "NO" << "\n";
					return;
				}
		}
		if (d.size() == 1)
			cnt2[*d.begin()]++;
	}
	}
	
	for (auto [k, x] : cnt2) {
		if (x > cnt[k]) {
			cout << "NO" << "\n";
			return;
		}
	}
	
	cout << "YES" << "\n";
	
}

signed main() {
	int T;
	cin >> T;
	while (T--)
		solve();
}+