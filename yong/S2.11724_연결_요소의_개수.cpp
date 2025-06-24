#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

vector<int> vect[1001];
int visited[1001];

void DFS(int vertex){
    visited[vertex] = 1;
    for(int i = 0; i < vect[vertex].size(); i++){
        int idx = vect[vertex][i];
        if(visited[idx] == 0){
            DFS(idx);
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    int count = 0;
    
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        vect[a].push_back(b);
        vect[b].push_back(a);
    }

    for(int i = 1; i <= N; i++){
        if(visited[i] == 0){
            count++;
            DFS(i);
        }
    }

    cout << count << endl;

    return 0;
}