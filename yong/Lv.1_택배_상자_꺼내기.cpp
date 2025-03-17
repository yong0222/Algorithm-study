#include <string>
#include <vector>

using namespace std;

int solution(int n, int w, int num) {
    int answer = 0;
    
    vector<vector<int>> v(100, vector<int>(w));
    
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[0].size(); j++){
            v[i][j] = 0;
        }
    }
    int i = 0;
    int j = 0;
    int count = 1;
    while(count <= n){
        v[i][j] = count;
        if(i % 2 == 0 && count % w != 0){
            j++;
        }else if(i % 2 == 0 && count % w == 0){
            i++;
        }else if(i % 2 == 1 && count % w != 0){
            j--;
        }else{
            i++;
        }
        count++;
    }
    int x = 0; int y = 0;
    for(x = 0; x < v.size(); x++){
        for(y = 0; y < v[0].size(); y++){
            if(v[x][y] == num){
                break;
            }
        }
        if(v[x][y] == num){
                break;
            }
    }
    
    while(true){
        if(v[x][y] != 0){
            answer++;
            x++;
        }else{
            break;
        }
    }
    
    return answer;
}