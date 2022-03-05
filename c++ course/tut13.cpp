#include<iostream>
using namespace std;

int main()
{
    //array example 
    //1
    int mark [] = {23,34,83,56};

    // cout<<mark[0]<<endl;
    // cout<<mark[1]<<endl;
    // cout<<mark[2]<<endl;
    // cout<<mark[3]<<endl;

    //2
    // int mathmarks[4];
    // mathmarks[0] = 123;
    // mathmarks[1] = 124;
    // mathmarks[2] = 122;
    // mathmarks[3] = 121;

    //you can change the value of an array
    mark[2] = 455;

    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

    //using for loop
    // for (int i = 0; i < 4;i++ )
    // {
    //     cout<<"The value of mark "<<i<<" is "<<mark[i]<<endl;
    // }
    
    //using while loop
    // int i = 0;
    // while (i<4)
    // {
    //     cout<<"The value of mark "<<i<<" is "<<mark[i]<<endl;
    //     i++;
    // }

    //using do while loop
    // int i = 0;
    // do
    // {
    //     cout<<"The value of mark "<<i<<" is "<<mark[i]<<endl;
    //     i++;
    // } while (i<4);
    
    int* p = mark;
    cout<<*(p++)<<endl;
    cout<<*(++p);
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}