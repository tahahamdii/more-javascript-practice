#include <bits/stdc++.h>
#define int long long
using namespace std;
 
string join(const vector<string>& v, const string& del) {
    string res;
    for (size_t i = 0; i < v.size(); ++i) {
        res += v[i];
        if (i < v.size() - 1) {
            res += del;
        }
    }
    return res;
}
 
string process_test_case(int n, int q, vector<int>& x, vector<int>& queries) {
    unordered_map<int, int> freq;
 
    for (int c = 1; c <= n; c++) {
        
        int k_p = (c - 1) * (n - c + 1) + (n - c);
        freq[k_p]++;
 
        if (c < n) {
            int delta = x[c] - x[c - 1] - 1;
 
            if (delta > 0) {
                int k_between = c * (n - c);
                freq[k_between] += delta;
            }
        }
    }
 
    vector<string> answers;
    for (int k : queries) {
       
        if (freq.find(k) != freq.end()) {
            answers.push_back(to_string(freq[k]));
        }
        else {
            answers.push_back("0");
        }
    }
 
    return join(answers, " ");
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    vector<string> results;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<int> x(n);
        for(int j = 0; j < n; j++) cin >> x[j];
        vector<int> queries(q);
        for(int j = 0; j < q; j++) cin >> queries[j];
        string result = process_test_case(n, q, x, queries);
        results.push_back(result);
    }
 
    cout << join(results, "\n") << "\n";
}