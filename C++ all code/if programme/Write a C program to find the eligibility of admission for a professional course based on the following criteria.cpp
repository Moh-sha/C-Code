#include<iostream>

using namespace std;

int main ()
{
    int mn,pn,cn;
    cout<<"1.Entered math number : "<<endl;
    cin>>mn;
    cout<<"2.Entered physic number : "<<endl;
    cin>>pn;
    cout<<"3.Entered chemisty number :"<<endl;
    cin>>cn;
    cout<<"4. total number is : " <<cn+mn+pn<<endl;


    if(mn>=65)
    {
        cout<<"1.Math Admission eligibility"<<endl;

    }
    else
        cout<<"Math not eligibility"<<endl;

     if(pn>=55)
    {
        cout<<"2.Physic Admission eligibility"<<endl;

    }
    else
        cout<<"Physic not eligibility"<<endl;

     if(cn>=50)
    {
        cout<<"3.Chemisty Admission eligibility"<<endl;

    }
    else
     cout<<"chemristy is not eligibity"<<endl;

    if(cn+pn+mn >=190)
    {
        cout<<"Total number is OK ! Admission eligibility"<<endl;
    }
    else
    {
        cout<<"4.Total number is not eligibility"<<endl;
    }

     return 0;
}
