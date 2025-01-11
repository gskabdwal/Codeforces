#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long n, L, r1,r2,c1,c2,d1,d2, ans = 0;
    string str;
    
    cin>>r1>>r2>>c1>>c2>>d1>>d2;

    vector<int> arr = {1,2,3,4,5,6,7,8,9};

    while(1){

        int a = arr[0], b= arr[1], c= arr[2], d= arr[3];

        if(a+b==r1&&c+d==r2&&a+c==c1&&b+d==c2&&a+d==d1&&b+c==d2){
            cout<<a<<" "<<b<<"\n"<<c<<" "<<d;
            return;
        }


        if(!next_permutation(arr.begin(),arr.end())) break;

    }

    cout<<-1<<"\n";

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