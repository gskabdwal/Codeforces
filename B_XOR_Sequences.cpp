#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long a, b, n, L, r1,r2,c1,c2,d1,d2, ans = 0;
    string str;
    
    cin>>a>>b;

    n = a^b;
    n &= -n;
    cout<<n<<"\n";

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