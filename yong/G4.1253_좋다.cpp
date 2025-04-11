#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n, 0);
    int count = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for(int k = 0; k < n; k++){
        int target = a[k];
        int i = 0;
        int j = n-1;
        while(i < j){
            if(i == k){i++; continue;}
            if(j == k){j--; continue;}
            int sum = a[i] + a[j];
            if(target == sum){
                count++;
                break;
            }else if(target > sum){
                i++;
            }else{
                j--;
            }
        }
    }

    cout << count << "\n";

    return 0;
}