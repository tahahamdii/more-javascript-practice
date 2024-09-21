#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n, k;
        cin >> n >> k;  

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }

        int robin_gold = 0;
        int people_given_gold = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] >= k) {
                robin_gold += a[i]; 
            } else if (a[i] == 0) {
                if (robin_gold > 0) {
                    robin_gold--;  
                    people_given_gold++;  
                }
            }
        }

        cout << people_given_gold << endl;
    }

    return 0;
}
