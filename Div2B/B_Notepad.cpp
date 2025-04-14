#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x, mini = INT_MAX, maxi = INT_MIN, ans = 0, cnt = 0, m=-1;
    string str;

    cin>>n>>str;

    map<string,int> mpp;

    for(int i=0; i<n-1; i++){
        auto ss = str.substr(i,2);
        if(mpp.count(ss) && mpp[ss]<i-1) ans = 1;
        
        if(mpp.count(ss))
            mpp[ss] = min(mpp[ss],i);
        else
            mpp[ss] = i;
    }

    if(ans) cout<<"YES";
    else cout<<"NO";
    cout<<"\n";

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