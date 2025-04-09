#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int n, k;
    cin >> n >> k;
    int n2 = n;
    vector<int> ans;
    vector<int> people(n, 0);
    for(int i = 0; i < n; i++){
        people[i] = i+1;
    }

    int index = 0;
    for(int i = 0; i < n2; i++){
        for(int j = 0; j < k-1; j++){
            index = (index+1) % n;
        }
        n--;
        ans.push_back(people[index]);
        people.erase(people.begin()+index);
    }

    cout << "<";
    for(int i = 0; i < n2; i++){
            cout << ans[i];
            if(i < n2-1){
                cout << ", ";
            }
        }
        cout << ">\n";

    return 0;
}