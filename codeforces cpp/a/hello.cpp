#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    string target = "hello";
    
    int j = 0; 
    
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == target[j]) {
            j++; 
        }
        if (j == target.size()) {
            cout << "YES" << endl;
            return;
        }
    }
    
    cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
