#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define mp make_pair
#define ld long double
#define in insert
#define mt make_tuple
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define endl "\n"
#define gcd __gcd
#define all(x) (x).begin(), (x).end()
#define sortv(v) sort(all(v));
#define suma(arr) accumulate(all(arr), 0LL)
#define rev(v) reverse(all(v));
#define mxe(v) *max_element(v.begin(), v.end())
#define mne(v) *min_element(v.begin(), v.end())
const int Mod = 1e9 + 7;
using namespace std;
//.........For Taking Mod............//
int power(int a, int b, int mod = Mod)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
int mod_add(int a, int b, int m = Mod)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
int mod_mul(int a, int b, int m = Mod)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
int mod_sub(int a, int b, int m = Mod)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    s = "L" + s + "L";
    n += 2;
    bool ok = true;
    int at = 0;
    while (at < n - 1)
    {
        if (s[at] == 'L')
        {
            bool found = false;
            for (int i = at + 1; i < n && i <= at + m; i++)
            {
                if (s[i] == 'L')
                {
                    at = i;
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                at += m;
                if (s[at] == 'C')
                {
                    ok = false;
                    break;
                }
            }
        }
        else
        {
            at += 1;
            if (s[at] == 'C')
            {
                ok = false;
                break;
            }
            k -= 1;
        }
    }
    cout << (ok && k >= 0 ? "YES" : "NO") << '\n';
}
signed main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
