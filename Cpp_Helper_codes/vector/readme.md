<b>1) Adding elements to the vector</b>
```cpp
   vector<string> SS;

   SS.push_back("The number is 10");
   SS.push_back("The number is 20");
   SS.push_back("The number is 30");
```
<b>2) Iterating elements of a vector</b>
<br>
Looping by index
   ```cpp
   for(int i=0; i < SS.size(); ii++)
   {
      cout << SS[ii] << endl;
   }
   ```
Abbreviated loop
```cpp
  for (auto& v : SS){
        cout << v << endl;
    }
```

Forward iterate using constant iterator
```cpp
  vector<string>::const_iterator cii;
   for(cii=SS.begin(); cii!=SS.end(); cii++)
   {
      cout << *cii << endl;
   }
```
Reverse iterating 
```cpp
vector<string>::reverse_iterator rii;
   for(rii=SS.rbegin(); rii!=SS.rend(); ++rii)
   {
      cout << *rii << endl;
   }
  ```

<b>3) Get front and back of a vector</b>
   ```cpp
   cout << SS.front() << endl;
   cout<< SS.back() <<endl;
   ```
<b>4) Copy to another vector

   ```cpp
   vector <string> TT(SS);
   cout << TT.size() << endl;
   ```
<b>5) Swap two elements of a vector</b>
```cpp
swap(SS[0], SS[2]);
```
<b>6) Apeend a vector to another vector
```cpp
vector<int> a;
vector<int> b;
a.push_back(20); a.push_back(40);
b.push_back(60); b.push_back(60);
a.insert(a.end(), b.begin(), b.end());
```

<b>7) destroy the last element of vector</b>
```cpp
std::vector<int> myvector;
int sum (0);
myvector.push_back (100);
myvector.push_back (200);
myvector.push_back (300);

while (!myvector.empty())
{
 sum+=myvector.back();
 myvector.pop_back();
}
```

 


   //Assigning to vectors----------------------
   TT.assign(SS.begin(), SS.end());
   cout << "TT = " << endl;
   for (auto& v : TT) cout << v << endl;
   cout << endl;
   cout << TT.size() << endl;

   TT.assign(7, "XC");
   cout << "TT = " << endl;
   for (auto& v : TT) cout << v << " ";
   cout << endl;
   cout<<TT.size() << endl;

   TT.assign({ "GF","HI","JK"});
   for (auto& v : TT) cout << v << " ";
   cout << endl;
   cout<<TT.size() <<endl;
   //------------------------------------------
   
   //Erasing in vector-------------------------
    vector <int> vec;
    vector <int>::iterator pos;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    cout << "Capacity = " << vec.capacity() << endl;
    cout << "vec =";
    for (pos = vec.begin(); pos != vec.end(); ++pos)
    {
        cout << " " << *pos;
    }        
    cout << endl;

    vec.erase(vec.begin());
    cout << "vec = ";
    for (pos = vec.begin(); pos != vec.end(); ++pos)
    {
        cout << " " << *pos;
    }
    cout << endl;

    vec.erase(vec.begin() + 1, vec.begin() + 3);
    cout << "vec = ";
    for (pos = vec.begin(); pos != vec.end(); ++pos)
    {
        cout << " " << *pos;
    }     
    cout << endl;
    cout << "Capacity after erase calls = " << vec.capacity() << endl;
   //------------------------------------------

   
   
   //Shrink-to-fit in vector-------------------
   vector <int> V;
   V.push_back(1);
   cout << "Current capacity of V = " << V.capacity() << endl;
   V.reserve(20);
   cout << "Current capacity of V = " << V.capacity() << endl;
   V.shrink_to_fit();
   cout << "Current capacity of V = " << V.capacity() << endl;
   //------------------------------------------
 

}
