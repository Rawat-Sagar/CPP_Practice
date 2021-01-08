// Topic  : Container Inside Conatiner

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> Tree;
    int edge , n1 , n2;

    cout<<"Enter the no.of Edges : "<<endl;
    cin>>edge;

    Tree.resize(edge);

    for(int i = 0; i<edge; ++i){
        cout<<"Enter the nodes connected respectively :"<<endl;
        cin>>n1>>n2;
        Tree[n1].push_back(n2);
    }

    for(const auto &e1: Tree){
        for(const auto &e2 : e1){
            cout<< e2;
        }
    }

    return 0;
}