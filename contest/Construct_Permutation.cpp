
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int N; 
        cin >> N;

        if (N % 2 == 0) {
          
            cout << "-1" << endl;
        } else {
          
            for (int i = 1; i <= N; i++) {
                cout << i;
                if (i != N) cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}