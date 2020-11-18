#include <iostream>
#include <string>
using namespace std;
int main() {
    // Write C++ code here
    int i,j ;
    cout<<"Enter the Number of Rows :"<<endl;
    cin>>i;
    cout<<"Entere the Number of Columns :"<<endl;
    cin>>j;
    int arr2d[i][j];
    for(int r = 0; r<i ;r++)
    {
        for(int c = 0; c<j ; c++){
            cout<<"Enter the Elements at : "<<r<<" Row and "<<c<<" Column :"<<endl;
            cin>>arr2d[r][c];
        }
    }
    
    
    for(int r = 0; r<i ;r++)
    {
        for(int c = 0; c<j ; c++){
            cout<<"The Value at "<<r<<" , "<<c<<" is "<<arr2d[r][c]<<endl;
            
        }
    }
    

    return 0;
}

//output:
Enter the Number of Rows :
2
Entere the Number of Columns :
3
Enter the Elements at : 0 Row and 0 Column :
1
Enter the Elements at : 0 Row and 1 Column :
2
Enter the Elements at : 0 Row and 2 Column :
3
Enter the Elements at : 1 Row and 0 Column :
4
Enter the Elements at : 1 Row and 1 Column :
5
Enter the Elements at : 1 Row and 2 Column :
6
The Value at 0 , 0 is 1
The Value at 0 , 1 is 2
The Value at 0 , 2 is 3
The Value at 1 , 0 is 4
The Value at 1 , 1 is 5
The Value at 1 , 2 is 6
