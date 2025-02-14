#include <bits/stdc++.h>
using namespace std;


bool valid(vector<int> &hs, vector<int> &ts){
    bool fl = 0;
    for(int i=0; i<26; i++){
        // cout<<hs[i]<<" ";
        fl |= hs[i];
        if(hs[i] && ts[i]) return false;
    }
    // cout<<endl;anazxcvaba
    return fl;
}

void solve() {
    int n, ans = 0, cnt = 0;
    string str;
    cin >> str;

    vector<int> hs(26), ts(26);


    for(char c: str){
        ts[c - 'a']++;
    }

    int j = 0;

    for(int i=0; i<str.size(); i++){
        
        hs[str[i]-'a']++;
        ts[str[i]-'a']--;

        bool shrink = !valid(hs,ts);
        cout<<j<<","<<i<<" "<<shrink<<endl;
        while(j<=i&&shrink){

            hs[str[j]-'a']--;
            ts[str[j]-'a']++;
            shrink =!valid(hs,ts);
            j++;
        }

        if(i-j+1!=str.size()){
            ans = max(ans, i - j + 1);

            if(j==0){
                ans = max(ans,(int)str.size()-i-1);
            }
            else if(i==str.size()-1){
                ans = max(ans, j+1);
            }
        }
    
    }

    cout << ans << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t;

    while (t--) solve();

    return 0;
}
