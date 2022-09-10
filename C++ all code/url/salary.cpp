#include<iostream>
#include<iomanip>

using namespace std;

int main ()
{
    int number,hour;
    float amount;
    cin>>number;
    cin>>hour;
    cin>>amount;

    cout<<"NUMBER = "<<number<<endl;
    cout<<"SALARY = "<<" U$ "<<fixed<<setprecision(2)<<hour*amount<<endl;


    return 0;





}
