#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, mini = INT_MAX, maxi = 0;
    cin>>n;
    
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        mini = min(mini, x);
        maxi = max(maxi,x);
    }

    cout<<maxi-mini<<"\n";

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