#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n, m;
    string s;
    cin>>n>>s;
    
    string ans;

    for(int i=0; i<s.size();i++){
        
        int x = s[i]-'0';
        if(x%2) ans += s[i];
        
        if(ans.size()>=2){
            cout<<ans<<"\n";
            return;
        }
    }

    cout<<-1<<"\n";
    
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