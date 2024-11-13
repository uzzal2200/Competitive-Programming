#include<bits/stdc++.h>
using namespace std;
int main()
{
        int T;
    cin >> T;

    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        // Check if the string is already a palindrome
        string rev_S = S;
        reverse(rev_S.begin(), rev_S.end());

        if (S == rev_S) {
            // It's already a palindrome
            cout << "0" << endl;
        } else {
            // If the string is not a palindrome, check if it can be made a palindrome
            bool canMakePalindrome = false;
            
            // Check if we can make it a palindrome by removing one character
            for (int i = 0; i < N; ++i) {
                string modified = S.substr(0, i) + S.substr(i + 1);
                string rev_modified = modified;
                reverse(rev_modified.begin(), rev_modified.end());
                
                if (modified == rev_modified) {
                    canMakePalindrome = true;
                    break;
                }
            }

            // Output the results
            if (canMakePalindrome) {
                cout << "1" << endl;
            } else {
                cout << "-1" << endl;
            }
        }
    }
  
    return 0;
}

