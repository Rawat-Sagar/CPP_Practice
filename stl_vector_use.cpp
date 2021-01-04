// Topic  : Best way to use vector in c++

// Problem in Vector

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    for(int i=0; i<32; ++i){
        vec.reserve(50);
        // try with out reserve and with resevre , also u will find the difference 
        // unneccessary copying of array  will be avoided.
        vec.push_back(i);
        cout<<"Vec size:"<< vec.size()<< " "<<" Capacity:"<<vec.capacity()<<endl;    
        }

    return 0;
}