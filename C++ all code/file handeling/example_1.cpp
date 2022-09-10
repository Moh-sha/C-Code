#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream file;
    file.open("demo.txt"); //create
    file<<"Hello World";//write
    file.close();
    return 0;



}
