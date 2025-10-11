#include <iostream>
using namespace std;

/**
 * 구간합
 * 구간마다 합을 계속 계산하면 제한시간안에 합계산을 끝낼 수 없음. 
 * 구간 합 개념을 적용하는 가장 기본적인 문제 
 */
int main(){
    ios::sync_with_stdio;
    cin.tie(NULL);cout.tie(NULL);

    int suNo, quizNo;
    cin>>suNo>> quizNo;
    int sum[100001]={};
    for(int i=1;i<=suNo;i++){
        int temp;
        cin>>temp;
        sum[i]=sum[i-1] + temp;

    }
    for(int i=0;i<quizNo;i++){
        int start,end;
        cin>>start>>end;
        cout<<sum[end]-sum[start-1]<<"\n";
    }
}