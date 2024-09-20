#include <bits/stdc++.h>
using namespace std;
 
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