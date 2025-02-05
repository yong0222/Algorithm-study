#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    unordered_set<int> uset;
    int len = elements.size();
    int mod = 0;
    
    for(int i = 0; i < len; i++){
        int temp = 0;
        for(int j = 0; j < len; j++){
            mod = (i+j) % len;
            temp += elements[mod];
            uset.insert(temp);
        }
    }
    answer = uset.size();
    
    return answer;
}