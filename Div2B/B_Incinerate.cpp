#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, po, ans = 0, cnt = 0;
    cin >> n>> po;

    vector<long long> h(n), p(n);

    for(int i=0; i<n; i++){
        cin>>h[i];
    }
    for(int i=0; i<n; i++){
        cin>>p[i];
    }
    typedef vector<long long> vi;
    priority_queue<vi,vector<vi>, greater<vi>> pq;
    long long mh = 0;

    for(int i=0; i<n; i++){
        pq.push({p[i],h[i]});
        mh = max(mh,h[i]);
    }
    
    int fl;

    long long dam = 0;
    
    while(pq.size()){
  

        dam += po;

        while(pq.size() && dam >= pq.top()[1] ){
            pq.pop();
        }
        
        po -= pq.top()[0];

        if(dam>=mh){
            fl = 1;
            break;
        }

        if(po <= 0){
            fl = 0;
            break;
        }
    }
    

    if(fl)
        cout << "YES" << "\n";
    else
        cout << "NO"<< "\n";

    return;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}
