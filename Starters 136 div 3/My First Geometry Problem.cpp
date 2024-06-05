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

void solve()
{
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<4;i++){
        if(s[i]=='1')cnt++;
    }
    if(cnt==1){
        cout<<11<<endl;
    }
    else if(cnt==2){
        if((s[0]=='1'&&s[1]=='1')||s[2]=='1'&&s[3]=='1'){
            cout<<21<<endl;
        }
        else{
            cout<<121<<endl;
        }
    }
    else if(cnt==3){
        cout<<231<<endl;
    }
    else{
        cout<<441<<endl;
    }


}
signed main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}


