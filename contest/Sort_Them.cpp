#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        string S, P;
        cin >> S >> P;

        // Step 1: Create a map to store the position of each character in P
        unordered_map<char, int> pos;
        for (int i = 0; i < 26; ++i) {
            pos[P[i]] = i;  // P[i] maps to its index in P (from 0 to 25)
        }

        // Step 2: Create the target sorted version of S
        string sortedS = S;
        sort(sortedS.begin(), sortedS.end());

        // Step 3: Track operations required
        int operations = 0;
        int maxPos = -1;  // Track the maximum position in P that we've used

        for (int i = 0; i < N; ++i) {
            // Get the position of current character in P
            int currentPos = pos[S[i]];

            // If the current character position is smaller than maxPos, we need an operation
            if (currentPos < maxPos) {
                operations++;
            } else {
                maxPos = currentPos;  // Otherwise, update the maxPos
            }
        }

        // Output result: the minimum number of operations or -1 if impossible
        cout << operations << endl;
    }

    return 0;
}
