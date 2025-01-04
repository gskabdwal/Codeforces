#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    // cout<<"Solving "<<n<<"-----";
    int diff = 2e9, prev = -1, x, fl = 0;

    for(int i=0; i<n; i++){
        cin>>x;
        if(prev!=-1){
            if(prev>x){
                fl = 1;
            }
            else{
                diff = min(diff,x-prev+1);
            }
        }
        prev = x;
    }
    
    if(fl==0)
        cout<<(diff+1)/2<<"\n";
    else
        cout<<0<<"\n";

    return;
}


signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin>>t;

    while(t--) solve();

    return 0;
}