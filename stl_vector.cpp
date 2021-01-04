// Topic : std::vector


//  Notes :
//  1. std::vector is a sequence and container and also known as Dynamic Array or Array List.
//  2. its size can grow and shrink dynamically , and no need to provide size at compile time.


// Element Access:
//  at() , [] , front() , back() , data().

// Modifiers:
//  insert(), empalce(), push_back(), emplace_back(), pop_back(), resize(), swap() , erase() , clear()


#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // Declaration
    vector<int> vec1;
    vector<int> vec2 (5,20);   //(size = 5,value at all place = 20)
    vector<int> vec3 = {1,2,3,4,5};   //initializer list
    vector<int> vec4 {1,2,3,4,5};  //uniform initialization


    //Accessing Elements
    vec2[3]=10;   //traditional method  if out of index is asked will give you garbage value.
    vec2.at(3)=10; // new method if out of index is asked will give you an exception.

    cout<<vec3.front()<<endl;
    cout<<vec3.back()<<endl;
    cout<<vec3.data()<<endl;











    return 0;
}