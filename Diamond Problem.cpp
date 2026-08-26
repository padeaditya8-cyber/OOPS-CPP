#include<iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void getPerson()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }
};

class Student : virtual public Person
{
protected:
    int rollNo;

public:
    void getStudent()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }
};

class Employee : virtual public Person
{
protected:
    int empId;

public:
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;
    }
};

class TeachingAssistant : public Student, public Employee
{
public:
    void display()
    {
        cout << "\n----- Teaching Assistant Details -----" << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Employee ID : " << empId << endl;
    }
};

int main()
{
    TeachingAssistant ta;

    ta.getPerson();
    ta.getStudent();
    ta.getEmployee();

    ta.display();

    return 0;
}