#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int> > calculate_distances(int n, int m, vector<vector<int> >& grid) {
    vector<vector<int> > dist(n, vector<int>(m, -1));
    queue<pair<int, int> > q;
    int start_i = -1, start_j = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 0){
                dist[i][j] = 0;
            }
            if (grid[i][j] == 2) {
                start_i = i;
                start_j = j;
                dist[i][j] = 0;
            }
        }
    }

    q.push(make_pair(start_i, start_j));
    int di[] = {-1, 1, 0, 0};
    int dj[] = {0, 0, -1, 1};

    while (!q.empty()) {
        int i = q.front().first;
        int j = q.front().second;
        q.pop();
        for (int k = 0; k < 4; k++) {
            int ni = i + di[k];
            int nj = j + dj[k];
            if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                if (grid[ni][nj] == 1 && dist[ni][nj] == -1) {
                    dist[ni][nj] = dist[i][j] + 1;
                    q.push(make_pair(ni, nj));
                }
            }
        }
    }
    return dist;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<vector<int> > grid(n, vector<int>(m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }

    vector<vector<int> > dist(n, vector<int>(m));
    dist = calculate_distances(n, m, grid);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << dist[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
