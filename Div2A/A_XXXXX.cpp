#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n, a = INT_MAX , b = -1, c = 0, d = 0 , y = 0, x= 0, k =0, fl = 1, sum = 0;
    string str;
    
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        sum += v[i];
        if(v[i]%k){
            a = min((int)a,i);
            b = max((int)b,i);
        }
        else fl = 0;
    }

    if(sum%k){
        cout<<n<<"\n";
    }
    else if(a==INT_MAX){
        cout<<-1<<"\n";
    }
    else{
        cout<<max(n-a-1,b)<<"\n";
    }
    
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