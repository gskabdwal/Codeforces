#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n, x, mini = LLONG_MAX, cnt = 0, ans = 0;
    string str;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>x;

        if(x%2){
            mini = min(mini, x);
            cnt++;
        }
        
        ans += x;
    }

    if(cnt%2==0) cout<<ans<<"\n";
    else cout<<ans - mini<<"\n";
    
    return;
}


signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin>>t;

    while(t--) solve();

    return 0;
}