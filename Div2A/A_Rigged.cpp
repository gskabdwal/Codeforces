#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, s, e, x, y, fl = 1;
    cin>>n;
    cin>>s>>e;
    for(int i=1; i<n; i++){
        cin>>x>>y;
        if(x>=s && y>=e){
            fl = 0;
        }
    }

    if(fl) cout<<s<<"\n";
    else cout<<-1<<"\n";

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