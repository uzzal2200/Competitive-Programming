
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;

        string temp = a;
        if (a.length() < b.length()) {
             
            a = b;
            b = temp;
        }

        int n = a.length();
        int m = b.length();
        string result = "";
        int carry = 0;

        for (int i = 0; i < n; ++i) {
            int A = a[n - 1 - i] - '0';
            int B = 0;
            if (i < m) {
                B = b[m - 1 - i] - '0';
            }
            int sum = A + B + carry;
            result = char((sum % 10) + '0') + result;
            carry = sum / 10;
        }

        if (carry) {
            result = char(carry + '0') + result;
        }

        cout << result << endl;
    }

    return 0;
}