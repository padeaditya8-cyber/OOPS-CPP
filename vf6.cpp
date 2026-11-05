#include<iostream>
using namespace std;
class Payment{
	public:
		virtual void pay(){
			cout << "Payment."<<endl;
		}
};
class UPI:public Payment{
	public:
		void pay(){
			cout << "UPI"<<endl;
		}
};
class Creditcard:public Payment{
	public:
		void pay(){
			cout << "Credit card."<<endl;
		}
};
class Cash:public Payment{
	public:
		void pay(){
			cout << "Cash"<<endl;
		}
};
int main(){
	Payment *ptr;
	
	UPI u;
	Creditcard c;
	Cash c1;
	
	ptr =&u;
	ptr->pay();
	
	ptr =&c;
	ptr->pay();
	
	ptr =&c1;
	ptr->pay();
	
	return 0;
}