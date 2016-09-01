One of the key things that constexpr gives you that was not really possible to achieve before
is the ability to call a function in a context that requires a compile time constant. 
The simplest example of this is an array size:
```cpp
#include <iostream>
using namespace std;
constexpr auto square(int x) { return x * x; }

int main()
{
    int arr[square(2)] = { 0, 1, 2, 3 };
    cout << arr[square(1)] << endl;
}
```
Without the constexpr on function square() it could not be called in the definition of arr since an array size is required to be a compile time constant.
