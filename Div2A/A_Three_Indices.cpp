#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    // cout<<"Solving "<<n<<"-----";
    int x, a = -1, j= -1 ,k= -1, fl = 0;
    stack<int> st;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    for(int i=n-1; i>=0; i--){
        if(fl) continue;
        if(k!=-1&&v[st.top()]>v[i]){
            fl = 1;
            a = i;
            break;
        }
        while(st.size()&&v[st.top()]>=v[i]){
            st.pop();
        }
        j = i;
        if(st.size())
            k = st.top();

        st.push(i);
    }

    if(fl){
        cout<<"YES"<<"\n";
        cout<<a+1<<" "<<j+1<<" "<<k+1<<"\n";
    }
    else cout<<"NO"<<"\n";

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