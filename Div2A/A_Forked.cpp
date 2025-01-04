#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c, d, i, j;
    cin>>i>>j>>a>>b>>c>>d;
    

    vector<vector<int>> moves = {{i,j},{i,-j},{-i,j},{-i,-j},{j,i},{-j,i},{-j,-i},{j,-i}};
    set<vector<int>> hs;

    int cnt =0;

    for(auto x: moves){
        hs.insert({x[0]+a, x[1]+b});
    }

    for(auto x: moves){
        if(hs.count({x[0]+c,x[1]+d})){
            cnt++;
            hs.erase({x[0]+c,x[1]+d});
        }
    }

    cout<<cnt<<"\n";
    
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