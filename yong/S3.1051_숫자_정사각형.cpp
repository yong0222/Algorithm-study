#include <iostream>
#include <vector>

using namespace std;

int N, M, ans;
vector<string> board;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M;
    int max_length = min(N, M);
    int larger = max(N, M);
    
    board.resize(N);

    for(int i = 0; i < N; i++){
        cin >> board[i];
    }

    for(int i = 0; i < max_length; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < M; k++){
                if(j+i >= N || k+i >= M) continue;
                
                int temp = board[j][k];
                if(board[j][k] == temp && board[j+i][k] == temp && board[j][k+i] == temp && board[j+i][k+i] == temp){
                    ans = max(ans, (i+1)*(i+1));
                }
            }
        }
    }

    cout << ans << "\n";

    return 0;
}