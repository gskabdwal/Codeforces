#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x, mini = INT_MAX, maxi = INT_MIN, ans = INT_MAX, cnt = 0, m=-1;
    string str;

    cin>>n;


    cout<<(n+1)/2<<"\n";

    int st = 1, end = 3*n-1;    
    for(int i=1; i<=(n+1)/2; i++){
        cout<<st<<" "<<end<<"\n";
        st += 3;
        end -= 3;
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