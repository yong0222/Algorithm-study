#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector<int> ans;
    priority_queue<int, vector<int>, greater<int>> min_heap;

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        if(temp == 0){
            if(min_heap.empty()){
                ans.push_back(0);
                continue;
            }
            ans.push_back(min_heap.top());
            min_heap.pop();
            continue;
        }
        min_heap.push(temp);
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << "\n";
    }

    return 0;
}