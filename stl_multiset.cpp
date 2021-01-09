// Topic : std::multiset<T>

// Syntax std::multiset<T> objectName;

// 1.std::multiset is an Associative Contaoner that contains a sorted set of duplicate objects of type key.
// 2.It is usually implemented using Red-Black Tree.
// 3.Insertion , Removal , Search have logarithmic complexity.
// 4.IF we want to store user defined data type in multiset then we will have to provide
//  compare function so that
// 5. We can pass the order of sorting while constructing multiset object.

// BOTTOM LINE:
// multiset is similar to set except it can have multiple elements with same value.


#include <iostream>
#include <set>
#include <string>
#include <functional>
using namespace std;

// int main(){
//     multiset<int , less<>> multiSet = {5,2,4,3,2,5};
//     for(const auto& x : multiSet){
//         cout<<"Comapring function less is used : " << x <<endl;
//     }

//     multiset<int , greater<>> multiSet1 = {5,2,4,3,2,5};
//     for(const auto& x : multiSet1){
//         cout<<"Comapring function greater is used :  " << x <<endl;
//     }

//     return 0;

// }



// Example : User Defined
class Person{
    public:
        float age;
        string name;
    bool operator  < (const Person& rhs) const{ return age<rhs.age;} //less or asec
    bool operator  > (const Person& rhs) const{ return age>rhs.age;} //greater or desc
};

int main(){
    multiset<Person , greater<>> multiperson = {{20,"Sagar"},{19,"Sanjay"}};

    for(const auto& x : multiperson){
        cout<< x.name <<" "<<x.age<<endl;
    }

    multiset<Person , less<>> multiperson1 = {{20,"Sagar"},{19,"Sanjay"}};

    for(const auto& x : multiperson1){
        cout<< x.name <<" "<<x.age<<endl;
    }

    return 0;
}






