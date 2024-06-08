#include <bits/stdc++.h>
using namespace std;

/*Vectors in STL are basically dynamic arrays that have the ability to change size 
whenever elements are added or deleted from them. 
Vector elements can be easily accessed and traversed using iterators.
 A vector stores elements in contiguous memory locations.
 vector uses singly linked list for its operations. */

void explainVector()
{
    vector<int> v ;

    //two ways of inserting elements in vectors
    // Use emplace_back when you want to construct the element in place at the end of the container, which can be more efficient.
    // Use push_back when you have an existing object that you want to add to the container, and it may involve a copy or move operation.

    v.emplace_back(1);  // Constructs an int with value 1 at the end of the vector
    v.push_back(2);     // Adds an int with value 2 to the end of the vector (copy or move)


    vector<pair<int,int>> p;
    p.push_back({5,10});
    p.emplace_back(15,20);      ///syntax diffrence between them


    vector<int> q(5,100);        //vector with default data elements.
           
    vector<int> v2(q);             //copying one vector to other.   
                         
    //cout<<p[0].first;           //1st way for accessing data..


    vector<int> v1;
    v1.emplace_back(10);
    v1.emplace_back(20);
    v1.emplace_back(30);
    v1.emplace_back(40);
    v1.emplace_back(50);

    //iterator         
      auto it = v1.begin();  //or vector<int>::iterator it = v1.begin()
     
   
    // for (vector<int>::iterator/* auto */  i = v1.begin(); i != v1.end(); i++)
    // {
    //     cout<<*(i)<<"\t";
    // }

    //easy format

    for (auto i = v1.begin(); i != v1.end(); i++)
    {
        cout<<*(i)<<"\t";
    }
    
    //second way is using forEach loop  iterator it on vector v for each elemnt
    for(auto it : v){
        cout<<it<<"\n";
    }

    //erase operation
    //v.erase(v.begin()+1);
    //in range
    //original vector= { 10,20,12,30,35} after operation {10,20,35} [start,end)
    //v.erase(v.begin()+2  , v.begin() + 4)

    //insert function
     vector<int>t(2,100);  //{100,100}
     t.insert(v.begin(),300); //{300,100,100}
     t.insert(t.begin()+1,2,10); //{300,10,10,100,100}
    
    for (auto i = t.begin(); i < t.end(); i++)
    {
        cout<<*(i)<<"";
    }
    

    cout<<v1.size()<<endl;  //returns total no of elmnts
    v1.pop_back();  //pops the last elemnt from vectors
    v1.swap(v2);    //swaps content of v2 with v1
    v1.clear();  //erases the entire vector
    v1.empty();   //returns true if vector is empty otherwise false
}

int main()
{
    explainVector();

return 0;
}