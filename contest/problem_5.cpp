#include<bits/stdc++.h>
using namespace std;
int main()
{
    
      int T;
    cin >> T;
    
    while (T--) {
        string Num1, Num2;
        cin >> Num1 >> Num2;
        
        string result = "";
        int carry = 0;
        int len1 = Num1.length();
        int len2 = Num2.length();
        int i = len1 - 1;
        int j = len2 - 1;
        
        while (i >= 0 || j >= 0 || carry > 0) {
            int digit1 = (i >= 0) ? Num1[i] : '0';
            int digit2 = (j >= 0) ? Num2[j] : '0';
            
            if (digit1 >= 'A' && digit1 <= 'Z') digit1 = digit1 - 'A' + 10;
            else digit1 = digit1 - '0';
            
            if (digit2 >= 'A' && digit2 <= 'Z') digit2 = digit2 - 'A' + 10;
            else digit2 = digit2 - '0';
            
            int sum = digit1 + digit2 + carry;
            carry = sum / 36;
            sum %= 36;
            
            if (sum >= 10) {
                result += char('A' + (sum - 10));
            } else {
                result += char('0' + sum);
            }
            
            i--;
            j--;
        }
        
        // Reverse the result because we built it from least significant to most significant
        reverse(result.begin(), result.end());
        
        cout << result << endl;
    }
    return 0;
}
