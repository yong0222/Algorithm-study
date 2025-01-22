#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2);
    
    int del = 0;
    int count = 0;
    
    while(s.size() != 1){
        int temp_del = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                del++;
                temp_del++;
            }        
        }
        if(s.size() == 1){
            break;
        }else{
            count++;
        }
        int count1 = s.size() - temp_del;
        s = "";
        while(count1 != 0){
            if(count1 % 2 == 0){
                s = '0' + s;
            }else{
                s = '1' + s;
            }
            count1 = count1 / 2;
        }
    }
    answer[0] = count;
    answer[1] = del;
    return answer;
}