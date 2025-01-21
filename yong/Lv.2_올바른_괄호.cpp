// Lv2.올바른 괄호
#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> s_char;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ')' && s_char.empty()){
            answer = false;
            break;
        }else if(s[i] == '('){
            s_char.push(s[i]);
        }else{
            s_char.pop();
        }
    }
    if(!s_char.empty()){
        answer = false;
    }

    return answer;
}