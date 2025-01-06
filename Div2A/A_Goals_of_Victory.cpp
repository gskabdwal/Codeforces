#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    // cout<<"Solving "<<n<<"-----";
    int sum =0;
    vector<int> v(n);

    for(int i=0; i<n-1; i++){
        cin>>v[i];
        sum += v[i];
    }

    cout<<-sum<<"\n";

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