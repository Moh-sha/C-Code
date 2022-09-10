#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char name1[4];
    char name2[4];
    for(int i=0;i<4;i++)
    {
        cin>>name1[i];
    }
    for(int i=0;i<4;i++)
    {
        cin>>name2[i];
    }


    int lent=strlen(name1);
    int lent2=strlen(name2);

    if(lent==lent2)
    {
        cout<<"0"<<endl;
    }
    else (lent>lent2)
    {
      cout<<"1"<<endl;
    }

}
