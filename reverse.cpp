//program to reverse number
#include<iostream>
using namespace std;
int main()
{
    int prn;
    cout<<"enter last 5 digits of PRN:";
    cin>>prn;
    while(prn>0)
    {
        cout<<prn%10<<endl;
        prn=prn/10;
    }
}