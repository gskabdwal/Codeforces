#include <bits/stdc++.h>
using namespace std;


void solve(){
    int a,b,c;
    string s;
    cin>>a>>b>>c;
    


    int x = min(2*b,c);
    if(x%2) x--;
    int y = min(b-x/2,2*a);
    if(y%2) y--;

    int ans = 1.5*x + 1.5*y;

    cout<<ans<<"\n";
    
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