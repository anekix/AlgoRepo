```cpp
// REMEBER TO INITIALIZE THE LOOPS FROM 1 as in most graphs vertex starts from 1 not 0

#include <iostream>
#define MAX 1001
#define MAXINT 100000
using namespace std;  


int main(){

	int a[MAX][MAX];

	int v, x, y, e, w;

	cin >> e >> v;
	
	// initialise the graph
	for( int i = 0; i < MAX; i++ ){
		for( int j = 0; j < MAX; j++)
		a[i][j] = MAXINT;
	}
     


	// read the graph 
	for( int i = 1; i <= e; i++ ) { 
		cin >> x >> y >> w;
		a[x][y] = w;
		
	}
   
    for( int i = 1; i <=v; i++ ){
		for( int j = 1; j <= v; j++){
			 cout<<a[i][j]<< " ";
		}cout<<"\n";
	}
     
	// Run flyod-warshall algorithm
	for( int k  = 1; k <= v; k++ ){
		for( int i = 1; i <= v; i++ ){
			for( int j = 1; j <= v; j++ ){
				if (a[i][j] > a[i][k] + a[k][j]){
					a[i][j] = a[i][k] + a[k][j];
				}
			}
		}
	}
	return 0;
}
```
