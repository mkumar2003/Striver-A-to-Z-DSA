#include <bits/stdc++.h>
using namespace std;

// Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have the same key values.
//it stores data in key value pair
//two types (i)multimap allows duplicate key
//          (ii)unodered map elements are not in order

void explainMap()
{
    map<int,int> m;
    map<int,pair<int,int>> q;

    //ways of accessing it
    m[0]=1;
    m.insert({1,2});

    for (auto i = m.begin(); i != m.end() ; i++)
    {
        cout<<i->first<<endl;
        cout<<"second key value pair : ";
        cout<<i->second<<endl;
    }  

    // or using forEach loop
    for(auto it:m){
        cout<<it.first <<"value : "<<it.second<<endl;
    } 

    //find in map 
    auto it = m.find(3);
    // cout<<*(it).second<<endl;

    auto ti = m.find(5);
    //if given element is not found it points to element after last elemnt of map.

    //rest other operations are same and upper and lower bound also works in same way.
}

int main()
{
    explainMap();
return 0;
}

// Multimap is similar to a map with the addition that multiple elements can have the same keys. Also, it is NOT required that the key-value and mapped value pair have to be unique in this case. One important thing to note about multimap is that multimap keeps all the keys in sorted order always. 

// unordered_map is an associated container that stores elements formed by the combination of a key value and a mapped value. The key value is used to uniquely identify the element and the mapped value is the content associated with the key. In the worst case, its time complexity can go from O(1) to O(n), especially for big prime numbers.