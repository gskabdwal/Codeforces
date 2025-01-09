#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n, x, y, ans = -1;
    string s;
    cin>>n>>x>>y;
    
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    for(int i=0; i<n; i++){

        int num = v[i];
        int l = i-1, r = i+1;
        while(l>=i-x && l>=0&&num<v[l]){l--;}
        while(r<=i+y && r<n &&num<v[r]){r++;}

        if((l<i-x || l<0)&& (r>i+y || r>=n) && ans ==-1){
            ans = i+1;
        }

    }

    cout<<ans<<"\n";

    
    return;
}


signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    //cin>>t;

    while(t--) solve();

    return 0;
}