#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, ans = 0, cnt = 0;
    string str;
    cin >> n;

        
        if(n==1)
        {
            cout<<"1 ";
            cout<<"\n";
            return;
        } 
        if(n%2==0){
            cout<<"1 ";
            for(int i=2; i<n; i++){
                cout<<2<<" ";
            }
            cout<<3<<"\n";
        }
        else 
            for(int i=0; i<n; i++) cout<<2<<" ";

        cout<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;

    while (t--) solve();

    return 0;
}
