#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x;
    float y;
    cin>>x>>y;
    cout<<fixed<<endl;
    cout<<setprecision(3)<<x/y<<" km/l"<<endl;

    return 0;
}
