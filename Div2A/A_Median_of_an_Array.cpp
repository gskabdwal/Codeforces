#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    int cnt = 0;
    int x = a[(n-1)/2];
    for(int i=(n-1)/2; i<n; i++){
        if(a[i]==x) cnt++;
        else break;
    }

    cout<<cnt<<"\n";

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
