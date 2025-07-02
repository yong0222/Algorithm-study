#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, M;
    vector<long long> trees;
    int h = 0;
    int mid, low, high;
    
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        trees.push_back(temp);
    }

    sort(trees.begin(), trees.end());

    low = 0;
    high = trees[N-1];

    while(low < high){
        mid = (low + high) / 2;
        long long sum = 0;
        for(int i = 0; i < N; i++){
            if(trees[i] > mid){
                sum = sum + trees[i] - mid;
            }
        }
        if(sum >= M){
            if(h < mid){
                h = mid;
            }
            if(low == mid){
                break;
            }
            low = mid;
        }else{
            high = mid;
        }
    }
    
    cout << h << "\n";

    return 0;
}