#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        
        // Mapping characters to their corresponding values
        int values[5] = {1, 5, 10, 20, 50};
        
        // Calculate total amount of money represented by the string S
        int totalAmount = 0;
        for (char c : S) {
            switch (c) {
                case 'A': totalAmount += 1; break;
                case 'B': totalAmount += 5; break;
                case 'C': totalAmount += 10; break;
                case 'D': totalAmount += 20; break;
                case 'E': totalAmount += 50; break;
            }
        }
        
        // Output total amount
        cout << totalAmount << endl;
        
        // Finding longest substring that sums to exactly K
        int maxLen = -1, bestStart = -1, bestEnd = -1;
        int currentSum = 0, start = 0;
        
        for (int end = 0; end < S.size(); ++end) {
            switch (S[end]) {
                case 'A': currentSum += 1; break;
                case 'B': currentSum += 5; break;
                case 'C': currentSum += 10; break;
                case 'D': currentSum += 20; break;
                case 'E': currentSum += 50; break;
            }
            
            while (currentSum > K && start <= end) {
                switch (S[start]) {
                    case 'A': currentSum -= 1; break;
                    case 'B': currentSum -= 5; break;
                    case 'C': currentSum -= 10; break;
                    case 'D': currentSum -= 20; break;
                    case 'E': currentSum -= 50; break;
                }
                start++;
            }
            
            if (currentSum == K && (end - start + 1) > maxLen) {
                maxLen = end - start + 1;
                bestStart = start;
                bestEnd = end;
            }
        }
        
        if (maxLen == -1) {
            cout << "NONE" << endl;
        } else {
            cout << S.substr(bestStart, maxLen) << endl;
        }
    }
    return 0;
}

