#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;

    vector<pair<int, int> > vect;
    vector<int> sol(N);

    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        pair<int, int> a = make_pair(temp, i);
        vect.push_back(a);
    }

    sort(vect.begin(), vect.end());
    
    int temp = vect[0].first;
    sol[0] = 0;
    int count = 0;
    for(int i = 1; i < N; i++){
        if(temp < vect[i].first){
            count++;
            temp = vect[i].first;
        }
        sol[vect[i].second] = count;
    }

    for(int i = 0; i < N; i++){
        cout << sol[i] << " ";
    }

    return 0;
}