#include <iostream>
#include <string>
#include <stack>

using namespace std;

int solution(string s)
{
    int answer = -1;
    stack<char> st;
    st.push('0');
    
    for(int i = 0; i < s.size(); i++){
        if(st.top() == s[i]){
            st.pop();
        }else{
            st.push(s[i]);
        }
    }
    if(st.top() == '0'){
        answer = 1;
    }else{
        answer = 0;
    }

    return answer;
}