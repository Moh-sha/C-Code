#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float A,B,C;

    cin>>A>>B>>C;

    cout<<fixed;
    cout<<setprecision(3)<<" TRIANGULO : "<<(A*C)/2<<endl;
    cout<<setprecision(3)<<" CIRCULO : "<<3.14159*(C*C)<<endl;
    cout<<setprecision(3)<<" TRAPEZIO : "<<(A+B)/2*C<<endl;
    cout<<setprecision(3)<<" QUADRADO : "<<B*B<<endl;
    cout<<setprecision(3)<<" RETANGULO : "<<A*B<<endl;

   return 0;

}
