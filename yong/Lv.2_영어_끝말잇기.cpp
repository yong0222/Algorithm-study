#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer(2, 0);
    unordered_set<string> set;
    int number = n;
    int wrong_number;
    int wrong_order;
    
    set.insert(words[0]);
    for(int i = 1; i < words.size(); i++){
        
        if(words[i-1][words[i-1].size()-1] != words[i][0] || set.find(words[i]) != set.end()){    
            wrong_number = (i % n) + 1;
            wrong_order = (i / n) + 1;
            answer[0] = wrong_number;
            answer[1] = wrong_order;
            break;
        }
        set.insert(words[i]);
    }

    return answer;
}