#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m)
{
    cout<<m.size()<<endl;
    for(auto &pr : m) //O(mlog(n)
    {
        cout<<pr.first<<" "<<pr.second<<endl;

    }
}
int main()
{
    map<int , string > m;
    m[1] = "abc";  //O(logn)
    m[2] = "cdc";
    m[3] = "acd";
    m.insert({4,"sagar"});
    m.insert(pair<int,string> (0,"rawat"));
    map<int,string > :: iterator it;
    for(it=m.begin(); it!=m.end(); ++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    
    // Find And Erase
    auto itr = m.find(0); //O(logn)
    if(itr == m.end())
    {
        cout<<"No Value";
    }
    else{
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    
    if(itr != m.end())
    {
        m.erase(itr);
        cout<<"/////////////////////////";
        print(m);
    }
    
    
    
    

    return 0;
}
