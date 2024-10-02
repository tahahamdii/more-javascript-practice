#include<bits/stdc++.h>
using namespace std;

void findSolution() {
    long long target; 
    cin >> target;
    
    long long left = 1, right = 2e18, result = 0;
    
    while (left <= right) {
        long long m = (left + right) / 2;
        long long square = sqrt(m);
        
        while (square * square > m) square--;
        while ((square + 1) * (square + 1) <= m) square++;
        
        long long count = m - square;
        
        if (count >= target) {
            result = m;
            right = m - 1;
        } else {
            left = m + 1;
        }
    }
    
    cout << result << '\n';
}

int main() {
    int testCases; 
    cin >> testCases;
    
    while (testCases--) {
        findSolution();
    }
}
