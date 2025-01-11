#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n, L, r1,r2,c1,c2,d1,d2, ans = 0, sum = 0;
    string str;
    vector<int> v(7);
    cin>>n;

    for(int i=0; i<7; i++){
        cin>>v[i];
        sum += v[i];
        L = v[i]>0?i+1:L;
    }

    if(n%sum==0){
        cout<<L<<"\n";
    }
    else{
        n%=sum;
        for(int i=0; i<7; i++){
            if(ans+v[i]>=n){
                cout<<i+1<<"\n";
                return;
            }
            ans += v[i];
        }
    }


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