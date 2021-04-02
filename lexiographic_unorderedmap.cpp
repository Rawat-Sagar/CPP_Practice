// Given N strings , print unique strings in lexiographical order with their Frequency
// cannot use hashing ,as we treat array index as number but not with strings.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string,int> m;
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
    
    int num;
    cout<<"Enter the Number of Elements to be found :"<<endl;
    cin>>num;
    while(num--)
    {
        string s;
        cout<<"Enter the String :"<<endl;
        cin>> s;
        cout<<"Print the Frequency :"<<endl;
        cout<<m[s]<<endl;
    }
    
    return 0;
}

// Output
// Enter the Size :
// 5
// Enter the String :
// sagar
// Enter the String :
// rawat
// Enter the String :
// rana
// Enter the String :
// amit
// Enter the String :
// stalin
// Enter the Number of Elements to be found :
// 3
// Enter the String :
// Sagar
// Print the Frequency :
// 0
// Enter the String :
// rana
// Print the Frequency :
// 1
// Enter the String :
// rawat
// Print the Frequency :
// 1


