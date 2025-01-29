#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    
    long long int a = 1;
    long long int b = 2;
    if(n == 1){
        return a;
    }else if(n == 2){
        return b;
    }
    for(int i = 2; i < n; i++){
        answer = (a + b) % 1234567;
        a = b;
        b = answer;
    }
    
    return answer;
}