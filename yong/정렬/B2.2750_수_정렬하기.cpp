#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main(void){
    int N;
    cin >> N;
    vector<int> nums;
    set<int> check;
    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        if(check.find(temp) == check.end()){
            nums.push_back(temp);
            check.insert(temp);
        }
    }

    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << endl;
    }

    return 0;
}