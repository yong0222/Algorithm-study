#include <iostream>

using namespace std;

int main(void){
    int N;
    cin >> N;
    int i = 0;
    int count = 0;
    int answer = 0;
    while(count < N){
        if(to_string(i).find("666") != string::npos){
            answer = i;
            count++;
        }
        i++;
    }
    
    cout << answer << endl;

    return 0;
}