#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter The Number :";
    cin>> marks;

    if( marks>=90)
    {
        cout<<"The Grade Is A++:";
    }
    else if( marks>=80)
    {
        cout<<" The Grade Is A:";
    }

    else if( marks >=70)
    {
        cout<<"The Grade Is B++: ";
    }
    else if( marks >=60)
    {
        cout<<" The Grade Is  B:";
    }
    else if( marks >=50)
    {
        cout<<" THe Grade Is C :";
    }
    else if( marks>= 40)
    {
         cout<<" The Grade Is D:";
    }
    else
    {
        cout<<"Fail !!!!!!!!!!!!!!!!!!!!";
    }
    return 0;
}
