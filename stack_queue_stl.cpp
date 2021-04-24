// Stack Operation and Creation
// --size
// --top element

// --push
// --pop
// --top

// Queue Operation and Creation
// --push
// --pop <At Front>
// --front
#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::stack<int> s;
    s.push(2);
    s.push(3); 
    s.push(4); 
    s.push(5);
    
    
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    
    std::queue<string> q;
    q.push("abc");
    q.push("bcd");
    q.push("cde");
    q.push("def");
    q.push("ghi");
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    
    return 0;
}











