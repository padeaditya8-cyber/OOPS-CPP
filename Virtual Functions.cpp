#include<iostream>
using namespace std;
class Animal{
	public:
		void sound(){
			cout << "Animal makes sound."<<endl;
		}
};
class Dog:public Animal{
	void sound(){
		cout << "Dog barks."<<endl;
	}
};
int main(){
	Animal *ptr;
	Dog d;
	ptr = &d;
	ptr -> sound();
	return 0;
}