#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Helper function to subtract smaller from larger number represented as strings
string subtractStrings(string num1, string num2) {
    // Ensure num1 is the larger number
    if (num1.length() < num2.length() || (num1.length() == num2.length() && num1 < num2)) {
        swap(num1, num2);
    }

    // Result can have at most the same number of digits as the larger number
    string result = "";
    int n1 = num1.length(), n2 = num2.length();
    int carry = 0;

    // Reverse both numbers to simplify subtraction
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    for (int i = 0; i < n1; ++i) {
        int digit1 = num1[i] - '0';
        int digit2 = i < n2 ? num2[i] - '0' : 0;
        int sub = digit1 - digit2 - carry;

        if (sub < 0) {
            sub += 10;
            carry = 1;
        } else {
            carry = 0;
        }

        result.push_back(sub + '0');
    }

    // Remove leading zeros from the result
    while (result.length() > 1 && result.back() == '0') {
        result.pop_back();
    }

    // Reverse result to get the final answer
    reverse(result.begin(), result.end());

    return result;
}

int main() {
    string num1, num2;
    cout << "Enter the first number (n1): ";
    cin >> num1;
    cout << "Enter the second number (n2): ";
    cin >> num2;

    string result = subtractStrings(num1, num2);

    cout << "Result of subtraction (n1 - n2): " << result << endl;

    return 0;
}
