#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n, L, a, b, ans = 0;
    string str;
    
    cin>>n>>str;
    
    int i;
    for(i=0; i<n; i++){

        if(str[i] == '8'){
            break;
        } 
        
    }
    
    if(n-i>=11)
        cout<<"YES"<<"\n";
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