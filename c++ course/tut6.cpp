// There are tow type of header file:
//1. System haeder files : It is come with compiler
#include<iostream>
//2. User defind header files: It is written by programmer 
// #include<this.h> This will produce an error if this.h is not present inthe current directory
using namespace std;

int main()
{
    int a=4, b=5;
    cout<<"Oprators in c++"<<endl;
    cout<<"Following anr the type of Oprators in c++"<<endl;
    //Arithmetic oprators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    
    cout<<endl;

    //Assigment Oprators --> use to assign values of variables
    //int a=3, b=9;
    //char d='d';

    //Comparision oprator
    // cout<<"Following are the comparison oprators in c++"<<endl;
    // cout<<"The value of a == b is "<<(a==b)<<endl;
    // cout<<"The value of a != b is "<<(a!=b)<<endl;
    // cout<<"The value of a >= b is "<<(a>=b)<<endl;
    // cout<<"The value of a <= b is "<<(a<=b)<<endl;
    // cout<<"The value of a > b is "<<(a>b)<<endl;
    // cout<<"The value of a < b is "<<(a<b)<<endl;    
    //Logical oprator
    cout<<"Following are the Logical oprators in c++"<<endl;
    cout<<"The value of logical oprator and oprator ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;  
    cout<<"The value of logical oprator or oprator ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;  
    cout<<"The value of logical oprator not oprator (!(a==b)) is "<<(!(a==b))<<endl;  
    return 0;
}