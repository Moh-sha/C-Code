#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //Input

    ofstream file;
    string name;
    file.open("New_File.txt");
    for(int i=0;i<5;i++)
    {
        cout<<"Entered the value : "<<endl;
        getline(cin,name);
        file<<name<<endl;
    }
    cout<<"Data store ! Successfully "<<endl;


  file.close();

   //output

     string line;
     ifstream file1("New_File.txt");
     cout<<"All file are show : " <<endl;
   while(getline(file1,line))
   {

       cout<<line<<endl;
   }
    file1.close();
    return 0;

}
