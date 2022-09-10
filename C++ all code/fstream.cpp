#include<iostream>
#include<fstream>

using namespace std;


int main()
{
    ofstream file;
    file.open("Text.txt");   //create a file
    file<<"I love poroma "<<endl;
    file.close();
    return 0;




}
