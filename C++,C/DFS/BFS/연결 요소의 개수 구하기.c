#include <iostream>
#include <vector>
using namespace std;

static vector<vector <int>> A;
static vector<bool> visited;
void DFS(int v);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 

    int n,m;

    int n, m;
    cin >> n >> m;
    A.resize(n + 1);
    visited = vector<bool>(N+1, false);

    for(int i=0;i<m;i++){
        if(!visited[i]){
            DFS(i);
        }
    }
    cout<<count<<"\n";

}

void DFS(int v){
    if(visited[v]) return;
    visited[v] = true;

    for(int i: A[v]){
        if(visited[i]==false){
            DFS(i);
        }
    }
}