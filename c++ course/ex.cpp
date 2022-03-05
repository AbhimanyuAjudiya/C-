#include<iostream>
using namespace std;
class A
{
    public:
    virtual void print()
    {
        cout<<"I am 1"<<endl;
    }
};
class B:public A
{
    public:
    void print()
    {
        cout<<"I an 2"<<endl; 
    }
};
int main()
{
    A *A_pointer;
    A a;
    B b;
    A_pointer=&b;
    A_pointer->print();
    return 0;
}