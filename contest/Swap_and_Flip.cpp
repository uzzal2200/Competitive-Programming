#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to check if transformation is possible
bool canTransform(const string& S, const string& T) {
    // Count the number of 0s and 1s in both strings
    int count0_S = count(S.begin(), S.end(), '0');
    int count1_S = count(S.begin(), S.end(), '1');
    int count0_T = count(T.begin(), T.end(), '0');
    int count1_T = count(T.begin(), T.end(), '1');

    // Transformation is possible if both strings have the same count of 0s and 1s
    return count0_S == count0_T && count1_S == count1_T;
}

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N; // Length of strings S and T
        cin >> N;

        string S, T;
        cin >> S >> T;

        if (canTransform(S, T)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}