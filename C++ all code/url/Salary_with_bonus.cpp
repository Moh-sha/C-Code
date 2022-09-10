#include<bits/stdc++.h>
using namespace std;

int main()
{

    string name;
    double A,B,total=0;

    cin>>name;
    cin>>A>>B;

    total=A+((B/100)*15);
    cout<<fixed;
    cout<<setprecision(2)<<"TOTAL = R$ "<<total<<endl;




}
