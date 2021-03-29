#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<pair<int,int> > &v)
{
	cout<<"Size :"<<v.size()<<endl; 
	for (int i=0 ; i<v.size() ; i++)
	{
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
	
	cout<<endl;
}

void printVectorarr(vector<int> &a)
{
	cout<<"Size :"<<a.size()<<endl; 
	for (int i=0 ; i<a.size() ; i++)
	{
		cout<<a[i]<<endl;
	}
	
	cout<<endl;
}

int main()
{
    // Vector of Pairs
    vector<pair<int,int> > v = {{1,2},{2,3},{3,4}};
    printVector(v);
    int n;
    cout<<"Enter Size :"<<endl;
    cin>>n;
    for (int i=0 ; i<n ; i++)
	{
        int x , y;
        cin>>x>>y;
		v.push_back({x,y}); //make_pair(x,y)
	}
    printVector(v);


    // Arrays of Vectors
    int N;
    cout<<"Enter the size of Vector of Array :"<<endl;
    cin>>N;
    vector<int> a[N];
    for(int i =0 ; i < N; i++)
    {
        int sz;
        cout<<"Enter the size of Vector :"<<endl;
        cin>>sz;
        for(int j=0; j<sz ; j++)
        {
            int x;
            cout<<"Enter the elements of Vector of Arrays :"<<endl;
            cin>>x;
            a[i].push_back(x);

        }

        // for(int i=0;  i<N; i++)
        // {
        //     printVectorarr(a[i]);
        // }

    }
    for(int i=0;  i<N; i++)
        {
            printVectorarr(a[i]);
        }
    

    // Vectors Of Vectors
    int size;
    cout<<"Enter the Size of Vectors of Vectors :"<<endl;
    cin>>size;
    vector<vector<int> > vecOvec;
    for(int i=0; i<size; i++)
    {
        int sz;
        cout<<"Enter the size of Vector :"<<endl;
        cin>>sz;
        vector<int> temp;

        for(int j=0; j<sz ; j++)
        {
            int x;
            cout<<"Enter the elements of Vector of Vector :"<<endl;
            cin>>x;
            temp.push_back(x);

        }
        vecOvec.push_back(temp);
        

    }
    for(int i=0;  i<vecOvec.size(); i++)
        {
            printVectorarr(vecOvec[i]);
        }


    return 0;
}