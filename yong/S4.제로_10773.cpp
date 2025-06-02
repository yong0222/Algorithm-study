#include <iostream>
#include <stack>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    stack<int> nums;
    int K;

    cin >> K;

    for(int i = 0; i < K; i++){
        int temp;
        cin >> temp;

        if(temp){
            nums.push(temp);
        }else{
            nums.pop();
        }
    }

    long long sum = 0;
    int len = nums.size();
    for(int i = 0; i < len; i++){
        sum = sum + nums.top();
        nums.pop();
    }

    cout << sum << "\n";


    return 0;
}