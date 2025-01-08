#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;

    int cnt = 0;

    for(int i=0; i<2*n; i++){
        int x;
        cin>>x;
        if(x%2) cnt++;
    }

    if(cnt==n){
        cout<<"Yes"<<"\n";
    }
    else{
        cout<<"No"<<"\n";
    }
    
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