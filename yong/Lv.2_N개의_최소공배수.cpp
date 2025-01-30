#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 1;
    bool check = true;
    
    while(true){
        check = true;
        for(int i = 0; i < arr.size(); i++){
            if(answer % arr[i] != 0){
                check = false;
                answer++;
                break;
            }else if(answer % arr[i] == 0){
                continue;
            }else{
                check = false;
            }
            answer++;
        }
        if(check == true){
            break;
        }
    }
    
    
    return answer;
}