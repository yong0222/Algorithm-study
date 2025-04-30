#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int N;
    cin >> N;
    int P[N];
    for(int i = 0; i < N; i++){
        cin >> P[i];
    }

    sort(P, P+N);

    int answer = 0;

    for(int i = 1; i <= N; i++){
        int sum = 0;
        for(int j = 0; j < i; j++){
            sum = sum + P[j];
        }
        answer = answer + sum;
    }

    cout << answer << endl;

    return 0;
}