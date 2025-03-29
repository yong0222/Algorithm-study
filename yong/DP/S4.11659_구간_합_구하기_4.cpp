#include <iostream>
#include <vector>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); // 입출력 속도 최적화
    cin.tie(NULL);                    // 입출력 묶음 해제
    
    int n, m;
    cin >> n;
    cin >> m;
    vector<int> nums(n+1);

    for(int i = 1; i <= n; i++){
        cin >> nums[i];
    }

    int dp[n+1];
    dp[0] = 0;
    dp[1] = nums[1];
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + nums[i];
    }

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a;
        cin >> b;
        int sum = dp[b] - dp[a-1];
        cout << sum << "\n";
    }
    

    return 0;
}