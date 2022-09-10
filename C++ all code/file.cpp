#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file;
    string name;
    file.open("Student.txt",ios ::out| ios::app);
    cout<<"Entered your name : "<<endl;
    getline(cin,name);
    file<<"Hi , Kemon aso ? asi valo ..tmr name ki "<<name<<endl;
    cout<<"Report successful ! "<<endl;
    file.close();
    return 0;




}
