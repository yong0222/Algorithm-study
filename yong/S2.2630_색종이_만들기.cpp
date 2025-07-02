#include <iostream>
#include <vector>

using namespace std;

int white_count;
int blue_count;
vector<vector<int> > paper;

void check(int row, int col, int size){ //row, col 종이 시작 위치
    int color = paper[row][col];
    bool flag = true;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(paper[row+i][col+j] != color){
                flag = false;
            }
        }
    }

    if(flag){
        if(color == 0){
            white_count++;
        }else{
            blue_count++;
        }
    }else{
        check(row, col, size/2);
        check(row+size/2, col, size/2);
        check(row, col+size/2, size/2);
        check(row+size/2, col+size/2, size/2);
    }

    return;
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;

    paper.resize(N, vector<int> (N, 0));

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> paper[i][j];
        }
    }

    check(0, 0, N);

    cout << white_count << "\n" << blue_count << "\n";

    return 0;
}