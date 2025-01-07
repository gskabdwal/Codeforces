#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;

    string res,s;
    
    for(int i=0; i<k; i++){
        s += ('a'+i);
    }

    for(int i=0; i<n; i++){
        res += s;
    }

    cout<<res<<"\n";

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