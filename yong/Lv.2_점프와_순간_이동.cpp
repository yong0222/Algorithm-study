#include <iostream>
using namespace std;

int bit_count(int n){
    int count = 0;
    
    while(n != 0){
        if(n % 2 == 1){
            count++;
        }
        n = n / 2;
    }
    
    return count;
}

int solution(int n)
{
    int ans = 0;
    
    ans = bit_count(n);

    return ans;
}