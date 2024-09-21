#include <bits/stdc++.h>
using namespace std;

// Fast IO
inline void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main(){
    fast_io();
    int t;
    cin >> t;
    while(t--){
        int n, d, k;
        cin >> n >> d >> k;
        vector<int> l_sorted(k);
        vector<int> r_sorted(k);
        for(int i=0; i<k; ++i){
            cin >> l_sorted[i] >> r_sorted[i];
        }
        sort(l_sorted.begin(), l_sorted.end());
        sort(r_sorted.begin(), r_sorted.end());
        
        int count_l = 0, count_r = 0;
        int max_overlap = -1, min_overlap = INT32_MAX;
        int s_b = 1, s_m = 1;
        
        for(int s=1; s <= n - d +1; ++s){
            while(count_l < k && l_sorted[count_l] <= s + d -1){
                count_l++;
            }
            while(count_r < k && r_sorted[count_r] < s){
                count_r++;
            }
            int current_overlap = count_l - count_r;
            
            if(current_overlap > max_overlap){
                max_overlap = current_overlap;
                s_b = s;
            }
            if(current_overlap < min_overlap){
                min_overlap = current_overlap;
                s_m = s;
            }
        }
        cout << s_b << " " << s_m << "\n";
    }
}
