#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2,3,4,5,6,7};
    for(int i=0 ; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

// it++ --> to next iterator
// it+1 --> to next location
    vector<int> :: iterator it = v.begin();
    cout<< (*it) <<endl;
    cout<<(*(it+1))<<endl;
    for(it = v.begin(); it!=v.end(); it++)
    {
        cout<< (*it) <<endl;
    }

    vector<pair<int , int> > vec_pair = {{1,2},{3,4},{5,6}};
    vector<pair<int , int> > :: iterator itt ;
    for(itt = vec_pair.begin(); itt != vec_pair.end(); itt++)
    {
        cout<<(*itt).first <<" "<<(*itt).second << endl;
    }

    // Auto and Range Based Loops
    // copy of value
    for (int value : v)
    {
        cout<<value<<" ";
    }
    cout<<endl;
    
    // actual reference of value
    for (int &value : v)
    {
        value++;
        cout<<value<<"//";
    }
    cout<<endl;

    // for pair
    for (pair<int,int>  value : vec_pair)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    

    for (pair<int,int>  &value : vec_pair)
    {
        cout<<value.first<<"//"<<value.second<<endl;
    }

    // Auto keyword
    auto a = 1;
    cout<<a<<endl;

    for (auto &value : vec_pair)
    {
        cout<<value.first<<"//"<<value.second<<endl;
    }

    




    




    return 0;
}