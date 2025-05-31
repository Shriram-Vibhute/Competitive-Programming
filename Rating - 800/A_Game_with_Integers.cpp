# include<bits/stdc++.h>
using namespace std;

void game_with_integers(int n) {
    if(n % 3 == 0) {
        cout << "Second" << endl;
    }
    else {
        cout << "First" << endl;
    }
}
int main() {
    // Number of Tast Cases
    int t;
    cin >> t;

    while (t--)
    {
        int number;
        cin >> number;
        game_with_integers(number);
    }
    return 0;
}
