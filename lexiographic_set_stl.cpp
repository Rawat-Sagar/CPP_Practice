// Unique String Questions
#include<bits/stdc++.h>
using namespace std;


void print(set<string> &s)
{
   
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
    s.insert("tru");
    s.insert("bcd");
    s.insert("plo");
    s.insert("bcd");
    s.insert("aaa");
    print(s);
    return 0;
}

// Output
// aaa
// abc
// bcd
// plo
// tru
// zsf


