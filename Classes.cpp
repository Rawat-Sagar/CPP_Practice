#include <iostream>
#include <string>
using namespace std;

class Employee{
    public:
    string name;
    int salary;
    
    void printDetails(){
        cout<<"Name : "<<this->name<<endl;
        cout<<"Salary : "<<this->salary<<endl;
    }
    
};
int main() {
//Classes
Employee emp;
emp.name = "Sagar";
emp.salary = 52000;

//Normal way to print deatils
// cout<<"Name :"<<emp.name<<endl;
// cout<<"Salary :"<<emp.salary<<endl;

//use of function with 'this' keyword:
emp.printDetails();

emp.name = "Rawat";
emp.salary = 82000;

//use of function with 'this' keyword:
emp.printDetails();
return 0;
}



//Output:
Name : Sagar
Salary : 52000
Name : Rawat
Salary : 82000
