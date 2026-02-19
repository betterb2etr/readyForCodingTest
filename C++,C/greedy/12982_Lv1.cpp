
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(), d.end());

    for(int x: d){

        budget-=x;
        if(budget<0)break;
        else{
            answer++
        }
    }

    return answer;
}