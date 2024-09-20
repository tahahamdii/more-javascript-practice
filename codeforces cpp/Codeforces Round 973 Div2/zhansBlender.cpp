#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        cout << (n + min(x, y) - 1) / min(x, y) << endl;
    }
    return 0;
}