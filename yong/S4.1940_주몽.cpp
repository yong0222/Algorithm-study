#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL); cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> mat(n);
    for(int i = 0; i < n; i++){
        cin >> mat[i];
    }
    sort(mat.begin(), mat.end());
    int count = 0;
    int start = 0; int end = mat.size()-1;
    while(start < end){
        if(mat[start]+mat[end]>m){
            end--;
        }else if(mat[start]+mat[end]==m){
            count++;
            start++;
        }else{
            start++;
        }
    }
    
    cout << count << endl;

    return 0;
}