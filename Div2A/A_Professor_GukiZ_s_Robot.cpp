#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n, a, b, c, d, ans = 0;
    string str;
    
    cin>>a>>b>>c>>d;
    
    cout<<max(abs(a-c),abs(b-d));
    
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