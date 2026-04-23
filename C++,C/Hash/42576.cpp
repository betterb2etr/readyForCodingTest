#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <unordered_map>
using namespace std;


string solution(vector<string> participant, vector<string> completion) {
    string answer = "";

    unordered_map<string, int> freq;
    for(auto& person: participant){
        freq[person]++;
    }
    
    
    //중복거르기 
    for(auto& person: completion){
        freq[person]--;
    }
    
        // 카운트가 1 이상 남은 사람 = 완주 못한 사람
    for (auto& human : freq) {
        if (human.second >= 1) {  // ← human.first = 이름, human.second = 횟수
            answer = human.first;
            break; // 딱 한 명이므로 찾으면 바로 종료
        }
    }

    
    return answer;
}