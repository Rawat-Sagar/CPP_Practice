#include <iostream>
#include <string>
#include <set>
#include <functional>
using namespace std;


class Person{
    public:
        float age;
        string name;
    bool operator  < (const Person& rhs) const{ return age<rhs.age;} //less or asec
    bool operator  > (const Person& rhs) const{ return age>rhs.age;} //greater or desc

    

};

int main(){
    set<Person> set1={{25 , "Sagar"},{30, "Sanjay"},{20,"John"}};
    for(const auto& x: set1){
        cout<<"SET1(default) : "<< x.age <<" " << x.name <<endl;
    }

    set<Person,std::less<>> set2={{25 , "Sagar"},{30, "Sanjay"},{20,"John"}};
    for(const auto& x: set2){
        cout<<"SET2(less) : "<< x.age <<" " << x.name <<endl;
    }

    set<Person,std::greater<>> set3={{25 , "Sagar"},{30, "Sanjay"},{20,"John"}};
    for(const auto& x: set3){
        cout<<"SET3(greater) : "<< x.age <<" " << x.name <<endl;
    }
    return 0;
}