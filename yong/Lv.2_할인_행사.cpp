#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    unordered_map<string, int> umap;
    unordered_map<string, int> temp;
    
    for(int i = 0; i < want.size(); i++){
        umap.insert({want[i], number[i]});
    }
    
    for(int i = 0; i < 10; i++){   // 최초 10개 상품은 기록만 하기
        if(temp.count(discount[i]) == 0){
            temp.insert({discount[i], 1});
        }else{
            temp[discount[i]]++;
        }
    }
    
    if(umap == temp){
        answer++;
    }
    
    for(int i = 10; i < discount.size(); i++){
        if(temp[discount[i-10]] == 1){
            temp.erase(discount[i-10]);
        }else{
            temp[discount[i-10]]--;
        }
        
        if(temp.count(discount[i]) == 0){
            temp.insert({discount[i], 1});
        }else{
            temp[discount[i]]++;
        }
        
        if(umap == temp){
            answer++;
        }
    }
    
    return answer;
}