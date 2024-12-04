#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T; // Read the number of test cases

    while (T--) {
        int N, X;
        cin >> N >> X;

        vector<int> A(N); // Store coin values
        vector<int> B(N); // Store coin counts
        
        // Read the values of the coins
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        // Read the counts of each coin type
        for (int i = 0; i < N; ++i) {
            cin >> B[i];
        }

        // Create a vector of pairs (coin value, coin count) and sort by coin value in descending order
        vector<pair<int, int>> coins(N);
        for (int i = 0; i < N; ++i) {
            coins[i] = {A[i], B[i]};
        }

        sort(coins.begin(), coins.end(), [](pair<int, int> a, pair<int, int> b) {
            return a.first > b.first; // Sort by coin value in descending order
        });

        int total = 0;  // To keep track of the total value accumulated
        int usedTypes = 0;  // To count how many distinct types of coins are used
        bool possible = false;

        // Try to accumulate at least 'X' using the fewest distinct coin types
        for (int i = 0; i < N; ++i) {
            int value = coins[i].first;
            int count = coins[i].second;

            if (value <= 0) continue;  // Skip non-positive coin values

            // Calculate how many coins we can use without exceeding the required amount
            int maxCoinsWeCanUse = min(count, (X - total + value - 1) / value);

            total += maxCoinsWeCanUse * value;  // Add the total value from this coin type
            usedTypes++;  // We've used one more distinct coin type

            if (total >= X) {  // If we've accumulated enough value
                possible = true;
                break;
            }
        }

        // Output the result for this test case
        if (possible) {
            cout << usedTypes << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}
