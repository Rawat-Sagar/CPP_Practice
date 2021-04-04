// Unique String Questions
#include<bits/stdc++.h>
using namespace std;


void print(unordered_set<string> &s)
{
   
    for(string value : s)
    {
        cout<<value<<endl;
    }
   
}


int main()
{
    // Sorted Order and unique element ko store krta hai.
    unordered_set<string> s;
    s.insert("abc"); //O(1)  also for find and erase method.
    s.insert("zsf");
    s.insert("tru");
    s.insert("bcd");
    s.insert("plo");
    s.insert("bcd");
    s.insert("aaa");
    print(s);
    
    int q;
    cout<<"Enter the Elements :"<<endl;
    cin>>q;
    while(q--)
    {
        string str;
        cout<<"Enter the String :"<<endl;
        cin>>str;
        if(s.find(str) == s.end())
        {
            cout<<"No Value present "<<endl;
        }
        else
        {
            cout<<"Yes Value present"<<endl;
        }
    }
    return 0;
}

// Output
// aaa
// plo
// bcd
// abc
// tru
// zsf
// Enter the Elements :
// 2
// Enter the String :
// aaa
// Yes Value present
// Enter the String :
// anbd
// No Value present 


