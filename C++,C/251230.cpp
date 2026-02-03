#include <vector>
#include <iostream> 
#include <algorithm>
#include <string>
#include <unordered_map>

using namespace std;    

string solution (vector<string> participant, vector<string> completion) {

    unordered_map<string, int> countMap;

    for (string name : participant){
        countMap[name]++;   
    }

    for (string name: completion)  {
        countMap[name]--;   
    } 
    for (auto pair : countMap) {
        if (pair.second > 0) {
            return pair.first;   
        }
    }

    for (auto pair: countMap){
        if(pair.second >0){
            return pair.first;
        }
    }
    
    return ""; // This line should never be reached if input is valid
}