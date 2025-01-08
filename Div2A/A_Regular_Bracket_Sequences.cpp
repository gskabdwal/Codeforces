#include <bits/stdc++.h>
using namespace std;

void solve(int op, int cl, string &s, int &cnt ){
    
    if(cnt==0) return;

    if(op==cl && op ==0){
        cout<<s<<"\n";
        cnt--;
        return;
    }


    if(op){
        s += '(';
        solve(op-1, cl, s, cnt);
        s.pop_back();
    }
    if(cl>op){
        s += ')';
        solve(op, cl-1, s, cnt);
        s.pop_back();
    }
}


void solve(){
    int n;
    cin>>n;
    string s;
    int cnt = n;
    solve(n,n,s, cnt);
    
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