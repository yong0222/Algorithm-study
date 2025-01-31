#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int count = 0;
    
    while(count < n){
        answer++;
        // 3의 배수면 +1
        if(answer % 3 == 0){
            continue;
        }
        // 3이 들어가면 +1
        int temp = answer;
        bool check = true;
        while(temp != 0){
            if(temp % 10 == 3){
                check = false;
                break;
            }
            temp = temp / 10;
        }
        if(check == true){
            count++;
        }
    }
    
    return answer;
}