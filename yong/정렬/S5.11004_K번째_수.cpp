#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, K;
    vector<int> A;

    cin >> N >> K;
    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        A.push_back(temp);
    }

    sort(A.begin(), A.end());
    cout << A[K-1] << "\n";

    return 0;
}