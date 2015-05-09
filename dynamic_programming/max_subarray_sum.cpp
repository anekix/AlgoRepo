/*
Arisen in vain to a life,
Bleeding inner to suffer with time.
Endlessly lost and still searching
For something, someday.
 
Obsession & deceit
To burn a mark for a lifetime.
Boundaries to brake,
Reached from the edge of time.
To rebuild the past
For something that will everlast.
Just searching for to find itself
In still-motion.
 
For to hope,
Whenever to find a closure,
Find itself in still-motion..
 
Get closer,
Closer to your own faith.
 
Serve the frail mind,
Escape through the lifetime
To glance for your dismal youth.
 
Get closer,
Closer to your own faith.
*/

//explanation:
//http://www.8bitavenue.com/2011/11/dynamic-programming-maximum-contiguous-sub-sequence-sum/
#include<iostream>
using namespace std;

int findMax(int a[], int n){
    int * M = new int[n];
    M[0] = a[0];
    for(int i=1; i<n; i++)
        M[i] = max(M[i-1] + a[i], a[i]);
    int ans = M[0];
    for(int i=1; i<n; i++)
        ans = max(ans, M[i]);

    return ans;
}

int main(){

int array[]={1,5,-10,5,-1,10};
int n=sizeof(array)/sizeof(array[0]);
cout<<findMax(array,n);
return 0;
}
