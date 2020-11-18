#include <iostream>
#include <string>
using namespace std;

class Employee{
    public:
    string name;
    int salary;
    
    //Constructor
    Employee(string n,int s ,int sp)
    {
        this->name=n;
        this->salary=s;
        this->secretpassword=sp;
    }
    
    void printDetails(){
        cout<<"Name : "<<this->name<<endl;
        cout<<"Salary : "<<this->salary<<endl;
        
        //private variable displayed within the class
        cout<<"Secret password : "<<this->secretpassword<<endl;
    }
    
    private:
    int secretpassword;
    
};

int main() {
Employee emp("Sagar constructor",250000,2605);
emp.printDetails();

// Cannot use below statement for output as declared private variable
// cout<<emp.secretpassword;

return 0;
}
