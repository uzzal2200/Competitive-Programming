
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countGreetings(vector<pair<int, int>>& people) {
    int n = people.size();
    int greetings = 0;

    sort(people.begin(), people.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first < b.first;
    });

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (people[j].first < people[i].second) {
                greetings++;
            } else {
                break;
            }
        }
    }

    return greetings;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> people;

        for (int i = 0; i < n; ++i) {
            int ai, bi;
            cin >> ai >> bi;
            people.push_back({ai, bi});
        }

        int result = countGreetings(people);
        cout << result << endl;
    }

    return 0;
}
