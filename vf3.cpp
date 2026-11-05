#include<iostream>
using namespace std;
class Vehicle{
	public:
		virtual void display(){
			cout << "Vehicle information."<<endl;
		}
};
class Car : public Vehicle{
	public:
		void display(){
			cout <<"This is a car."<<endl;
		}
};
class Bike: public Vehicle{
	public:
		void display(){
			cout << "This is a bike."<<endl;
		}
};
int main(){
	Vehicle *ptr;
	
	Car c;
	Bike b;
	
	ptr = & c;
	ptr->display();
	
	ptr =&b;
	ptr->display();
	
	return 0;
}