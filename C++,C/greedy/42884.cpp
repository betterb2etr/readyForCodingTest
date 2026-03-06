#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// routes[i] = {진입지점, 진출지점}
int solution(vector<vector<int>> routes) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 1. 각 차량 경로를 "나가는 지점(끝점)" 기준으로 오름차순 정렬
    sort(routes.begin(), routes.end(),
         [](const vector<int>& a, const vector<int>& b) {
             if (a[1] == b[1]) return a[0] < b[0]; // 끝점 같으면 시작점 기준
             return a[1] < b[1];
         });

    // 2. 첫 번째 차량의 끝점에 카메라 하나 설치
    int answer = 1;
    int cameraPos = routes[0][1]; // 현재 카메라 위치

    // 3. 나머지 차량들을 차례대로 보면서, 카메라를 추가로 설치할지 결정
    for (int i = 1; i < (int)routes.size(); i++) {
        int start = routes[i][0];
        int end   = routes[i][1];

        // 현재 카메라 위치가 이 차량의 구간 안에 있으면 이미 단속됨
        // (start <= cameraPos <= end)
        if (start <= cameraPos && cameraPos <= end) {
            continue; // 새 카메라 불필요
        }

        // 그렇지 않으면, 이전 카메라로는 이 차량을 못 잡음
        // → 이 차량의 끝점에 새 카메라 설치
        answer++;
        cameraPos = end;
    }

    return answer;
}
/*
bool cmp(const vector<int>& a, const vector<int>& b) {
    // a가 b보다 앞에 와야 하면 true
}
sort(routes.begin(), routes.end(), cmp);

[](const vector<int>& a, const vector<int>& b) {
    if (a[1] == b[1]) return a[0] < b[0];
    return a[1] < b[1];
}



 */