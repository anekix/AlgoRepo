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
3) Heap sort

```cpp
#include<iostream>
#include<algorithm>
#include<vector>

int max_heapify(std::vector<int>& v, int i,int len){

    int l = 2*i;
    int r = 2*i + 1;
    int largest = 0;

    if( (l < len) && (v[l] > v[i]) ){

        largest = l;
    }
    else{
        largest = i;
    }

    if ( (r<len) && (v[r] > v[largest]) ){
        largest = r;
    }
    if ( largest != i){

        std::swap(v[i], v[largest]);
        max_heapify(v, largest,len);
    }

    return 0;
}


int build_max_heap(std::vector<int> &v){

    for( int i = v.size()/2; i > 0; i--){
        max_heapify(v, i,v.size());

    }
    return 0;

}

int heap_sort(std::vector<int>& v){
    build_max_heap(v);
    int length = v.size();
    for( int i = length-1 ; i>=1; i--){
        std::swap(v[1], v[i]);
        length--;
        max_heapify(v, 1,i);
    }

}

int main(){
std::vector<int> v = { 0  , 1, 2, 9, 8, 3, 4, 7, 6, 5};
heap_sort(v);

for(auto& e : v) std::cout<<e<<" ";

return 0;   
}
```
