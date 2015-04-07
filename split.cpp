#include<iostream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;

vector<string> split(string str){
istringstream ss(str);
string token;
vector<string> newstring;
while(getline(ss, token, ' ')) {
	newstring.push_back(token);
}
  return newstring;

}

int main(){
vector<string> s;
s=split("hello this is kshitij");
cout<<"size:"<<s.size()<<endl;
for( int i=0;i<s.size();i++) cout<<s[i]<<endl;
return 0;

}

	