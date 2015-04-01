#include<iostream>
using namespace std;
int BS_recursive(int [],int,int ,int);
int BS_iterative(int [],int,int, int);

int main(){
	int x[]={1,2,3,4,5,6,7,8,9,10};
	int r=BS_recursive(x,0,9,9);
	int s=BS_iterative(x,0,9,9);
	cout<<r<<s;
	return 0;
}
int BS_recursive(int sorted_list[], int low, int high, int element)
{
    if (high < low)
        return -1;
    int middle =(low +low)/2;
    if (element < sorted_list[middle])
        return BS_recursive(sorted_list, low, middle-1, element);
    else if (element > sorted_list[middle])
        return BS_recursive(sorted_list, middle+1, high, element);
    else
        return middle;
}
int BS_iterative(int sorted_list[], int low, int high, int element)
{
    int middle;
    while (low <= high)
    {
        middle = low + (high - low)/2;
        if (element > sorted_list[middle])
            low = middle + 1;
        else if (element < sorted_list[middle])
            high = middle - 1;
        else
            return middle;
    }
    return -1;
}
