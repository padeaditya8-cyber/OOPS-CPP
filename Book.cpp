#include<iostream>
using namespace std;
class Title{ 
public:
	showTitle(){
		cout << "Title : Hamlet "<<endl;
	}
};
class Author{
	public:
		showAuthor(){
			cout << " Author Name : William Shakespeare"<<endl;
		}
};
class Book:public Title,public Author{
	public:
		showBook(){
			cout << " "<<endl;
		}
};
int main(){
	Book b;
	b.showTitle();
	b.showAuthor();
	b.showBook();
	return 0;
}
