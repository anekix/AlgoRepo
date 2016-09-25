1) Bubble sort
```cpp
#include<iostream>
#include<vector>
#include<algorithm>


void bubble_sort(std::vector<int> &v){
    for( int i = 0; i < (v.size() - 1); i++){
        for( int j = 0; j < (v.size() - 1 - i) ; j++){
            if(v[i] < v[i+i]){
                std::swap(v[i], v[i+1]);
            }
        }
    }
}

int main(){
    std::vector<int> v = {1,9,8,7,6,5,3,2};
    bubble_sort(v);
    
    for(auto &e : v){
        std::cout<<e<<" ";
    }
    
    return 0;
}
```


2) Insertion sort

```cpp
#include<iostream>
#include<vector>
#include<algorithm>

void insertion_sort(std::vector<int>& v)
{
    for (int i = 1; i < v.size(); i++) {
        for (int j = i; j > 0 && v[j - 1] > v[j]; j--) {
        std::swap(v[j], v[j-1]):
        }
    }
}

int main(){
	std::vector<int> v = { 1, 7, 9, 2, 3, 8, 6, 5, 4};
	insertion_sort(v);
	
	for (auto &e : v) std::cout<<e<<" ";
	
	
	return 0;
	
}
```
