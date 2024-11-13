#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;
    
    while (k--) {
        int n, m;
        cin >> n >> m;
        
        string s, t;
        cin >> s >> t;
        
        int count_a_s = 0, count_b_s = 0;
        for (char c : s) {
            if (c == 'a') count_a_s++;
            else if (c == 'b') count_b_s++;
        }

      
        int count_a_t = 0, count_b_t = 0;
        for (char c : t) {
            if (c == 'a') count_a_t++;
            else if (c == 'b') count_b_t++;
        }

     
        if (count_b_s != count_b_t) {
            cout << "NO" << endl;
        } else {
       
            if (count_a_s <= count_a_t) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
