#include<bits/stdc++.h>
using namespace std;


vector<int> pset(1000);

void initSet(int _size){
	pset.resize(_size);
	for(int i =0; i<_size; i++)
		pset[i] = i;
	
}

int findSet(int i){

	return (pset[i]==i)? i : (pset[i] = findSet(pset[i]));
}

void unionSet(int i, int j){

	pset[findSet(i)] = findSet(j);
}


bool isSameSet(int i, int j){

	return findSet(i) == findSet(j);
}

 int main()
{
	initSet(100);
	unionSet(2,3);
	unionSet(3,9);
	cout<<isSameSet(2,9)<<endl; //returns 1
	cout<<isSameSet(2,3)<<endl; //returns 1
	cout<<isSameSet(3,9)<<endl; //returns 1
	cout<<isSameSet(3,10)<<endl;//returns 0

	return 0;
}