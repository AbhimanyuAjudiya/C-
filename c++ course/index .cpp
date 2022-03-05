#include<iostream>
using namespace std;
class sum
{
    int a,b;
    public:
        void setvalue(a,b)
        {
            this->a=a;
            this->b=b;
        }
        void add()
        {
            cout<<"value is:"<<a+b<<endl;
        }

};
int main()
{
    sum s;
    s.setvalue(10,20);
    s.add();
    return 0;
}
