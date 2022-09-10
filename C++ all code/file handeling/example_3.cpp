#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file;
    string name;
    file.open("Advance.txt",ios::out|ios::app);
    cout<<"Entered the name : ";          //adding the value
    getline(cin,name);  //user input
    file<<"Hello world"<<endl;
    file<<name<<endl;
    file.close();





}
