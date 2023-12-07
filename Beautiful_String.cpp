#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
const ll MOD=1e9+7;
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>m;
    ll ans=1;
    for(ll i=0;i<n;i++){
        m[s[i]]++;
    }
    for(auto &e:m){
        ans=(ans*(e.second+1))%MOD;
    }
    cout<<(ans-1+MOD)%MOD<<endl;
}
int main()
{
    ios;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}


