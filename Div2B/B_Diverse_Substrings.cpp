#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, ans = 0, cnt = 0;
    string str;
    cin >> n >> str;

    for(int i=0; i<n; i++){
        vector<int> hs(10);
        cnt = 0;
        int dist = 0;
        for(int j = i; j<n&&j<i+100; j++){
            if(hs[str[j]-'0']==0) dist++;
            cnt = max(cnt,++hs[str[j]-'0']);

            if(cnt<=dist){
                ans++;
            }
            
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
