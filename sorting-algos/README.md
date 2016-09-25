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

slighty better insertion sort
```cpp
void insertion_sort(std::vector<int>& array) {
    for (auto it = array.begin(), end = array.end(); it != end; ++it) {
        // 1. Search
        auto const insertion_point =
            std::upper_bound(array.begin(), it, *it);

        // 2. Insert
        std::rotate(insertion_point, it, it + 1);
    }
}
```
