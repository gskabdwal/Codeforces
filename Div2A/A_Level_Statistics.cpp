#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n, a = 0 , b = 0, c = 0, d = 0 , fl = 1, ans = 0;
    string str;
    
    cin>>n;
    
    for(int i=0; i<n; i++){

        cin>>a>>b;

        if(a<c || b<d || a<b || (a-c)<(b-d)){
            fl = 0;
        } 
        
        c = a, d = b;
    }

    if(fl) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
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