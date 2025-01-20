// Lv.2_JadenCase_문자열_만들기
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    bool temp = true;
    for(int i = 0; i < s.size(); i++){
        if(temp && s[i] >= 'a' && s[i] <= 'z'){
            temp = false;
            s[i] = s[i] + 'A' - 'a'; // toupper() 함수를 사용하는 방법도 있다.
        }
        else if(!temp && s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] - 'A' + 'a'; // tolower() 함수를 사용하는 방법도 있다.
        }
        if(s[i] == ' '){
            temp = true;
        }else{
            temp = false;
        }
    }
    answer = s;
    return answer;
}