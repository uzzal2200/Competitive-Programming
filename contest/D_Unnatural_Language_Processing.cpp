
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string word;
        cin >> word;

        string syllables = "";
        for (int i = 0; i < n; ++i) {
            if ((i < n - 2) && ((word[i] == 'a' && word[i + 1] == 'e' && word[i + 2] == 'a') || (word[i] == 'e' && word[i + 1] == 'a' && word[i + 2] == 'e'))) {
                syllables += word[i];
                syllables += '.';
            } else {
                syllables += word[i];
                if ((i < n - 1) && ((word[i] == 'a' || word[i] == 'e') && (word[i + 1] == 'b' || word[i + 1] == 'c' || word[i + 1] == 'd'))) {
                    syllables += '.';
                }
            }
        }

        cout << syllables << endl;
    }

    return 0;
}
