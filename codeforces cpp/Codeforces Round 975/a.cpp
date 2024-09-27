#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int getMaxScore(const vector<int>& a, int n, int start) {
    int max_val = 0;
    int count = 0;
    for (int i = start; i < n; i += 2) {
        max_val = max(max_val, a[i]);
        count++; 
    }
    return max_val + count; 
}
 
int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; // Array elements
        }
 
        int score0 = getMaxScore(a, n, 0);
        int score1 = getMaxScore(a, n, 1);
 
        cout << max(score0, score1) << endl;
    }
    return 0;
}