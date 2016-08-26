<b>1) iterating a map</b>
```cpp
std::map<int, int> m;
m.insert(std::pair<int, int>(3, 4));
m.insert(std::pair<int, int>(5, 6));
for(std::map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
{
	int key = it->first;
	int value = it->second;
	//Do something
}
```
<b>2) iterating a map shorter version</b>
```cpp
std::map<int, int> items;
for (auto & kvp : items)
{
    std::cout << kvp.first << std::endl;
    std::cout << kvp.second << std::endl;
}
```
