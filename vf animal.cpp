#include<iostream>
using namespace std;
class Animal{
	public:
		virtual void sound(){
			cout << "Animal makes sound."<<endl;
		}
};
class Cat:public Animal{
	public:
		void sound(){
			cout << "Meow"<<endl;
		}
};
class Dog:public Animal{
	public:
		void sound(){
			cout << "Bhow"<<endl;
		}
};
class Cow:public Animal{
	public:
		void sound(){
			cout << "Hmm"<<endl;
		}
};
int main(){
	Cat c;
	Dog d;
	Cow c1;
	
	Animal *a[3];
	
	a[0] =&c;
	a[1]=&d;
	a[2]=&c1;
	
	for(int i = 0;i<3;i++){
		a[i]->sound();
	}
	return 0;
}