#include<iostream>
using namespace std;

template<class R>

 R sum(R x,R y)
{
    return x+y;
}
int main()
{
    cout<<sum<int x>(10,5)<<endl;
}
