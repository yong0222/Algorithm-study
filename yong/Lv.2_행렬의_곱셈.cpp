#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int row1 = arr1.size(); int col1 = arr1[0].size();
    int row2 = arr2.size(); int col2 = arr2[0].size();
    vector<vector<int>> answer(row1, vector<int>(col2));
    
    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col2; j++){
            int temp = 0;
            for(int k = 0; k < col1; k++){
                temp = temp + arr1[i][k]*arr2[k][j];
            }
            answer[i][j] = temp;
        }
    }
    return answer;
}