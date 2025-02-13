#include <string>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    list<string> cache;
        
    for(int i = 0; i < cities.size(); i++){
        transform(cities[i].begin(), cities[i].end(), cities[i].begin(), ::tolower);
        
        auto it = find(cache.begin(), cache.end(), cities[i]);
        
        if(!cache.empty() && it != cache.end()){
            answer += 1;
            cache.erase(it);
            cache.push_back(cities[i]);
        }else{
            answer += 5;
            cache.push_back(cities[i]);
            if(cache.size() > cacheSize){
                cache.pop_front();
            }
        }
    }
    
    return answer;
}