#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n, prev, fl = 1, k;
    cin>>n>>k;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;

        if(i){
            if(prev>x) fl = 0;
        }
        prev = x;
    }

    if(fl){
        cout<<"YES"<<"\n";
    }
    else{
        if(k>1) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }

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