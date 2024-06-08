#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
    
    string name ="123";

    //it is advisable to sort string before finding permutations
    sort(name.begin(),name.end());
    cout<<"permutations of given string : "<<endl;
    do                     
    {
         cout<<name<<"\t";
    } while (next_permutation(name.begin(),name.end()));
    cout<<endl;


    //minimum and maximum element

    int a[]={10,20,25,45,5,2,19};
    int maxi = *max_element(a,a+7);    //MAX_ELEMENT RETURNS ADDRESS OF MAX ELEMENT..
    cout<<"maximum element is : "<<maxi<<endl;

    int mini = *min_element(a,a+7);    //MIN_ELEMENT RETURNS ADDRESS OF MAX ELEMENT..
    cout<<"minimum element is : "<<mini<<endl;
return 0;
}