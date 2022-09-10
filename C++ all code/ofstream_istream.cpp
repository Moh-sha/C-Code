#include<iostream>
#include<fstream>


using namespace std;

int main ()
{

    ofstream file;
    string name;
    file.open("Ip.txt",ios::out|ios::app);
    cout<<"Add successfully ! "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Entered your name : "<<endl;
        getline(cin,name);
        file<<name<<endl;
    }
   file.close();
   cout<<"Registation successfully ! "<<endl;

   ifstream file1("Ip.txt");
   string line;
   while(getline(file1,line))
   {
       cout<<line<<endl;
   }
    file1.close();
}
