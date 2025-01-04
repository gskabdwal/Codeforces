#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,b,c;
    cin>>n>>b>>c;

    if(n-2>=b+c || n==c&&c==b) cout<<"Yes";
    else cout<<"No";

    cout<<"\n";
    
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