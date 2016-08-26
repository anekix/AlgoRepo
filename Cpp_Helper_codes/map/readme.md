<b>1) inserting into map</b>
```cpp
map<string, int> Employees;
// Examples of assigning Map container contents
// 1) Assignment using array index notation
Employees["Mike C."] = 5234;
Employees["Charlie M."] = 3374;

// 2) Assignment using member function insert() and STL pair
Employees.insert(std::pair<string,int>("David D.",1923));

// 3) Assignment using member function insert() and "value_type()"
Employees.insert(map<string,int>::value_type("John A.",7582));

// 4) Assignment using member function insert() and "make_pair()"
Employees.insert(std::make_pair("Peter Q.",5328));

cout << "Map size: " << Employees.size() << endl;

for( map<string, int>::iterator ii=Employees.begin(); ii!=Employees.end(); ++ii)
{
 cout << (*ii).first << ": " << (*ii).second << endl;
}
```
The first version:

```cpp
function[0] = 42; // version 1
```
may or may not insert the value 42 into the map. If the key 0 exists, then it will assign 42 to that key, overwriting whatever value that key had. Otherwise it inserts the key/value pair.

The insert functions:
```cpp
function.insert(std::map<int, int>::value_type(0, 42));  // version 2
function.insert(std::pair<int, int>(0, 42));             // version 3
function.insert(std::make_pair(0, 42));                  // version 4
```
on the other hand, don't do anything if the key 0 already exists in the map. If the key doesn't exist, it inserts the key/value pair.

<b>2) iterating a map</b>
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
<b>3) iterating a map shorter version</b>
```cpp
std::map<int, int> items;
for (auto & kvp : items)
{
    std::cout << kvp.first << std::endl;
    std::cout << kvp.second << std::endl;
}
```
