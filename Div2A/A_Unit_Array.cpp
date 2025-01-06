#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    // cout<<"Solving "<<n<<"-----";
    int x, cnt =0;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]==-1) cnt++;
    }

    if(cnt%2==0){
        int x = n-2*cnt, ans = (-x+1)/2; 
        ans += (cnt-ans)%2;
        if(x>=0) cout<<0<<"\n";
        else cout<<ans<<"\n";
    }
    else{
        int x = n-2*cnt, ans = (-x+1)/2;
        ans += (cnt-ans)%2; 
        if(x>=0) cout<<1<<"\n";
        else cout<<ans<<"\n";
    }


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