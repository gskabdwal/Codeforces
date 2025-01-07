#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int x, cnt = 0;
    priority_queue<int> pq;
    priority_queue<int,vector<int>,greater<int>> sq;

    for(int i=0; i<n; i++){
        cin>>x;
        cnt += x==1?1:0;
    }

    cout<<min(n,n-cnt+(cnt+1)/2)<<"\n";

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