#include<iostream>
using namespace std;

// int sum(int a, int b) // --> acceptable
int sum(int,int); // --> acceptable 
// int sum( int a,b) // --> not acceptable
void g();
int main()
{
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    //num1 and num2 is Actual parameter
    cout<<"The sum is "<<sum(num1, num2);
    g();
    return 0;
}

int sum(int a, int b)
{
    // Formal Parameters a and b will be taking values from Actule parameaters num1 and num2
    int c = a+b;
    return c;
}
void g()
{
    cout<<"\nThanks,\nHave a good day";
}