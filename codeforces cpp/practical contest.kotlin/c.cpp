#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll b, c, d;
        cin >> b >> c >> d;
        bool possible = true;
        ll a = 0;
        for(int i=0;i<=60 && possible;i++){
            ll b_i = (b >> i) &1;
            ll c_i = (c >> i) &1;
            ll d_i = (d >> i) &1;
            if(d_i == (1 - c_i)){
                a |= (1LL <<i);
            }
            else if(d_i == b_i){
            }
            else{
                possible = false;
            }
        }
        if(possible){
            __int128 or_val = (__int128(a) | b);
            __int128 and_val = (__int128(a) & c);
            __int128 s = or_val - and_val;
            if(s != d){
                possible = false;
            }
        }
        if(possible){
            cout << a << "\n";
        }
        else{
            cout << "-1\n";
        }
    }
}
