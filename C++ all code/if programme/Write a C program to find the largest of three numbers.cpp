#include<iostream>

using namespace std;

int main()

{
    int num1,num2,num3;
    cout<<"Entered The number :"<<endl;
    cin>>num1,num2,num3;
    if(num1>num2 && num1>num3){
        cout<<"Num1 is largest"<<endl;
    }
    else if (num2>num1 && num2>num3)
    {
        cout<<"Num2 is largest "<<endl;
    }
     else
        cout<<"num3 ";

}
