#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    cin>>c;
    while(c--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,int>m;
        for(int i=0; i<n; i++)
        {
            m[s[i]]++;
        }
        int odd=0;
        for(auto it:m)
        {
            if(it.second%2!=0)
            {
                odd++;
            }
        }
        if((n%2==0 && odd>=1)||(n%2!=0&&odd>1))
        {
            cout<<0<<endl;
        }
        else
        {
            if(n%2==0||n%2!=0&&m.size()>=2)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
    }
    return 0;
}
