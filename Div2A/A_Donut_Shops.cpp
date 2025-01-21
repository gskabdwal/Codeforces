#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n, a = 0 , b = 0, c = 0, d = 0 , fl = 1, ans = 0;
    string str;
    
    cin>>a>>b>>c;

    if(a*b<c){
        cout<<1<<'\n';
        cout<<-1<<'\n';
    } else if(a*b==c){
        cout<<1<<' ';
        cout<<-1<<'\n';
    }else{
        if(a < c){
            cout<<1<<' ';
        }
        else{
            cout<<-1<<' ';
        }
        cout<<b<<'\n';
    }
    
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