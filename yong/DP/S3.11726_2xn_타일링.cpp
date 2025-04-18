#include <iostream>

using namespace std;

int main(void){
    int n;
    cin >> n;

    int dp[n+1];
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i <= n; i++){
        dp[i] = (dp[i-2] + dp[i-1]) % 10007;
    }
    cout << dp[n] << endl;

    return 0;
}