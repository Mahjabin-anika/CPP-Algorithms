#include<iostream>
using namespace std;
int main()
{
     int num,count=0,i;
     cin>>num;
     for(i=1;i<=num;i++)
     {
         if(num%i==0)
         {
             count++;
         }
     }
     if(count==2)
     {
         cout<<"Prime Number\n";
     }
     else
        {
            cout<<"not a prime number\n";
        }

    return 0;
}
