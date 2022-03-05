#include<iostream>

using namespace std;
int main()
{
    /*Loops in c++:
    There are three type of loops in c++:
        1. For loop
        2. While loop
        3. do-While loop
    */
    /*For loop in c++*/
    // int i=1;
    // cout<<1;
    // i++;

    //Syntax for For loop
    // for(initialization; condition; updation)
    // {
        // loop body(C++ code);
    // }

    // for (int i = 1; i <= 100; i++)
    // {
    //     cout<<i<<endl;
    // }

    //Example of infinite loop 
    // for (int i = 1; 34 <= 40 ; i++)
    // {
    //     cout<<i<<endl;
    // }

    /*While loop in c++*/
    //Syntax
    //while(condition)
    //{
    //     c++ stetment;
    // }

    // Printing 1 to 40 using while loop
    // int i = 1;
    // while (i<=40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // } 

    // Example of while loop
    // int i = 1;
    // while (true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // } 

        /*do-While loop in c++*/
    //Syntax
    //do 
    //{
    //     c++ stetment;
    // }while(condition);

    // Example of while loop
    // int i = 1;
    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // }while (false);

    //Table of 10
    int a=1;
    cout<<"Table of 10 is :"<<endl;
    while (a<=10)
    {
        cout<<" "<<a<<" "<<(a*5)<<endl;
        a++;
    }
    return 0;
}