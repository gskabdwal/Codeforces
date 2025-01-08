#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string a(1,'#'),b;
    
    for(int i=0; i<2*n-2; i++){
        string s;
        cin>>s;
        if(s.size()==n-1 && a=="#"){
            a = s;
        }
        else if(s.size()==n-1 ){
            b = s;
        }
        
    }

    string str;

    if(a.substr(1)==b.substr(0,b.size()-1)){
        str = a[0] + b;
    }else {
        str = b[0] + a;
    }

    int fl = 1;

    for(int i=0; i<n/2; i++){
        if(str[i]!=str[n-1-i]){
            fl = 0;
            break;
        }
    }
    
    if(fl)
        cout<<"YES"<<"\n";
    else 
        cout<<"NO"<<"\n";
    
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