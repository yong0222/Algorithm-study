#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int len = progresses.size();
    int i = 0;
    bool flag = false;
    while(i < len){
        int count = 0;
        for(int k = i; k < len; k++){
            progresses[k] += speeds[k];
        }
        
        for(int j = i; j < len; j++){
            if(progresses[j] >= 100){
                count++;
                if(j == len-1){
                    flag = true;
                    answer.push_back(count);
                    break;
                }
            }else{
                if(count != 0){
                    answer.push_back(count);
                }
                i = j;
                break;
            }
        }        
        if(flag) break;
    }
    
    return answer;
}