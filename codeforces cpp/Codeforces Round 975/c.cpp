#include <bits/stdc++.h>
#define int long long
#define all(a) a.begin(), a.end()
using namespace std;
 
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
 
    for (auto &element : arr)
        cin >> element;
 
    int maxel = LLONG_MIN;
    for (auto x : arr)
        maxel = max(maxel, x);
 
    int somme = accumulate(arr.begin(), arr.end(), 0LL);
 
    for (int i = n; i > 0; i--) {
        int quot = (somme + k) / i;
 
        if (quot * i <= somme - 1)
            continue;
        if (quot <= maxel - 1)
            continue;
 
        cout << i << endl;
        return;
    }
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int cases;
    cin >> cases;
 
    while (cases--) 
        solve();
 
    return 0;
}