#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    cout << "Hello world!" <<endl;
    int a[10] ;
    int size; 
    cout<<"Enter the size of array :"<<endl;
    cin>>size;
    cout<<"Enter elements of array :"<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Printing the elements of array :"<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    
    cout<<"\n Do you want to insert the element at a specific position :"<<endl;
    string res;
    cin>>res;
    if(res=="Yes"||"yes"||"Y"||"y"){
        int num , pos ;
        cout<<"Enter the Number to insert :"<<endl;
        cin>>num;
        cout<<"Enter the Position to be insert :"<<endl;
        cin>>pos;
        if(pos<=0||pos>size++){
            cout<<"Invalid Position given"<<endl;
        }
        else{
        for(int i=size-1; i>=pos-1;i--){
            a[i+1]=a[i];
        }
        }
        a[pos-1]=num;
        size++;
        
        
        cout<<"Printing the elements of array :"<<endl;
        for(int i=0;i<size-1;i++){
        cout<<a[i]<<" ";
        }
        
    }
    else{
        cout<<"Thank You";
    }
    return 0;
    }
