#include <bits/stdc++.h>
using namespace std;

void explainStack()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(10);
    
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.size()<<endl;

}

void explainQueue()
{
    queue<int> s;
    s.push(1);
    s.push(2);
    s.emplace(3);
    s.back() = s.back() + 5 ;
    cout<<"back part : " <<s.back()<<endl;
    cout<<"front part : " <<s.front()<<endl;
    s.pop();
    cout<<"front part : " <<s.front()<<endl;
}

int main()
{
      //explainStack();
      explainQueue();
return 0;
}