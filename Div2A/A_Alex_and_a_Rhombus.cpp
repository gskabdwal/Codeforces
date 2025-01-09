#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n, x, y;
    string s;
    cin>>n;
    
    vector<int> v(n);

    long long mul = 0, ans = 1;

    for(int i=0; i<n; i++){
        mul = 4*i;
        ans += mul;
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