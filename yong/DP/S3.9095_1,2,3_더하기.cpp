#include <iostream>

using namespace std;

int main(void){
    int t;
    cin >> t;
    int n = 10;
    int dp[n+1];

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    
    for(int i = 4; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    for(int j = 0; j < t; j++){
        int input;
        cin >> input;
        cout << dp[input] << endl;
    }

    return 0;
}