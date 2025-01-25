#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x, mini = INT_MAX, maxi = INT_MIN, ans = INT_MAX, cnt = 0, m=-1;
    string str;

    cin>>n>>str;

    for(int i=0; i<n; i++){
        int x = str[i]-'0';
        if(m==-1&&x==1) m = i;
        if(m!=-1&&x%2==cnt%2){
            cnt++;
        }
    }

    cout<<cnt<<"\n";

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