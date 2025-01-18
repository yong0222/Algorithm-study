#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<string> str;
    vector<int> num;
    int index = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] != ' '){
            if (str.size() <= index) {
                str.push_back(""); // 벡터 크기가 부족할 경우 새로운 문자열 할당
            }
            str[index] += s[i];
        }else{
            index++;
        }
    }

    for (int i = 0; i < str.size(); i++) { // size_t는 unsigned 타입
        cout << str[i] << " ";
    }

    for(int i = 0; i < str.size(); i++){
        num.push_back(stoi(str[i])); // stoi는 string을 int로 변환
    }

    int max = num[0];
    int min = num[0];
    for(int i = 0; i < num.size(); i++){
        if(num[i] > max){
            max = num[i];
        }
        if(num[i] < min){
            min = num[i];
        }
    }
    answer = to_string(min) + " " + to_string(max);

    return answer;
}