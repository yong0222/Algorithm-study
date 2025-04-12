#include <iostream>
#include <vector>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int S, P;
    cin >> S >> P;
    string str;
    cin >> str;
    vector<int> limits(4, 0); // A C G T 순서
    for(int i = 0; i < 4; i++){
        cin >> limits[i];
    }

    int count = 0;
    vector<int> chk(4, 0);
    for(int i = 0; i < P; i++){
        if(str[i] == 'A') chk[0]++;
        else if(str[i] == 'C') chk[1]++;
        else if(str[i] == 'G') chk[2]++;
        else chk[3]++;
    }
    for(int i = 0; i < 1; i++){
        bool valid = true;
        for(int j = 0; j < 4; j++){
            if(chk[j] >= limits[j]){
                continue;
            }else{
                valid = false;
                break;
            }
        }
        if(valid) count++;
    }
    for(int i = 0; i < S-P; i++){
        bool valid = true;
        if(str[i] == 'A') chk[0]--;
        else if(str[i] == 'C') chk[1]--;
        else if(str[i] == 'G') chk[2]--;
        else chk[3]--;
        
        if(str[i+P] == 'A') chk[0]++;
        else if(str[i+P] == 'C') chk[1]++;
        else if(str[i+P] == 'G') chk[2]++;
        else chk[3]++;
        
        for(int j = 0; j < 4; j++){
            if(chk[j] >= limits[j]){
                continue;
            }else{
                valid = false;
                break;
            }
        }
        if(valid) count++;
    }
    cout << count << "\n";

    return 0;
}