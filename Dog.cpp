#include<iostream>
using namespace std;
class Dog{
	public:
		void Bark(){
			cout<<"Woof!Woof!"<<endl;
		}
};
int main(){
	Dog d;
	d.Bark();
	return 0;
}