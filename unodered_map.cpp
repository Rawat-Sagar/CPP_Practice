
#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int,string > &tm)
{
    cout<<tm.size()<<endl;
    for(auto &pr : tm) //O(mlog(n)
    {
        cout<<pr.first<<" "<<pr.second<<endl;

    }
}

int main()
{
 // Unorderd map
 // Inbuilt implementation
 // Time Complexity
 // Valid keys datatype  : cannot use pair,set,vector inside it. because they dont have hash function internally.
 
    unordered_map<int,string > tm;
    tm[1] = "abc";  //O(1)
    tm[2] = "cdc";
    tm[3] = "acd";
    tm.insert({4,"sagar"});
    print(tm);
   
    // Find And Erase
    auto itr = tm.find(2); //O(1)
    if(itr == tm.end())
    {
        cout<<"No Value";
    }
    else{
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    
    if(itr != tm.end())
    {
        tm.erase(itr);
        cout<<"/////////////////////////";
        print(tm);
    }
   
    
}


// Output :
// 4
// 4 sagar
// 3 acd
// 1 abc
// 2 cdc
// 2 cdc
// /////////////////////////3
// 4 sagar
// 3 acd
// 1 abc


