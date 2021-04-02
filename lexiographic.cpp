// Given N strings , print unique strings in lexiographical order with their Frequency
// cannot use hashing ,as we treat array index as number but not with strings.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> m;
    int size;
    cout<<"Enter the Size :"<<endl;
    cin>>size;
    for(int i=0; i<size; i++)
    {
        string s;
        cout<<"Enter the String :"<<endl;
        cin>> s;
        m[s]++;
    }
    cout<<"Print the Frequency :"<<endl;
    for(auto pr :m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    return 0;
}


// Output
// Enter the Size :
// 5
// Enter the String :
// abc
// Enter the String :
// dfg
// Enter the String :
// abc
// Enter the String :
// dfg
// Enter the String :
// klp
// Print the Frequency :
// abc 2
// dfg 2
// klp 1




