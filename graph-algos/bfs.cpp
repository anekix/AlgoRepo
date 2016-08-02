#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector< vector<int> > g(100);//always initialize or resize in main otherwise it will segfault
bool visited[10000];
int dist[10000];

void bfs( int s ){
        queue<int> q;
        q.push(s);
        dist[s] = 0;
        visited[s] = true;
        while(!q.empty()){
                int u = q.front();
                cout<<"visited "<<u<<",";
                q.pop();
                for(int i = 0; i < g[u].size(); i++){
                int v = g[u][i];
                if (!visited[v]){
                        visited[v] = true;
                        dist[v] = dist[u] + 1;
                        q.push(v);
                }
                }
        }

}

int main(){
   // read graph here and call bfs(start);
   return 0;
   }
