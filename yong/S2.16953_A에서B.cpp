#include <iostream>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int A, B;
    cin >> A >> B;
    int count = 1;

    while(B > A){
        if(B % 2 == 0){
            B = B / 2;
        }else if(B % 10 == 1){
            B = B / 10;
        }else{
            break;
        }
        count++;
    }
    if(A != B){
        count = -1;
    }

    cout << count << "\n";

    return 0;
}