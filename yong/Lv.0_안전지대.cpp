#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int n = board.size();
    vector<vector<int>> temp(n+2, vector<int>(n+2, 0));
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            temp[i+1][j+1] = board[i][j];
        }
    }
    
    for(int i = 0; i < n+2; i++){
        for(int j = 0; j < n+2; j++){
            if(temp[i][j] == 1){
                if(temp[i-1][j-1] != 1) temp[i-1][j-1] = 2;
                if(temp[i-1][j] != 1)   temp[i-1][j] = 2;
                if(temp[i-1][j+1] != 1) temp[i-1][j+1] = 2;
                if(temp[i][j-1] != 1)   temp[i][j-1] = 2;
                if(temp[i][j+1] != 1)   temp[i][j+1] = 2;
                if(temp[i+1][j-1] != 1) temp[i+1][j-1] = 2;
                if(temp[i+1][j] != 1)   temp[i+1][j] = 2;
                if(temp[i+1][j+1] != 1) temp[i+1][j+1] = 2;
            }
        }
    }
    
    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < n+1; j++){
            if(temp[i][j] == 0) answer++;
        }
    }
    
    return answer;
}