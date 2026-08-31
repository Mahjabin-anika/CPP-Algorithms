#include<iostream>
using namespace std;
int main()
{
    int num,i;
    long long fact=1;
    cin>>num;
    cout<<endl;
    for(i=1;i<=num;i++)
    {
        fact=fact *i;
    }
    cout<<"Factorial = "<<fact<<endl;

    return 0;
}
