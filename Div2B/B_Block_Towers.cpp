#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, ans = 0, cnt = 0;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    sort(v.begin()+1,v.end());
    
    ans = v[0];
    for(int x : v){
        if(ans<x){
            ans = (ans+x+1)/2;
        }
    }

    cout << ans << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}
