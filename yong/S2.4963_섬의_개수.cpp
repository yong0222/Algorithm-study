#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int w, h;
int mx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int my[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
vector<vector<bool> > visited;
vector<vector<int> > board;
vector<int> ans;

void bfs(int x, int y){
    visited[y][x] = 1;
    queue<pair<int, int> > q;
    q.push(make_pair(x, y));

    while(!q.empty()){
        pair<int, int> current = q.front();
        q.pop();

        int cx = current.first;
        int cy = current.second;

        for(int i = 0; i < 8; i++){
            int nx = cx + mx[i];
            int ny = cy + my[i];

            if(nx < 0 || nx >= w || ny < 0 || ny >= h) continue;
            if(visited[ny][nx] == 1) continue;
            if(board[ny][nx] == 0) continue;

            q.push(make_pair(nx, ny));
            visited[ny][nx] = 1;
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    while(true){
        cin >> w >> h;
        if(w == 0 && h == 0) break;
        int temp = 0;

        board.assign(h, vector<int>(w, 0));
        visited.assign(h, vector<bool>(w, false));

        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                cin >> board[i][j];
            }
        }

        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(visited[i][j] == 1) continue;
                if(board[i][j] == 0) continue;

                temp++;
                bfs(j, i);
            }
        }

        ans.push_back(temp);
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << "\n";
    }

    return 0;
}