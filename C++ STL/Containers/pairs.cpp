#include <bits/stdc++.h>
using namespace std;
//pairs are present in utility library..
void explainpair()
{
    pair<int,int> p={1,2};
    cout<<"first element : " <<p.first<<"\t"<<"second element : "<<p.second;

    pair<int,pair<int,int>> q = {1,{2,3}};
    cout<<"first element : "<<q.first<<endl;
    cout<<"second element : "<<q.second.first<<endl;
    cout<<"third element : "<<q.second.second<<endl;

    pair<int,int> a[] = {{1,2},{5,8},{6,9}};
    cout<<a[1].first;
}

int main()
{
    explainpair();
return 0;
}