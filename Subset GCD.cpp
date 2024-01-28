#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ld long double
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
const ll mod=1e9+7;
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll mul = n / k;
    for (int i = 1; i <= k; ++i)
    {
        cout << mul * i << " ";
    }
    cout << endl;
}

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
