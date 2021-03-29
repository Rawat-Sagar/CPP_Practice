#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> &v)
{
	cout<<"Size :"<<v.size()<<endl; //v.size() -> O(1)
	for (int i=0 ; i<v.size() ; i++)
	{
		cout<<v[i]<<" ";
	}
	v.push_back(33);
	cout<<endl;
}
int main()
{
	pair<int ,string> p;
	p = {2,"sagar"};
	cout<<p.first<<" "<<p.second<<endl;
	cout<<"other way of initialization"<<endl;
	p = make_pair(1,"rawat");
	cout<<p.first<<" "<<p.second<<endl;


	cout<<"Coping the Pair without reference"<<endl;
	pair<int , string> p1 = p;
	p1.first = 3;
	cout<<p.first<<" "<<p.second<<endl;
	cout<<p1.first<<" "<<p1.second<<endl;


	cout<<"Coping the Pair with reference"<<endl;
	pair<int , string> &p2 = p;
	p2.first = 88;
	cout<<p.first<<" "<<p.second<<endl;
	cout<<p2.first<<" "<<p2.second<<endl;


	pair<int , int> p_array[3];
	p_array[0] = {1,2};
	p_array[1] = {2,3};
	p_array[2] = {3,4};
	cout<<"Pair of Arrays"<<endl;
	
	for(int i=0;i<3;i++)
	{
		cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
	}

	cout<<"After Swapping "<<endl;
	swap(p_array[0],p_array[2]);
	for(int i=0;i<3;i++)
	{
		cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
	}

	cout<<"VECTOR INTRO"<<endl;

	vector<int> v;
	int n;
	cout<<"Enter the Size :"<<endl;
	cin>>n;
	cout<<"Enter the Elements :"<<endl;
	for(int i=0 ; i<n ; i++)
	{
		int x;
		cin>>x;
		v.push_back(x); //O(1)

	}

	printVector(v);

	vector<int> v1(10,1);
	v1.push_back(20); //last mein add krta hai O(1)
	printVector(v1);
	v1.pop_back(); //last se remove krta hai O(1)
	printVector(v1);

    cout<<"Copying of Vector :"<<endl;
	vector<int> &v2 = v; //O(n) if copy O()
	v2.push_back(2);
	cout<<"Print V :"<<endl;
	printVector(v);
	cout<<"Print V2 :"<<endl;
	printVector(v2);




	return 0;
}
