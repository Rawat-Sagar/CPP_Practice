// Balance Parenthesis
// --using Stack
#include <bits/stdc++.h>
using namespace std;

unordered_map<char,int> symbols = { {'(',-1} , {'{',-2} , {'[',-3} , {')',1} , {'}',2} , {']',3}};

string isBalanced(string s)
{
    std::stack<char> st;
    for(char bracket:s)
    {
        if(symbols[bracket] < 0)
        {
            st.push(bracket);
        }
        else
        {
            if(st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if(symbols[top] + symbols[bracket] != 0)
            {
                return "NO";
            }
        }
    }
    if(st.empty()) return "Yes";
    return "NO";
    
    
}
int main()
{
    int t;
    cout<<"Enter the test cases :"<<endl;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<< isBalanced(s) <<endl;
    }
    
    

    return 0;
}

// Output
// Enter the test cases :
// 3
// ()
// Yes
// {}
// Yes
// []
// Yes






