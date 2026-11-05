#include<iostream>
using namespace std;
class Home{
    public:
    virtual void operate(){
        cout << "Home"<<endl;
    }
};
class Fan:public Home{
    public:
    void operate(){
        cout << "Fan"<<endl;
    }
};
class Light:public Home{
    public:
    void operate(){
cout << "Light."<<endl;
    }
};
int main(){
    Home *ptr;

    Fan f;
    Light l;

    ptr = &f;
    ptr->operate();

    ptr = &l;
    ptr->operate();

    return 0;

}
