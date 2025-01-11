#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n, L, a, x, y, ans = 0;
    string str;
    cin>>n;
    
    vector<string> num = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten","eleven"
    , "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
     "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if(n>20){
        cout<<num[n/10+18];
        if(n%10!=0){
            cout<<"-"<<num[n%10];
        }
    }
    else{
        cout<<num[n];
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