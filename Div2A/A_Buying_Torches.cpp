#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n, a = 0 , b = 0, c = 0, d = 0 , y = 0, x= 0, k =0, fl = 1, ans = 0;
    string str;
    
    cin>>x>>y>>k;

    ans = (k*y + k  - 1 + x - 2)/(x-1);

    cout<<ans+k<<"\n";
    
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