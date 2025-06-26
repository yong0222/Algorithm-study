#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int visited[1001];
vector<int> vect[1001];
vector<int> dfsPath;
vector<int> bfsPath;

void DFS(int vertex){
    dfsPath.push_back(vertex);
    visited[vertex] = 1;
    for(int i = 0; i < vect[vertex].size(); i++){
        int idx = vect[vertex][i];
        if(visited[idx] == 0){
            DFS(idx);
        }
    }
}

void BFS(int vertex){
    queue<int> q;
    q.push(vertex);
    visited[vertex] = 1;

    while(!q.empty()){
        int current = q.front();
        q.pop();
        bfsPath.push_back(current);

        for(int i = 0; i < vect[current].size(); i++){
            int next = vect[current][i];
            if(visited[next] == 0){
                visited[next] = 1;
                q.push(next);
            }
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, M, V;
    cin >> N >> M >> V;

    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        vect[a].push_back(b);
        vect[b].push_back(a);
    }

    for(int i = 1; i <= N; i++){
        sort(vect[i].begin(), vect[i].end());
    }

    DFS(V);

    for(int i = 0; i < dfsPath.size(); i++){
        cout << dfsPath[i] << " ";
    }
    cout << "\n";

    for(int i = 0; i <= 1000; i++){ // BFS전에 visited 초기화
        visited[i] = 0;
    }

    BFS(V);

    for(int i = 0; i < bfsPath.size(); i++){
        cout << bfsPath[i] << " ";
    }
    cout << "\n";

    return 0;
}