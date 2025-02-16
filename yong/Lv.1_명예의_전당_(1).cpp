#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> temp;
    if(k > score.size()){
        for(int i = 0; i < score.size(); i++){
            temp.push_back(score[i]);
            sort(temp.rbegin(), temp.rend());
            answer.push_back(temp[i]);
        }
        return answer;
    }
    for(int i = 0; i < k; i++){
        temp.push_back(score[i]);
        sort(temp.rbegin(), temp.rend());
        answer.push_back(temp[i]);
    }
    for(int i = k; i < score.size(); i++){
        temp.push_back(score[i]);
        sort(temp.rbegin(), temp.rend());
        answer.push_back(temp[k-1]);
    }
    
    return answer;
}