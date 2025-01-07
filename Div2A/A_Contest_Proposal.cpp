#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int> a(n), b(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    int j = 0, cnt = 0;
    for(int i=0; i<n; i++){
        if(a[j]<=b[i]){
            j++;
        }
        else{
            cnt++;
        }
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
