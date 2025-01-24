#include <string>
#include <vector>

using namespace std;

int bitCount(int n){
    int count = 0;
    while(n != 0){
        if(n % 2 == 1){
            count++;
        }
        n = n / 2;
    }
    return count;
}

int solution(int n) {
    int i = n + 1;
    while(true){
        if(bitCount(n) == bitCount(i)){
            break;
        }
        i++;
    }
    return i;
}