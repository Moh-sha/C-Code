#include<iostream>
using namespace std;
int main ()
{
 int i;
 int n;
 int fact=1;
 cout<<"    Factorial "<<endl;
 cout<<"------------------"<<endl;
 cout<<"Entered the number : "<<endl;
 cin>>n;

 for(i=1;i<=n;i++)
 {
     fact=fact*i;

 }
 cout<<"Fact is : "<<fact<<endl;

    return 0;

}
