#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr); 
cout.tie(nullptr);

//min heap
/**
 * binary heap structure
 * parent <= child
 * smallest is the root
 * insert delete logN
 *
 */

priority_queue<int, vector<int>, greater<int>> minHeap;

//c++ STL 
//힙안에 저장할 자료형, 내부에서 사용할 컨테이녀, 비교기준 


int N;
cin>> N;
int insert;
for(int i=0;i<N;i++){
    cin>>insert;
    if(insert==0){
        if(minHeap.empty()){
            cout<<0<<" ";
        }
        else{
            cout<<minHeap.top()<<" ";
            minHeap.pop();
        }
        continue;
    }

    minHeap.push(insert);


}


return 0;
}