#include <iostream> 
#include <vector>
#include <algorithm>
#include <bitset>
#include <chrono>
#include <random>
#include <set>
#include <map>
#include <cstdint> 
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

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // Brute-force solution: Try every pair of indices
        fr(i, n - 1) {  // Use your custom loop macro fr(i, n) to iterate
            rep(j, i + 1, n - 1) {  // rep(i, start, end) macro for the second loop
                if (nums[i] + nums[j] == target) {
                    return {i, j}; // Return the indices as the result
                }
            }
        }
        return {}; // No solution found, return an empty vector
    }
};

int32_t main() {
    ios_base::sync_with_stdio(false); // For faster I/O
    cin.tie(NULL);                    // Unlink cin and cout for faster input

    Solution solution;               // Create an instance of the Solution class
    int T = 1;                       // Number of test cases
    cin >> T;                        // Input the number of test cases

    while (T--) {                    // Loop through all test cases
        int n, target;               // Variables for the number of elements and target sum
        cin >> n >> target;          // Input n and target
        vi nums(n);                  // Use vi (vector<long long>) for the input array
        cin >> nums;                 // Input the elements of the array
        
        vector<int> result = solution.twoSum(nums, target);  // Call twoSum and get the result

        if (!result.empty()) {       // Check if a solution is found
            cout << "Indices: " << result[0] << ", " << result[1] << '\n';  // Output the indices
        } else {
            cout << "No solution found.\n";  // If no solution is found
        }
    }

    return 0;                         // Return 0 to indicate successful execution
}

    