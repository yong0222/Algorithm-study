#include <iostream>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    int start = 1;
    int end = 1;
    int sum = 1;
    int count = 0;
    while(start <= n){
        if(sum == n) count++;
        if(sum >= n){
            sum = sum - start;
            start++;
        }else{
            end++;
            sum = sum + end;
        }
    }
    cout << count << endl;

    return 0;
}