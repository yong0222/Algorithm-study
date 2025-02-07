#include <string>
#include <vector>
#include <stack>

using namespace std;

void rotate(string& s){
    char r = s[0];
    s.erase(0, 1);
    s = s + r;
    return;
}

int solution(string s) {
    int answer = 0;
    int len = s.size();
    for(int i = 0; i < len; i++){
        stack<char> st;
        for(int j = 0; j < len; j++){
            if(s[j] == '(' || s[j] == '{' || s[j] == '['){
                st.push(s[j]);
            }else if(s[j] == ')' && !st.empty()){
                if(st.top() == '('){
                    st.pop();
                }else{
                    st.push('e');
                    break;
                }
            }else if(s[j] == '}' && !st.empty()){
                if(st.top() == '{'){
                    st.pop();
                }else{
                    st.push('e');
                    break;
                }
            }else if(s[j] == ']' && !st.empty()){
                if(st.top() == '['){
                    st.pop();
                }else{
                    st.push('e');
                    break;
                }
            }else{
                st.push('e');
                break;
            }
        }
        if(st.empty()){
            answer++;
        }
        rotate(s);
    }
    
    return answer;
}