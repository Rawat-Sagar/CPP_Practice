// Topic : STL I ntroduction in C++


//Notes :
//  STL : Standard Template Library
//  It consist of three components
//  a.Container
//  b.Iterator
//  c.Algorithm

// Topic : std::array

// Synatx : std::array<T,N>array;

// Notice :
// 1.std::array is a container that encapsulates fixed size arrays.
// 2.arraysize is needed at compile time.
// 3.Assign by value is actually by value.
// 4.Acess elements :
//     a.at()
//     b.[]
//     c.front()
//     d.back()
//     e.data()    gives access to the underlying array



#include <iostream>
#include <array>
using namespace std;
int main(){
    // Declare
    array<int,5> myarray;

    // Initialization
    std::array<int,5> arr1 = {1,2,3,4,5};             //initializer list
    std::array<int,5> arr2 {1,2,3,4,5};              //uniform initialization


    // Assign using initializer list
    array<int,5> myarray2;
    myarray2 = {1,2,3,4,5};

    cout<<myarray2.at(0)<<endl;
    cout<<myarray2.back()<<endl;
    cout<<myarray2.size()<<endl;

    return 0;



}