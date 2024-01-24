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
    //have to choose exactly one weapon
    //weapon :first->a gun that does X damage every hit
    //second->Y1 damage till kth times after that is does y2 damage
    //output->minimum number of hits he needs to defeat the boss
    //atleast H damage
    ld h,x,y1,y2,k;
    cin>>h>>x>>y1>>y2>>k;
    ll gun=ceil(h/x);
    ld laser=k*y1;
    ll hit=0;
    if(laser>=h){
        hit=ceil(h/y1);
    }else{
        laser=ceil((h-(k*y1))/y2);
        hit=h/y1+laser;
    }
    ll ans=min(gun,hit);
    cout<<ans<<endl;
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


