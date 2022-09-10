#include<fstream>
#include<iostream>
using namespace std;

class Shoping_market{

   private :
       int P_code;
       float price;
       float discount;
       string P_name;


   public :

             void menu();
             void administrator();
             void buyer();
             void add();
             void edit();
             void rem();
             void list();
             void receipt();


};

void Shoping_market :: menu()
{

    int choice;
    string e_mail;
    string password;
    cout<<"\t\t\t\t_______________________________________ \n";
    cout<<"\t\t\t\t                                        \n";
    cout<<"\t\t\t\t      Supermarket Project Menu                                   \n";
    cout<<"\t\t\t\t                                        \n";
    cout<<"\t\t\t\t________________________________________\n";
    cout<<"\t\t\t\t|                                      |\n";
    cout<<"\t\t\t\t|         1)administrator                             |\n";
    cout<<"\t\t\t\t|         2)buyer                      |\n";
    cout<<"\t\t\t\t|                                      |\n";
    cout<<"\t\t\t\t|         3)Exit                       |\n";


}
