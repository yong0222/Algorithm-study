#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    unordered_map<string, int> umap;
    vector<string> names;
    vector<string> sol;
    int count = 0;

    for(int i = 0; i < N; i++){
        string temp;
        cin >> temp;
        names.push_back(temp);
        umap[temp] = 1;
    }

    for(int i = 0; i < M; i++){
        string temp;
        cin >> temp;
        umap[temp]++;
    }

    for(int i = 0; i < names.size(); i++){
        if(umap[names[i]] == 2){
            sol.push_back(names[i]);
            count++;
        }
    }

    sort(sol.begin(), sol.end());

    cout << count << "\n";
    for(int i = 0; i < sol.size(); i++){
        cout << sol[i] << "\n";
    }

    return 0;
}