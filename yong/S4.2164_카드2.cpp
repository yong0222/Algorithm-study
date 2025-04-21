#include <iostream>
#include <deque>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); // 입출력 속도 최적화
    cin.tie(NULL); cout.tie(NULL);    // 입출력 묶음 해제

    int N;
    cin >> N;
    deque<int> cards;
    for(int i = 0; i < N; i++){
        cards.push_back(i+1);
    }

    while(cards.size() > 1){
        cards.pop_front();
        if(cards.size() == 1){
            break;
        }
        int temp = cards.front();
        cards.pop_front();
        cards.push_back(temp);
    }

    cout << cards.front() << "\n";

    return 0;
}