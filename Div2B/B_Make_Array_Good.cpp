#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, mini = INT_MAX, maxi = INT_MIN, res = 0, c = 0, m=-1;
    string str;

    cin>>n;
    
    cout<<n<<"\n";
    
    for(int i=0; i<n; i++){
        int x;
        cin>>x;

        int y = ceil(log2(x));
        y = pow(2,y);

        cout<<i+1<<" "<<y-x<<"\n";
    }

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