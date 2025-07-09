#include <iostream>
#include <vector>

using namespace std;

bool visited[26];
int R, C, ans;
vector<string> board;
int move_x[4] = {-1, 0, 1, 0}; int move_y[4] = {0, -1, 0, 1};

void dfs(int x, int y, int count){
    visited[board[x][y]-'A'] = true;
    ans = max(ans, count);

    for(int i = 0; i < 4; i++){
        int next_x = x+move_x[i]; int next_y = y+move_y[i];
        if(next_x < 0 || next_y < 0 || next_x >= R || next_y >= C) continue;    // board에서 벗어나면 넘김

        if(!visited[board[next_x][next_y]-'A']){
            dfs(next_x, next_y, count+1);
        }
    }
    visited[board[x][y]-'A'] = false;
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> R >> C;
    
    board.resize(R);

    for(int i = 0; i < R; i++){
        cin >> board[i];
    }

    dfs(0, 0, 1);

    cout << ans << "\n";

    return 0;
}