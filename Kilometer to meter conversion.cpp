#include<iostream>
using namespace std;
class Kilometer{
	public:
	int km;
	
	Kilometer(int k){
       km = k;
	}
};
class Mile{
	public:
		float miles;
		Mile(Kilometer k){
			miles = k.km * 0.621;
		}
		void display(){
			cout << "Distance in miles:"<<miles << "m"<<endl;
		}
};
int main(){
	Kilometer k(10);
	Mile m = k;
	m.display();
	return 0;
	
}