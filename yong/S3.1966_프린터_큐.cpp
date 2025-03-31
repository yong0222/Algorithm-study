#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>

using namespace std;

int main(void){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        queue<int> q;
        unordered_map<int, int> umap; 
        int m, target;
        cin >> m >> target;

        for(int j = 0; j < m; j++){
            int temp;
            cin >> temp;
            q.push(temp);
            umap[temp]++;
        }

        int max = 0;
        for (auto it = umap.begin(); it != umap.end(); it++) {
            if(it->first > max){
                max = it->first;
            }
        }
        int count = 0;
        while(true){
            while(max != q.front()){
                int temp = q.front();
                q.pop();
                q.push(temp);
                if(target > 0){
                    target--;
                }else{
                    target = q.size() - 1;
                }
            }
            count++;
            if(target == 0){
                cout << count << endl;
                break;
            }else{
                target--;
                umap[q.front()]--;
                if(umap[q.front()] == 0){
                    umap.erase(q.front());
                    max = 0;
                    for (auto it = umap.begin(); it != umap.end(); it++) {
                        if(it->first > max){
                            max = it->first;
                        }
                    }
                }
                q.pop();
            }
        }
        

    }

    return 0;
}