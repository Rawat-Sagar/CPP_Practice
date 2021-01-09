// TOPIC: Map In C++

// NOTES:
// 1. Synatx: map<t1, t2> obj; //where t1 is key type and t2 is value type.
// 2. std::map is associative container that store elements in key value combination
//    where key should be unique, otherwise it overrides the previous value.
// 3. It is implement using Self-Balance Binary Search Tree (AVL/Red Black Tree) .
// 4. It store key value pair in sorted order on the basis of key (assending/decending).
// 5. std::map is generally used in Dictionay type problems.
// 6. key is unique and value is similar.

// Example : Dictionary

#include <iostream>
#include <map>
#include <functional>
#include <vector>
using namespace std;

int main(){
    map<string , int> Map;
    Map["Sagar"] = 260501;
    Map["Sanjay"] = 300603;
    //another way
    Map.insert(make_pair("Mom",88888));

    // loop through map
    for(auto &x :Map){
        cout<< x.first << " " << x.second <<endl;
    }

    //Access using [] operator
    cout<<Map["chotu"]<<endl;

    cout<<"By using greater in map stl : "<<endl;
    map<string , int , greater<string>> Map1;
    Map1["Sagar"] = 260501;
    Map1["Sanjay"] = 300603;
    //another way
    Map1.insert(make_pair("Mom",88888));

    // loop through map
    for(auto &x :Map1){
        cout<< x.first << " " << x.second <<endl;
    }

    cout<< "******For using multiple value then (std::vector) cames in handy : *******"<<endl;

    map<string , vector<int>> Mapvec;
    Mapvec["Sagar"].push_back(260501);
    Mapvec["Sanjay"].push_back(300603);
    Mapvec["Sanjay"].push_back(333333);
    Mapvec["Anish"].push_back(111111);
    
    // loop through map
    for(auto &x :Mapvec){
        cout<< x.first << endl;
        for(auto &y : x.second){
            cout<< y << endl;
        }
    }

    return 0;
}















