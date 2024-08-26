
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        bool s1 = false, s2 = false, s3 = false, s4 = false;
        
        for (char c : s)
        {
            if (c == 'P') s1 = true;
            if (c == 'U') s2 = true;
            if (c == 'S') s3 = true;
            if (c == 'T') s4 = true;
        }
        
        if (s1 && s2 && s3 && s4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
