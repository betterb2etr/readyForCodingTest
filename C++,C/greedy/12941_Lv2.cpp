#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//12943, lv2

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    sort(A.begin(),A.end()); // 오름차순 정렬
    sort(B.begin(), B.end(), greater<int>()); // 내림차순

    for(int i=0;i<A.size();i++){
        answer += (A[i]*B[i]);
    }


    return answer;
}