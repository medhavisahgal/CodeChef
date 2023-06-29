#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int last_weed_day=a[n-1];
        int last_spray_day=last_weed_day+k-1;
        if(m>=last_spray_day){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
return 0;}
