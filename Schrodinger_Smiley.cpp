#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0,smiley=0,st=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]==':'&&c==0)
            {
                c=1;
            }
            else if(s[i]==')'&&c==1)
            {
                st=1;
            }
            else if(s[i]=='(')
            {
                c=0,st=0;
            }
            else if(s[i]==':'&&st==1){
                smiley++;
                st=0;
            }
        }
        cout<<smiley<<endl;

    }
    return 0;
}
