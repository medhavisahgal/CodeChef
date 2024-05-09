#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ld long double
#define in insert
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define gcd __gcd
const ll mod=1e9+7;
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    ll cnt=0;
    for(int i=0; i<n; i++)
    {
        ll p=1;
        if(a[i]==1)
        {
            cnt+=n;
        }
        else
        {
            for(int j=0; j<n; j++)
            {
                p*=a[i];
                if(p>1e9)
                {
                    break;
                }
                else if(p<=a[j])
                {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

