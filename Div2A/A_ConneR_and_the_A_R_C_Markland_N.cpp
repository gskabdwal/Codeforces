#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n, m, k;
    string s;
    cin>>n>>m>>k;
    set<int> st;
    
    for(int i=0; i<k; i++){
        int x;
        cin>>x;
        st.insert(x);
    }

    int b =m, t=m;    

    while(b>0 || t<=n){
        if(b>0&&st.count(b)==0){
            cout<<m-b<<"\n";
            return;
        }
        if(t<=n&&st.count(t)==0){
            cout<<t-m<<"\n";
            return;
        }
        b--, t++;
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