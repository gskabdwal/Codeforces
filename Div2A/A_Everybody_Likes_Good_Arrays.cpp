#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    // cout<<"Solving "<<n<<"-----";
    int c1 = 0, c2= 0, x, fl = 0, ans = 0;

    for(int i=0; i<n; i++){
        cin>>x;
        
        if(x%2==0){
            c1++;
            ans += max(0,c2 - 1);
            c2 = 0;
        }
        else{
            c2++;
            ans += max(0,c1 - 1);
            c1 = 0;
        }
        
        
    }
    ans += max(0,c2 - 1);
    ans += max(0,c1 - 1);
    
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