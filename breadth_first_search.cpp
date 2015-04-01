#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;
map < int, vector<int> > graph {
{0,{1,3}},
{1,{0,2,3}},
{2,{1,3,4}},
{3,{0,1,2,4}},
{4,{2,3}}
};

map<int,bool> discovered;//keeps track if a node has been reached
map<int,int>  parent;//stores the nodes ancestor that discovered it for the first time
map<int,int>  distances;//stores the distance to reach each node from the source
vector <int> visited;

void clearGraph()
{
    for(map<int,int>::iterator iter = distances.begin(); iter != distances.end(); iter++)
        distances[iter->first] = -1;
    for(map<int,int>::iterator iter = parent.begin(); iter != parent.end(); iter++)
        parent[iter->first] = -1;
    for(map<int,bool>::iterator iter = discovered.begin(); iter != discovered.end(); iter++)
        discovered[iter->first] = false;
}

void bfs(int start)
{
    int current;//current node being processed
    int next;//reached node by current
    unsigned int i;
    queue<int> vertices;//vertices to process
    distances[start] = 0;
    discovered[start] = true;
    vertices.push(start);
    while(!vertices.empty())
    {
        current = vertices.front();
        visited.push_back(current);
	vertices.pop();
        
        for(i = 0; i < graph[current].size(); i++)//for each node connected to current
        {
            next = graph[current][i];
            if(!discovered[next])//if it hasn't been reached
            {
            	discovered[next] = true;//mark it as reached
                parent[next] = current;//store its parent
                distances[next] = distances[current]+1;//save the distance
                vertices.push(next);//push it to the queue for further analysis
            }
        }
    }
}


int main()
{
int start=2;
clearGraph();
bfs(2);
vector<int> ::iterator vii;
for(vii=visited.begin();vii!=visited.end();vii++)
cout<<*vii<<" ";
cout<<endl;
map<int,int>::iterator mii;
for(mii=distances.begin();mii!=distances.end();mii++)
cout<<"distance of "<<(*mii).first<<":"<<(*mii).second<<endl;


return 0;
}