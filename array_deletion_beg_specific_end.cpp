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
    
    cout<<"\n Do you want to delete the element at a specific position :"<<endl;
    string res;
    cin>>res;
    if(res=="Yes"||"yes"||"Y"||"y"){
        int num , pos ;
        cout<<"Enter the Number to be deleted :"<<endl;
        cin>>num;
        cout<<"Enter the Position :"<<endl;
        cin>>pos;
        if(pos<=0||pos>size++){
            cout<<"Invalid Position given"<<endl;
        }
        else if(pos==1){
            for(int i=0; i<size;i++){
                a[i]=a[i+1];
                
            }
            size--;
        }
        
        else if(pos==pos-1){
            for(int i=pos-1; i<size;i++){
            }
            size--;
        }
        
        else{
            for(int i=pos-1; i<size;i++){
                    a[i]=a[i+1];
                }
        }
        size--;
        
        
        cout<<"Printing the elements of array :"<<endl;
        for(int i=0;i<size-1;i++){
        cout<<a[i]<<" ";
        }
        
    }
    
    return 0;
    }
