#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int nCr(int n,int r)
{
    return factorial(n)/factorial(n-r)*factorial(r);
}
void solve()
{
    int n;
    cin>>n;
    ll choice=nCr(n,1)*nCr(n-1,1);
    cout<<choice<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
