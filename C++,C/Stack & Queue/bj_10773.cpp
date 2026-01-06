#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack> 
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K;
    cin>>K;
    int temp=0;
    stack<int> money;
    int sum =0; 
    
    for(int i=0;i<K;i++){
        cin >> temp;
        if(temp>0) money.push(temp);
        else if(temp==0)money.pop();
    }
    
    while(!money.empty()){
        sum+=money.top();
        money.pop();
    }
    
    cout<<sum;
    return 0;
}
