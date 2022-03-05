#include<iostream>
using namespace std;

int c= 45;

int main()
{
    //***********************Build in Data type****************
    // int a,b,c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a+b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The globel c is "<<::c;

    //***********float,doubel and long doubel Literals*********
    // float d=34.4F;
    // long double e=34.4L;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4L)<<endl;
    // cout<<"The value of d is "<<d<<endl; 
    // cout<<"The value of e is "<<e<<endl;

    //**************Refrence Variables*************************
    //Abhimanyu-------->abhi----------->jadya--------->code lover
    // float x = 455;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //***********Typecasting***************
    int a = 45;
    float b = 45.46;
    cout<<"The Value of a is "<<(float)a<<endl;
    cout<<"The Value of a is "<<float(a)<<endl;
    
    cout<<"The Value of a is "<<(int)b<<endl;
    cout<<"The Value of a is "<<int(b)<<endl;
    int c = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;

    return 0;
} 