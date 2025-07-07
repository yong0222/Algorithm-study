#include <iostream>
#include <vector>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T, n;
    cin >> T;
    

    for(int i = 0; i < T; i++){
        cin >> n;
        vector<vector<int> > a(3, vector<int>(100001, 0));
        vector<vector<int> > dp(3, vector<int>(100001, 0));
        for(int j = 0; j <= 2; j++){
            for(int k = 0; k <= 100000; k++){
                a[j][k] = 0;
                dp[j][k] = 0;
            }
        }
        for(int j = 1; j <= 2; j++){
            for(int k = 1; k <= n; k++){
                cin >> a[j][k];
            }
        }
        dp[1][1] = a[1][1];
        dp[2][1] = a[2][1];
        for(int j = 2; j <= n; j++){
            dp[1][j] = max(dp[2][j-1], dp[2][j-2]) + a[1][j];
            dp[2][j] = max(dp[1][j-1], dp[1][j-2]) + a[2][j];
        }

        cout << max(dp[1][n], dp[2][n]) << "\n";
    }

    return 0;
}