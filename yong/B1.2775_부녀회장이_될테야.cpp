#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int k, n;
        cin >> k >> n;
        vector<vector<int> > v(k+1, vector<int>(n+1, 0));
        v[0][0] = 1;
        for(int b = 1; b <= n; b++){
            v[0][b] = b;
        }
        for(int a = 1; a <= k; a++){
            int sum = 0;
            for(int b = 1; b <= n; b++){
                sum = sum + v[a-1][b];
                v[a][b] = sum;
            }
        }
        cout << v[k][n] << endl;
    }

    return 0;
}