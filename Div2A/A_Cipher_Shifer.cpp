#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s, ans;
    cin>>s;
    
    char prev = s[0];

    ans += s[0];

    for(int i = 1; i < n; i++){
        
        if(prev==s[i]){
            if(i+1<n){
                ans += s[i+1];
                prev = s[i+1];
                i++;
            }
        }

    } 
    
    cout<<ans<<"\n";

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