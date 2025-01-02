#include <bits/stdc++.h>
using namespace std;


void solve(){
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            int x;
            cin>>x;
            if(x==1){
                cout<<abs(2-i) + abs(2-j)<<"\n";
                return;
            }
        }
    }
    

}


signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin>>t;

    while(t--) solve();

    return 0;
}