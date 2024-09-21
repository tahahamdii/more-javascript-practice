#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n, d, k;
        cin >> n >> d >> k;

        vector<int> changes(n + 2, 0);  // +2 to handle edge cases for ending jobs

        for (int i = 0; i < k; i++) {
            int li, ri;
            cin >> li >> ri;
            changes[li]++;
            if (ri + 1 <= n) {
                changes[ri + 1]--;
            }
        }

        vector<int> activeJobs(n + 1, 0);
        int currentJobs = 0;

        // Calculate the number of active jobs for each day using prefix sum
        for (int i = 1; i <= n; i++) {
            currentJobs += changes[i];
            activeJobs[i] = currentJobs;
        }

        // Find the maximum and minimum overlaps
        int maxOverlap = 0, minOverlap = INT_MAX;
        int maxStartDay = 1, minStartDay = 1;
        int currentOverlap = 0;

        // Sliding window to determine max and min overlaps
        for (int i = 1; i <= n - d + 1; i++) {
            currentOverlap = 0;
            for (int j = 0; j < d; j++) {
                currentOverlap += activeJobs[i + j];
            }
            if (currentOverlap > maxOverlap) {
                maxOverlap = currentOverlap;
                maxStartDay = i;
            }
            if (currentOverlap < minOverlap) {
                minOverlap = currentOverlap;
                minStartDay = i;
            }
        }

        cout << maxStartDay << " " << minStartDay << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
