#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int bob[n];
        bob[0]=abs(a[1]-a[0]);
        bob[n-1]=abs(a[n-1]-a[n-2]);
        for(int i=1;i<=n-2;i++){
            int diff1=abs(a[i+1]-a[i]);
            int diff2=abs(a[i]-a[i-1]);
            bob[i]=max(diff1,diff2);
        }
        cout << *min_element(bob,bob+n)<<endl;
    }
    return 0;
}
