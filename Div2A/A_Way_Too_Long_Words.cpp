#include <bits/stdc++.h>
using namespace std;


void solve(){
    string s;
    cin>>s;

    if(s.size()<=10){
        cout<<s<<'\n';
    } else{
        cout<<s[0]<<s.size()-2<<s[s.size()-1]<<'\n';
    }
}


signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--) solve();

    return 0;
}