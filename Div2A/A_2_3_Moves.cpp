#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n, x, mini = INT_MAX, ans = INT_MAX, cnt = 0,m;
    string str;
    cin>>n;
    m = n;

    if(n==1){
        cout<<2<<"\n";
        return;
    }


    cout<<(n+2)/3<<"\n";

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