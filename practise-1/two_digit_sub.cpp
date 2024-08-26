#include <iostream>
#include <string>

using namespace std;

int main() {
    string num1, num2;

    cin >> num1>>num2;

    int len1 = num1.length();
    int len2 = num2.length();
    if (len1 < len2) {
        num1 = string(len2 - len1, '0') + num1;
    } else if (len2 < len1) {
        num2 = string(len1 - len2, '0') + num2;
    }

    string result = "";
    int carry = 0;

    
    for (int i = num1.length() - 1; i >= 0; i--) {
        int digit1 = num1[i] - '0';
        int digit2 = num2[i] - '0';


        int sub = digit1 - digit2 - carry;
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        } else {
            carry = 0;
        }

        result = char(sub + '0') + result;
    }
    cout << " subtraction " << result << endl;

    return 0;
}