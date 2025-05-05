#include <iostream>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;
    int nums[10002];

    for(int i = 1; i <= 10000; i++){
        nums[i] = 0;
    }

    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        nums[num]++;
    }
    int i = 1;
    int temp = 0;
    while(i <= 10000){
        if(temp < nums[i]){
            cout << i << "\n";
            temp++;
        }else{
            temp = 0;
            i++;
        }
    }

    return 0;
}