#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n);
        for(auto &x:a) cin>>x;
        if(n <=2){
            cout<<-1<<"\n";
            continue;
        }
        sort(a.begin(), a.end());
        int k = n/2;
        ll a_k1 = a[k];
        ll sum = 0;
        for(auto x:a) sum +=x;
        ll required = 2LL *n *a_k1 - sum +1;
        if(required <=0){
            cout<<0<<"\n";
        }
        else{
            cout<<required<<"\n";
        }
    }
}
