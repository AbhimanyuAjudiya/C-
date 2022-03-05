#include<iostream>
using namespace std;

struct employee
{
    //data
    int eId;
    char favChar;
    double salary;
};

union money
{
    int rice;
    char car;
    float pound;
};

int main()
{
    enum meal{breakfast, lunch, dinner};
    meal m1 = breakfast;
    cout<<m1<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    // cout<<(m1==0);
    
    // union money m1;
    // m1.rice = 35;
    // // m1.car = 'c';
    // cout<<m1.rice;

    // struct employee abhimanyu;
    // abhimanyu.eId = 1;
    // abhimanyu.favChar = 'a';
    // abhimanyu.salary = 1200000000;
    // cout<<"The employee id is "<<abhimanyu.eId<<endl;
    // cout<<"The employee favchar is "<<abhimanyu.favChar<<endl;
    // cout<<"The employee salary is "<<abhimanyu.salary<<endl;
    return 0;
}