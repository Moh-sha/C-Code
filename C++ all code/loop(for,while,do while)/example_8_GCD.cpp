#include<iostream>
using namespace std;
int main()
{
    int remi;
    int num1;
    int num2;
    cout<<" G C D "<<endl;
    cout<<" L C D "<<endl;

    cout<<"---------"<<endl;
    cout<<"Entered the number 1 : "<<endl;
    cin>>num1;
    cout<<"Entered the number 2 : "<<endl;
    cin>>num2;

    while(num2!=0)
        {
        remi=num1%num2;
        num1=num2;
        num2=remi;

        }

    cout<<"Gcd : "<<num1<<endl;




}
