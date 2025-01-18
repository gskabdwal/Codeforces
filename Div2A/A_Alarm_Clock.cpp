#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n, a = 0 , b = 0, c = 0, d = 0 , fl = 1, ans = 0;
    string str;
    
    cin>>a>>b>>c>>d;
    
    a -= b;
    if(a<=0){
        cout<<b<<'\n';
        return;
    }

    if(c-d<=0){
        cout<<-1<<'\n';
        return;
    }

    int diff = c-d;
    ans = b + c*((a+diff-1)/diff);

    cout<<ans<<'\n';
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