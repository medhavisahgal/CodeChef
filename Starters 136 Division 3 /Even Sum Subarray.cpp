#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define mp make_pair
#define ld long double
#define in insert
#define mt make_tuple
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define gcd __gcd
const int mod=1e9+7;
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<vector<int>> v;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            vector<int> sub;
            for (int k = i; k <= j; k++) {
                sub.pb(a[k]);
            }
            v.pb(sub);
        }
    }

    int max1 = 0;
    for (auto &sub : v) {
        int sum = accumulate(sub.begin(), sub.end(), 0ll);
        if (sum % 2 == 0) {
            max1 = max((int)sub.size(), max1);
        }
    }

    cout << max1 << endl;
}

signed main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
