#include<iostream>
using namespace std;
class Product{
	public:
		virtual void price(){
			cout << "Price"<<endl;
		}
};
class Electronics:public Product{
	public:
		void price(){
			cout << "Electronics : 120"<<endl;
		}
};
class Clothing:public Product{
	public:
		void price(){
			cout << "Clothing : 1330"<<endl;
		}
};
class Furniture:public Product{
	public:
		void price(){
			cout << "Furniture:133020"<<endl;
		}
};
int main(){
	Product *ptr;
	
	Electronics e;
	Clothing c;
	Furniture f;
	
	ptr = &e;
	ptr->price();
	
	ptr = &c;
	ptr->price();
	
	ptr = &f;
	ptr->price();
	
	return 0;
	
}