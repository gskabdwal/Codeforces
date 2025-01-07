#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;

    if(n%k!=0){
        cout<<1<<"\n"<<n<<"\n";
    } 
    else cout<<2<<"\n"<<n-1<<" "<<1<<"\n";

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
