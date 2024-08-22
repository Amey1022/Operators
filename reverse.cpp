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
/* OUTPUT
enter last 5 digits of PRN:23019
9
1
0
3
2
*/
