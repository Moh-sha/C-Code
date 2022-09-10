#include<iostream>
using namespace std;

int main ()
{
    char ch;
    cout <<"Entered the Letter "<<endl;
    cin>>ch;

    if(ch=='a' || ch=='e' || ch=='i' || ch== 'o'|| ch=='u')
    {
        cout<<"Vowel "<<endl;
    }
    else
        cout<<"consonant "<<endl;

   return 0;

}
