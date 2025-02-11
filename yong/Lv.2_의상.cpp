#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> umap;

    for(int i = 0; i < clothes.size(); i++){
        if(umap.count(clothes[i][1]) == 0){
            umap.insert({clothes[i][1], 2});
        }else{
            umap[clothes[i][1]]++;
        }
    }
    
    for(auto it = umap.begin(); it != umap.end(); it++){
        answer *= it->second;
    }
    
    return answer-1;
}