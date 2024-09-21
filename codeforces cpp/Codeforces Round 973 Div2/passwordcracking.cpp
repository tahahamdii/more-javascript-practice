#include <iostream> 
#include <vector>
#include <algorithm>
#include <bitset>
#include <chrono>
#include <random>
#include <set>
#include <map>
#include <cstdint> 
#include <algorithm>
#include <string>
#include <utility>
#define int long long
#define uint unsigned long long
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define nl cout<<"\n"
#define dbg(var) cout<<#var<<"="<<var<<" "
#define all(v) v.begin(),v.end()
#define srt(v)  sort(v.begin(),v.end())         // sort 
#define mxe(v)  *max_element(v.begin(),v.end())     // find max element in vector
#define mne(v)  *min_element(v.begin(),v.end())     // find min element in vector
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed 
#define bin(x,y)  bitset<y>(x) 
using namespace std;
int MOD=1e9+7;      // Hardcoded, directly change from here for functions!



void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}
// ================================== take ip/op like vector,pairs directly!==================================
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
// ===================================END Of the input module ==========================================


void solve(){
    int n=1,m=0;
    string s;
    cin>>n;
    vi v(n);
    cin>>v;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        string r = "00";
        int b = 0;
 
        auto query = [](string s) {
            cout << "? " << s << endl;
            int x;
            cin >> x;
            return x;
        };
 
        if (n == 1) {
            if (query("1")) {
                cout << "! 1" << endl;
            } else {
                cout << "! 0" << endl;
            }
            continue;
        }
 
        if (query("00")) {
            r = "00";
        } else if (query("01")) {
            r = "01";
        } else if (query("10")) {
            r = "10";
        } else {
            string ans = string(n, '1');
            cout << "! " << ans << endl;
            continue;
        }
 
        for (int i = 0; i < n - 2; i++) {
            string c1 = r + "0";
            string c2 = r + "1";
 
            if (b == 0) {
                if (query(c1)) {
                    r = c1;
                } else if (query(c2)) {
                    r = c2;
                } else {
                    b = 1;
                }
            }
 
            if (b == 1) {
                string c3 = "0" + r;
                string c4 = "1" + r;
 
                if (query(c3)) {
                    r = c3;
                } else {
                    r = c4;
                }
            }
        }
 
        cout << "! " << r << endl;
    }
}

    