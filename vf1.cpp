#include<iostream>
using namespace std;
class Shape{
	public:
        virtual void area(){
        	cout << "Area: "<<endl;
		}
		
};
class Rectangle : public Shape{
	private:
		int length;
		int width;
	public:
		Rectangle(int l,int w){
			length = l;
			width = w;
		}
		void area(){
		    area =length*width;
		    cout << "Area of the rectangle is: "<<length*width<<endl;
		}
};
class Circle:public Shape{
	private:
		int radius;
		public:
			Circle(int r){
				radius = r;
			}
			void area(){
			cout << "Area of the circle:"<<area = 3.14*radius*radius<<endl;
		}
};
int main(){
	Shape *ptr;
	Rectangle r(10,20);
	
}