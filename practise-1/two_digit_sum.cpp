#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n1, n2; 
    cin >> n1>>n2;

    int len1 = n1.length();
    int len2 = n2.length();
    if (len1 < len2) {
        n1 = string(len2 - len1, '0') + n1;
    } else if (len2 < len1) {
        n2 = string(len1 - len2, '0') + n2;
    }
    string sum = "" ;
    int carry = 0;
   
    for (int i = n1.length()-1; i >= 0; --i) {
        int digit1 = n1[i] - '0'; // Convert character to integer
        int digit2 = n2[i] - '0'; 

        int total = digit1 + digit2 + carry;

        carry = total / 10;

      sum = char(total % 10 + '0') + sum;
   
     }

    cout << sum<< endl;
    }
    return 0;
}