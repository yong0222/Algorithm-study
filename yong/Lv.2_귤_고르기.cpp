#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<int> count(10000001);
    for(int i = 0; i < tangerine.size(); i++){
        count[tangerine[i]]++;
    }
    sort(count.rbegin(), count.rend());
    
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += count[i];
        if(sum >= k){
            answer = i + 1;
            break;
        }
    }
    return answer;
}