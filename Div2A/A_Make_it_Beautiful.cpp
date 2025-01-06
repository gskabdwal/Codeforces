#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int same = 1, l =0, r = n-1;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
        if(i&&v[i]!=v[i-1]) same = 0;
    }

    if(same){
        cout<<"NO"<<"\n";    
        return;
    } 
    else cout<<"YES"<<"\n";

    sort(v.begin(), v.end());
    
    cout<<v[0]<<" "<<v[r]<<" ";
    for(int i=1; i<n-1; i++){
        cout<<v[i]<<" ";
    }
    
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