#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void solve()
{
    int n;
    cin>>n;
    int a[n];
    ll sum_of_candies=0;
    bool even=false,odd=false;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum_of_candies+=a[i];
        if(!(a[i]&1))
        {
            even=true;
        }
        else
        {
            odd=true;
        }
    }
    if(even&&odd)
    {
        cout<<"No"<<endl;
    }
    else if(sum_of_candies%n==0)
    {
        if(even==true)
        {
            if((sum_of_candies/n)%2==0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else if(odd==true)
        {
            if((sum_of_candies/n)%2!=0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }

        }
    }
    else
    {
        cout<<"No"<<endl;
    }
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
