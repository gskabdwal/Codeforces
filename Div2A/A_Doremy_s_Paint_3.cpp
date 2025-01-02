#include <bits/stdc++.h>
using namespace std;


void solve(){
    
    int n;

    cin>>n;
    map<int,int> mpp;
    int maxi = 0;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        mpp[x]++;
        maxi = max(maxi, mpp[x]);
    }

    if(mpp.size()<=2) {
        if(abs(mpp.begin()->second-mpp.rbegin()->second)<=1)cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
    }
    else cout<<"No"<<"\n";    

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