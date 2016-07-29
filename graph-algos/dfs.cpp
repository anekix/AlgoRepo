#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#define MAX_N 5001
using namespace std;

//vector< vector<int> > g;
vector< vector<int> > g(100);//initialization is very important as it will segfault from mian loop if not initialized
bool visited[MAX_N];

void dfs(int start){
stack<int> s;
s.push(start);
while(!s.empty()){
int current = s.top();
s.pop();
visited[current] = true;
cout<<current<<"\n";
for(int i = 0; i < g[current].size() ; ++i){
	if(!visited[g[current][i]]){
	s.push(g[current][i]);
	visited[g[current][i]] = true;
	}
  }
 }
}
int main()
{
 
   g[0].push_back(1);
   g[0].push_back(2);
   g[2].push_back(3);
   g[3].push_back(4);
   dfs(0);
   return 0;
}
