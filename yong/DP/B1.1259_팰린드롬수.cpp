#include <iostream>

using namespace std;

int main(void){
    string input;

    cin >> input;

    while(input != "0"){
        int word_size = input.size();
        string answer;
        for(int i = 0; i < word_size/2+1; i++){
            if(input[i] == input[word_size-1-i]){
                answer = "yes";
            }else{
                answer = "no";
                break;
            }   
        }
        cout << answer << endl;
        cin >> input;
    }

    return 0;
}