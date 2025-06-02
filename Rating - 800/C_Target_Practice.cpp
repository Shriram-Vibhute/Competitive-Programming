# include <bits/stdc++.h>
using namespace std;

void score_calculator(vector<string>& arr) {
    long long total_score = 0;
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if (arr[i][j] == 'X') {
                // The game of edges
                total_score += min({i + 1, j + 1, 10 - i, 10 - j});
            }
        }
    }
    cout << total_score << endl;
    return ;
};

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n = 10;
        vector<string> arr;

        for(int i = 0; i < n; i++) {
            string curr_shot;
            cin  >> curr_shot;
            arr.push_back(curr_shot);
        }

        score_calculator(arr);
    }

    return 0;
}