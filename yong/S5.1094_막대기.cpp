#include <iostream>

using namespace std;

int bitcount(int a){
    int num = 0;
    while(a != 0){
        if(a % 2 == 1){
            num++;
        }
        a = a / 2;
    }
    return num;
}

int main(void){
    int n;
    cin >> n;
    cout << bitcount(n) << endl;

    return 0;
}