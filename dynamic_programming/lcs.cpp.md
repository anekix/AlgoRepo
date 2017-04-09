```cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int lcs(string &s1, string &s2,int i, int j){
int dp[i+1][j+1];
int res = 0;
    for(int x=0;x<=i;x++)
         for(int y=0;y<=j;y++)
            dp[x][y]=-1;

if(i==0)return 0;
if(j==0)return 0;
if (dp[i][j] != -1) return dp[i][j];

if (s1[i] == s2[j])
	 res = 1 + lcs(s1,s2,i-1,j-1);
else
	 res = max(lcs(s1,s2,i,j-1),lcs(s1,s2,i-1,j));

dp[i][j] = res;
return res;
}

int main(){

string s1="abcdefk";
string s2="cdlef";
int r = lcs(s1,s2,s1.length()-1,s2.length()-1);
cout<<r;


	return 0;
}
```
