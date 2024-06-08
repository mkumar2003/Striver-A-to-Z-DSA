#include <bits/stdc++.h>
using namespace std;

///set must be sorted + unique ..

//other set available (i)multiset - duplicate values are allowed.
//                     (ii)unordered set - no order of elements.

//every opertion takes logrithmic time

void explainSets()
{  
    set<int> s;
    s.insert(1);
    s.emplace(2);
    s.insert(3);
    s.insert(4);          

    auto it = s.find(3);  //returns an iterator where element is found
    cout<<"elemnt fund at : "<<*(it)<<endl;
    auto ti = s.find(6);  //returns iterator pointing next to last element(if not found)
    cout<<"element found at : "<<*(ti)<<endl;

    //erase
    s.erase(5);  //erases element 5 it takes logarathmic time
    auto it = s.find(3);
    s.erase(it);   // takes constant time

    // s.erase(it1,it2)  //after erase {1,4,5} [first,last)

    auto it = s.lower_bound(2);  //returns iterator if found else returns iterator of elment just greater than 2
    auto ti = s.upper_bound(1); //always returns iterator greater than 1 in this case
}  

int main()
{
    explainSets();

return 0;
}

// Multisets are a type of associative containers similar to the set, with the exception that multiple elements can have the same values. Some Basic Functions associated with multiset: 

// begin() – Returns an iterator to the first element in the multiset –>  O(1)
// end() – Returns an iterator to the theoretical element that follows the last element in the multiset –> O(1)
// size() – Returns the number of elements in the multiset –> O(1)
// max_size() – Returns the maximum number of elements that the multiset can hold –> O(1)
// empty() – Returns whether the multiset is empty –> O(1)
// insert (x) – Inserts the element x in the multiset –> O(log n)
// clear () – Removes all the elements from the multiset –> O(n)
//  erase(x) – Removes all the occurrences of x –> O(log n)

// An unordered_set is an unordered associative container implemented using a hash table where keys are hashed into indices of a hash table so that the insertion is always randomized. All operations on the unordered_set take constant time O(1) on an average which can go up to linear time O(n) in the worst case

// In std::unordered_set, many functions are defined among which the most used functions are:

// The size() and empty() for capacity.
// The find() for searching a key.
// The insert () and erase() for modification.

// Here upper_bound and lower_bound does not works