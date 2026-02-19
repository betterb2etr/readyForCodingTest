/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;
int N, M;
vector<int> arrN;
vector<int> arrM;

bool exists(int x) {
    int left = 0, right = N - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arrN[mid] == x) return true;
        else if (arrN[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin>>N;
    arrN.resize(N);
    for(int i=0;i<N;i++){
        cin>>arrN[i];
    }
    sort(arrN.begin(),arrN.end());

    cin>>M;
    arrM.resize(M);
    for(int i=0;i<M;i++){
          cin>>arrM[i];
    }

   for(int x:arrM){
       if(exists(x))cout<<1<<"\n";
       else cout<<0<<"\n";
   }



    return 0;
}

