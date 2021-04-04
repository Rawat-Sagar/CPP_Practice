#include<bits/stdc++.h>
using namespace std;


void print(set<string> &s)
{
    cout<<s.size()<<endl;
    
    for(string value : s)
    {
        cout<<value<<endl;
    }
   
}


int main()
{
    // Sorted Order and unique element ko store krta hai.
    set<string> s;
    s.insert("abc"); //log(n)
    s.insert("zsf");
    s.insert("bcd");
    auto itr = s.find("abc");
    
    if(itr != s.end()) //log(n)
    {
        cout<<"/////////////"<<endl;
        cout<<(*itr)<<endl;
        cout<<"/////////////"<<endl;
    }
    print(s);
    if(itr != s.end()) //log(n)
    {
        s.erase(itr);
    }
    print(s);
    
    
    return 0;
}

// Output :
// /////////////
// abc
// /////////////
// 3
// abc
// bcd
// zsf
// 2
// bcd
// zsf


