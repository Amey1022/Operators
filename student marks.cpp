//program to find grade of student
#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3,s4,s5;
    float avg;
    cout<<"enter marks of 5 subjects:";
    cin>>s1>>s2>>s3>>s4>>s5;
    avg=(s1+s2+s3+s4+s5)/5;
    if (avg>=90)
    {
        cout<<"Grade O!";
    }
    else if (avg>=80 && avg<90)
    {
        cout<<"Grade A+";
    }
    else if(avg>=70 && avg<80)
    {
        cout<<"Grade A";
    }
    else if(avg>=60 && avg<70)
    {
        cout<<"Grade B+";
    }
     else if(avg>=50 && avg<60)
     {
        cout<<"Grade B";
     }

}
/* OUTPUT
enter marks of 5 subjects:70
80
90
60
80
Grade A
*/
