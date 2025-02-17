#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<char> ch;
    for(int i = 0; i < s.size(); i++){
        ch.push_back(s[i]);
    }
    sort(ch.rbegin(), ch.rend());
    
    for(int i = 0; i < ch.size(); i++){
        answer += ch[i];
    }
    
    return answer;
}