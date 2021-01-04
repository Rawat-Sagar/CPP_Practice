// Topic : std::vector<T>

// syntax : std::set<T> objname;

// 1.std:set is an Associative Container  that conatins a sorted set of unique objects of type key.
// 2.it is usually implemented using RED-BLACK TREE .
// 3.Insertion , Removal , Search have logrithmic complexity.
// 4.If we want to store user defined data type in set then we will provide 
//    compare function so that set can store them in sorted order.
// 5.We can pass the order of sorting while constructing set objects.


// Bottom Line:
//It store unique elements and they are stored in sorted oreder (ASC/DESC)


#include <iostream>
#include <set>
#include <string>
#include <functional>
using namespace std;
int main()
{
    set<int> set1 = {6,8,1,2,3,4,5,1,2,3,4,5}; //default
    for(const auto& x: set1){
        cout<< "set1 :"<< x << endl;
    }

    set<int,std::greater<int>> set2 = {6,8,1,2,3,4,5,1,2,3,4,5}; //desc order
    for(const auto& x: set2){
        cout<< "set2 :"<< x << endl;
    }

    set<int,std::less<int>> set3 = {6,8,1,2,3,4,5,1,2,3,4,5}; //asec order
    for(const auto& x: set3){
        cout<< "set3 :"<< x << endl;
    }
    return 0;
}