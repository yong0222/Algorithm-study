#include <iostream>
#include <vector>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); // 입출력 속도 최적화
    cin.tie(NULL); cout.tie(NULL);    // 입출력 묶음 해제

    int n, m;
    cin >> n >> m;
    vector<int> a(n+1, 0);
    vector<int> dp(n+1, 0);
    long long sum = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        a[i] = a[i] % m;
        dp[i] = (dp[i-1] % m + a[i]) % m;
    }

    for(int i = 0; i < m; i++){
        long long count = 0;
        for(int j = 0; j <= n; j++){
            if(dp[j] == i) count++;
        }
        sum = sum + (count-1)*count/2;
    }

    cout << sum << "\n";

    return 0;
}