#include<iostream>
#include<fstream>

using namespace std;

int main()
{

    ofstream file;
    file.open("File.txt");
    file<<"Hello world"<<endl;
    file.close();
    return 0;




}
