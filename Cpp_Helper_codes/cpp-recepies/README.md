1) converting an string to int
```cpp
#include<iostream>
#include<sstream>

int main(){
std::string my_string = "10099";
int result;
std::stringstream convert_to_int(my_string);
convert_to_int>>result;

std::cout<<result+1;

return 0;
}
```

2) convert an int to string

```cpp
#include <sstream>
#include <string>
#include <iostream>

int main (void) {
int myNumber = 250;
std::string myString;
std::stringstream convertThis;
convertThis << myNumber;
myString = convertThis.str();
std::cout << "I saw "<<myString<<" birds" << std::endl;
return 0;
}


```
