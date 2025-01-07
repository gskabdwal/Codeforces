#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string r = s;
    reverse(r.begin(), r.end());

    if(s<=r)
        cout<<s<<"\n";
    else{
        cout<<r+s<<"\n";
    } 
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