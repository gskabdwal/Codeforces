#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n, L, a, b, ans = 0;
    string str;
    
    cin>>n;

    vector<vector<int>> v(n, vector<int> (2));

    for(int i=0; i<n; i++){
        cin>>v[i][0]>>v[i][1];
    }


    for(int i=0; i<n; i++){
        int l = 0, r= 0, u =0, d =0;
        for(int j=0; j<n; j++){
            if(i==j) continue;

            if(v[j][0]==v[i][0]){
                if(v[j][1]<v[i][1]){
                    d = 1;    
                }
                else if(v[j][1]>v[i][1]){
                    u = 1;
                }
            }
            if(v[j][1]==v[i][1]){
                if(v[j][0]<v[i][0]){
                    l = 1;    
                }
                else if(v[j][0]>v[i][0]){
                    r = 1;
                }
            }
            if(l&&r&&u&&d ){
                ans++;
                break;
            }
        }

        
    }
    
    cout<<ans<<"\n";
}



signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    //cin>>t;

    while(t--) solve();

    return 0;
}