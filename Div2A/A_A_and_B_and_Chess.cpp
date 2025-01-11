#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n, L, a, b, x, y, ans = 0;
    string str;
    
    map<char, int> mpp = {{'Q',9},{'R',5},{'B',3},{'N',3},{'P',1}, {'K',0}};

    for(int i=0; i<8; i++){
        cin>>str;
        for(int j=0; j<8; j++){
            if(str[j]!='.'){
                char c = str[j], d = str[j]-32;
                
                ans += mpp[c];
                ans -= mpp[d];
                
            }
        }
    }



    if(ans==0){

        cout<<"Draw"<<"\n";
    }
    else if(ans>0){
        cout<<"White"<<"\n";
    }
    else{
        cout<<"Black"<<"\n";
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