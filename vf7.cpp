#include<iostream>
using namespace std;
class Doctor{
	public:
		virtual void treat(){
			cout << "Treats."<<endl;
		}
};
class Cardiologist:public Doctor{
	public:
		void treat(){
			cout << "Heart."<<endl;
		}
};
class Dentist: public Doctor{
	public:
		void treat(){
			cout << "Tooth"<<endl;
		}
};
class Neurologist:public Doctor{
	public:
		void treat(){
			cout << "Brain"<<endl;
		}
};
int main(){
	Doctor *ptr;
	
	Cardiologist c;
	Dentist d;
	Neurologist n;
	
	ptr= &c;
	ptr->treat();
	
	ptr=&d;
	ptr->treat();
	
	ptr=&n;
	ptr->treat();
	
	return 0;
}