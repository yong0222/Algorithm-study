// Lv.2 카펫
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer(2);
    
    int area = brown + yellow;
    for(int i = 1; i < area; i++){
        int j = area / i;
        if(2*i+2*j-4 == brown && i * j == area){
            answer[0] = j;
            answer[1] = i;
            break;
        }
    }
    
    return answer;
}