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
             void P_list();
             void receipt();


};

void Shoping_market :: menu()
{

    int choice;
    string e_mail;
    string password;
    cout<<"\t\t\t\t_______________________________________ \n";
    cout<<"\t\t\t\t                                        \n";
    cout<<"\t\t\t\t      Supermarket Project Menu          \n";
    cout<<"\t\t\t\t                                        \n";
    cout<<"\t\t\t\t________________________________________\n";
    cout<<"\t\t\t\t|                                      |\n";
    cout<<"\t\t\t\t|         1)administrator              |\n";
    cout<<"\t\t\t\t|         2)buyer                      |\n";
    cout<<"\t\t\t\t|                                      |\n";
    cout<<"\t\t\t\t|         3)Exit                       |\n";
    cin>>choice;

    switch(choice)
    {

    case 1 :
        cout<<"\t\t\t\t|   Please Log IN   |\n";
        cout<<"\t\t\t\t|  Entered the email |\n";
        cin>>email;
        cout<<"\t\t\t\t|  Entered the password |\n";
        cin>>password;
        if(email=="shafin@gmail.com"  && password=="123")
        {
                administrator();
        }
        else
        {
            cout<<"Invalid email and password "<<endl;
        }
        break;
    }


    case 2 :
        {
            buyer();
        }
    case 3 :

      {

          exit(0);
      }
    default :
        {
            cout<<"Please Try again " <<endl;
        }

}
goto m;


}


void Shoping_market :: administrator()
{
    m;
    int choice;
    cout<<"\t\t\t\t|   Administrator Menu   |\n";
    cout<<"\t\t\t\t|   Add    the Product   |\n";
    cout<<"\t\t\t\t|   Modify the Product   |\n";
    cout<<"\t\t\t\t|   Delete the Product   |\n";
    cout<<"\t\t\t\t|   Back   to  Menu      |\n";

    cout<<"Please  enter your choice "<<endl;
    cin>>choice;

    switch(choice)
    {
    case 1 :
         add();
         break;

    case 2 :
            edit();
            break;
    case 3  :
            rem();
            break;
    case 4  :
           menu();
           break;

    default :
           cout<<"Invalid choice "<<endl;
    }

    }

  goto m;



}

void Shoping_market :: buyer()
{
    m;
    int choice;
    cout<<"\t\t\t\t|        Buy    |\n";
    cout<<"\t\t\t\t|_______________________  |\n";
    cout<<"\t\t\t\t|    1) Buy Product   |\n";
    cout<<"\t\t\t\t|    2)Go back        |\n";
    cout<<"\t\t\t\t|  Enter the choice    :  |\n";
    cin>>choice;
    switch(choice)
     {
     case 1 :
          receipt();
          break;
     case 2 :
           menu();

     default :
          cout<<"Invalid Choice "<<endl;
     }
     goto m;




     }

}


void Shoping_market :: add()
{
    m;
    fstream data;
    int c;
    int token=0;
    float p;
    float d;
    string n;
    cout<<"\t\t\t\t|        Add new product   |\n";
    cout<<"\t\t\t\t|        Product Code      |\n";
    cin>>P_code;
    cout<<"\t\t\t\t|        Product Name      |\n";
    cin>>P_name;
    cout<<"\t\t\t\t|        Product Discount      |\n";
    cin>>discount;
    cout<<"\t\t\t\t|        Product Price      |\n";
    cin>>price;


    data.open("database.txt",ios::out);
    if(!data)
    {

      data.open("database.txt",ios::out);
      data<<" "<<P_code<<" "<<P_name<<price<<discount<<endl;
      data.close();
    }

    else
    {
        data>>c>>n>>p>>d;
        while(!data.eof())
        {
         if(c==P_code)
            {
                token++;
            }

        data>>c>>n>>p>>d;

        }
      data.close();

    }

    if(token==1)
     goto m;



}
















