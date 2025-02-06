#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 1;
    if(a >= b){
        int temp = a;
        a = b;
        b = temp;
    }
    while(!(a % 2 == 1 && a + 1 == b)){
        answer++;
        a = (a - 0.5) / 2 + 1;
        b = (b - 0.5) / 2 + 1;
    }

    return answer;
}