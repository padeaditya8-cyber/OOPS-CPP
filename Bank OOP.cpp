#include<iostream>
using namespace std;
class Bank{
	public:
		int balance;
		
       void getData(){
       	cout <<"Enter bank balance:";
       	cin>>balance;
	   }
	   void display(){
	   	cout << "----Bank details are as fol2lows-----"<<endl;
	   	cout<<"Bank balance:"<<balance<<endl;
	   }
};
class Amount:public Bank{
    public:
    	int cash;
    	void getwithDraw(){
    		cout << "Enter cash to withdraw: "<<endl;
    		cin>>cash;
		}
		void withdraw(){
			if(balance>=cash){
				balance = balance-cash;
			}else {
				cout <<"Insufficient balance."<<endl;
			}
		}
		void afterwithdrawl(){
			cout << "----After withdrawl-----"<<endl;
			cout << "Remaining balance: "<<balance<<endl;
		}
};
int main(){
	Amount a;
	a.getData();
	a.display();
    a.getwithDraw();
    a.withdraw();
    a.afterwithdrawl();
	return 0;
}