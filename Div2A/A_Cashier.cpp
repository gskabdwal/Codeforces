#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n, L, a, x, y, ans = 0;
    string str;
    cin>>n>>L>>a;
    int prev = 0;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        ans += (x-prev)/a;
        prev = x+y;
    }

    ans += (L-prev)/a;

    cout<<ans<<"\n";
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