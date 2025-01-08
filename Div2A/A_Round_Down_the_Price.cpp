#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n, m;
    cin>>n;
    m = n;
    int mul = 1;

    while(n>=10){
        mul *= 10;
        n /= 10;
    }

    cout<<m-mul<<"\n";
    
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