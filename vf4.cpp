#include<iostream>
#include<string>
using namespace std;
class Bank{
	public: 
  virtual void intrest(){
		cout << "Intrest."<<endl;
	}
};
class SBI : public Bank{
	void intrest(){
		cout << "8 percent"<<endl;
	}
};
class HDFC:public Bank{
	void intrest(){
		cout <<"12 percent."<<endl;
	}
};
int main(){
	Bank *ptr;
	
	SBI s;
	HDFC h;
	
	ptr = &s;
	ptr->intrest();
	
	ptr = &h;
	ptr->intrest();
	
	return 0;
}