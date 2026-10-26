#include <iostream>
using namespace std;
class Student
{
    private:
    int rollNo;
    string name;
    public:
    Student(int r,string n)
    {
        rollNo=r;
        name=n;
        cout<<"Student Object Created"<<endl;
    }
    void display()
    {
        cout<<"Roll Number: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
    }
    ~Student()
    {
        cout<<"Student object destroyed"<<endl;
    }
};
int main() {
    int a;
    string b;
    cout<<"Enter Your Roll Number:"<<endl;
    cin>>a;
    cout<<"Enter Your Name:"<<endl;
    cin>>b;
    Student s1(a,b);
    s1.display();
    return 0;
}