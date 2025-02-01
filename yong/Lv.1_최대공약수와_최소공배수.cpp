#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer(2);
    for(int i = n * m; i >= 1; i--){
        if(n % i == 0 && m % i == 0){
            answer[0] = i;
            break;
        }
    }
    
    for(int i = 1; i <= n * m; i++){
        if(i % n == 0 && i % m == 0){
            answer[1] = i;
            break;
        }
    }
    return answer;
}