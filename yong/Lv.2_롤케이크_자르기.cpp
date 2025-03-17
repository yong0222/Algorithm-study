#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    unordered_map<int, int> topping_check;
    unordered_map<int, int> topping_check2;
    for(int i = 0; i < topping.size(); i++){
        topping_check[topping[i]]++;
    }
    
    for(int i = 0; i < topping.size(); i++){
        topping_check2[topping[i]]++;
        topping_check[topping[i]]--;
        if(topping_check[topping[i]] == 0){
            topping_check.erase(topping[i]);
        }
        
        if(topping_check2.size() == topping_check.size()){
            answer++;
        }
    }
    
    return answer;
}