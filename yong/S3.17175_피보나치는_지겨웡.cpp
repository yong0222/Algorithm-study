#include <iostream>
#include <vector>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); // 입출력 속도 최적화
    cin.tie(NULL); cout.tie(NULL);    // 입출력 묶음 해제

    int n;
    cin >> n;
    vector<int> dp(n+1, 0);

    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i <= n; i++){
        dp[i] = (dp[i-1] + dp[i-2] + 1) % 1000000007;
    }

    cout << dp[n] << "\n";

    return 0;
}