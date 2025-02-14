#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m, ans = 0, cnt = 0, mini = INT_MAX;
    string str;
    cin >> n>>m;

    vector<long long> hs(n+1,n);

    for (int i=0; i<m; i++){
        long long l, r;
        cin >> l >> r;
        if(l>r) swap(l,r);
        hs[l] = min(hs[l],r-1);
    }

    for(int i=n-1; i>=0; i--) hs[i] = min(hs[i],hs[i+1]);

    for(int i=1; i<=n; i++){
        ans += hs[i]-i+1;
    }

    cout<<ans<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;

    while (t--) solve();

    return 0;
}
