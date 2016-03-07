#include<bits/stdc++.h>
using namespace std;
#define MAX 3001
#define INF INT_MAX
#define pii pair< int, int >
#define pb(x) push_back(x)
 
int main() {
int i, u, v, w, sz, nodes, edges, starting;
int t;
cin>>t;
while(t--){
        priority_queue< pii, vector< pii >, greater< pii > > Q;
        vector< pii > G[MAX];
        int D[MAX];
        bool F[MAX];
        // create graph
        scanf("%d %d", &nodes, &edges);
        for(i=0; i<edges; i++) {
            scanf("%d %d %d", &u, &v, &w);
            G[u].pb(pii(v, w));
            G[v].pb(pii(u, w)); // for undirected
        }
        scanf("%d", &starting);
        // initialize distance vector
        for(i=1; i<=nodes; i++) { D[i] = INF; F[i] = 0;}
        D[starting] = 0;
        Q.push(pii(0 ,starting));
        // dijkstra
        while(!Q.empty()) {
            u = Q.top().second;
            Q.pop();
            if(F[u]) continue;
            sz = G[u].size();
            for(i=0; i<sz; i++) {
                v = G[u][i].first;
                w = G[u][i].second;
                if(!F[v] && D[u]+w < D[v]) {
                    D[v] = D[u] + w;
                    Q.push(pii( D[v], v));
                }
            }
        F[u] = 1; // done with u
        }
// result
for(i=1; i<=nodes; i++){
if(i!=starting){
if(D[i]==INF)
cout << -1 << " ";
else
cout << D[i] << " ";
}
 
}
cout << endl;
}
return 0;
}