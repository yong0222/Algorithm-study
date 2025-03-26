#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> stairs(n+2);

    for(int i = 1; i <= n; i++){
        cin >> stairs[i];
    }

    int dp[n+2];
    for(int i = 2; i <= n; i++){
        dp[i] = 0;
    }
    dp[1] = stairs[1];
    dp[2] = dp[1] + stairs[2];
    dp[3] = max(dp[1] + stairs[3], stairs[2] + stairs[3]);
    dp[4] = max(dp[2] + stairs[4], dp[1] + stairs[3] + stairs[4]);
    dp[5] = max(dp[3] + stairs[5], dp[2] + stairs[4] + stairs[5]);
    for(int i = 6; i <= n; i = i+2){
        dp[i] = max(dp[i-2] + stairs[i], dp[i-3] + stairs[i-1] + stairs[i]);
        dp[i+1] = max(dp[i-1] + stairs[i+1], dp[i-2] + stairs[i] + stairs[i+1]);
    }
    cout << dp[n] << endl;

    return 0;
}