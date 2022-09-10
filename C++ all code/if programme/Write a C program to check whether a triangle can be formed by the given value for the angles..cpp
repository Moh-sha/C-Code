#include<iostream>

using namespace std;

int main()
{
    int x1,x2,x3;
    cout<<"Entered The x1 ,x2 ,x3 degree : "<<endl;
    cin>>x1>>x2>>x3;
    int sum=x1+x2+x3;

    if (sum==180)
    {
        cout<<"triangle  "<<endl;
    }
    else
        cout<<"not triangle"<<endl;

    return 0 ;
}
