#include<iostream>
using namespace std;
class Student{
	public:
		virtual void result(){
			cout << "Result: "<<endl;
		}
};
class Pass:public Student{
	public:
		void result(){
			cout << "Status: Pass"<<endl;
		}
};
class Fail:public Student{
	public:
		void result(){
			cout << "Status: Fail"<<endl;
		}
};
int main(){
	Student *ptr;
	
	Pass p;
	Fail f;
	
	ptr= &p;
	ptr->result();
	
	ptr = &f;
	ptr->result();
	
	return 0;
}