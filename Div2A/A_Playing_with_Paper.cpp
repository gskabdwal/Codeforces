#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n, L, a, b, x, y, ans = 0;
    string str;
    cin>>x>>y;

    while(1){
        a = min(x,y), b = max(x,y);
        ans += b/a;
        b %= a;
        if(b==0) break;
        x = a, y = b;
    }

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