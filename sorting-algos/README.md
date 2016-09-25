1) Merge sort
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
