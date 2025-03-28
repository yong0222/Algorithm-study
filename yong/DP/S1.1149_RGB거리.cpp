#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int n;
    cin >> n;

    vector<vector<int> > colors(n+1, vector<int>(3, 0));
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < colors[0].size(); j++){
            cin >> colors[i][j];
        }
    }

    int dp[n+1][3];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= 3; j++){
            dp[i][j] = INT_MAX;
        }
    }

    dp[1][0] = colors[1][0];
    dp[1][1] = colors[1][1];
    dp[1][2] = colors[1][2];
    for(int i = 2; i <= n; i++){
        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + colors[i][0];
        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + colors[i][1];
        dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + colors[i][2];
    }
    
    int answer;
    for(int i = 0; i < 3; i++){
        answer = min(dp[n][0], dp[n][1]);
        answer = min(answer, dp[n][2]);
    }

    cout << answer << endl;

    return 0;
}