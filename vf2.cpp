#include<iostream>
using namespace std;
class Employee{
	public:
	  virtual void salary(){
	   	cout << "Employee: "<<endl;
	   }
};
class Manager:public Employee{
	public:
		void salary(){
			cout << "Manager salary: 80,000"<<endl;
		}
};
class Developer:public Employee{
	public:
		void salary(){
			cout << "Developer salary : 50,000"<<endl;
		}
};
int main(){
	Employee *ptr;
	
	Manager m;
	Developer d;
	
	ptr = &m;
	ptr->salary();
	
	ptr= &d;
	ptr->salary();
	
	return 0;
}