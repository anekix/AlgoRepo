#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<string> intersect(vector<string> v1,vector<string> v2){
vector<string> v3;

std::sort(v1.begin(), v1.end());
std::sort(v2.begin(), v2.end());

set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),back_inserter(v3));
return v3;
}

int main(){
vector<string> v1{"hello","delhi"};
vector<string> v2{"hello","world"};
vector<string> v3;
v3=intersect(v1,v2);
for(string n:v3) cout<<n<<endl;
return 0;
}