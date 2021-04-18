/*Designed by Srishti */
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
using namespace std;

class type1
{
    long double n,result=1;
   long int n2,p=1,i=1,c;
    char choice;

public:
    void Calculation1()
    {
         cout<<"\n";
            cout<<"e for Exponent:\n";
            cout<<"! for Factorial:\n";
           // cout<<"
        cout<<"\n";

        cout<<"Choose a symbol:\n";
            cin>>choice;
            cout<<"\n";

         if(choice!='e')
         {
        cout<<"\nEnter number :"<<endl;
        cin>>n;
         }
         else
         {
           cout<<"\nEnter number :"<<endl;
        cin>>n2;
         c=n2;
        cout<<"\nEnter power value:"<<endl;
        cin>>p;
         }


            switch(choice)
            {
            case'e':
                {
                 while(i<p)
                 {
                   n2=n2*c; //exponential logic
                   i++;
                 }
                    result=n2;
                    break;
                }
            case'!':
               {
                for(;n>0;n--) //factorial logic
                {
                    result=result*n;
                }
                break;
               }
            default:
                 cout<<"Wrong choice made (*_*)";
            }

        cout<<"\nResult is: "<<result<<endl;
    }
};

class type2
{
long double a,b,r;
char c;
public:

        void Calculation2()
        {
            cout<<"\n";
            cout<<"[+] for addition:\n";
            cout<<"[-] for subtraction:\n";
            cout<<"[*] for multiplication:\n";
            cout<<"[/] for division:\n";
            cout<<"[%] for Percentage:\n";
            cout<<"\n";

            cout<<"Choose a symbol:\n";
            cin>>c;
            cout<<"\n";

            cout<<"\nEnter first number:\n";
            cin>>a;
            cout<<"Enter second number:\n";
            cin>>b;


            switch(c)
            {
            case'+':
                {r=a+b;
                break;}
            case'-':
                {r=a-b;
                break;}
            case'*':
                {r=a*b;
                break;}
            case'/':
                {r=a/b;
                break;}
            case'%':
                {r=(a/b)*100;
                break;}
            default:
                {   cout<<"\n                   E R R O R "<<endl;
                    cout<<"\n        {*_*}--Wrong choice made..!!--{*_*}"<<endl;
                }
            }

            if(c=='%')
            cout<<"\nResult is: "<<r<<" %"<<endl;
            else
                cout<<"\nResult is: "<<r<<endl;

        }

};

class type3
{
    long double cm=0,m=0,km=0,deg=0,feh=0,minu=0,sec=0,hour=0;
public:
    void length();
    void time();
    void temp();
    void currency();

};


class checkType: public type2,public type1
{
  int Type,i,j;
  char confirm;
  public:
      void type()
    {

        cout<<"\nSelect the type of calculation :"<<endl;
        cout<<"[1] Single word"<<endl;
        cout<<"[2] Multiple words"<<endl;
        //cout<<"[3] Converter"<<endl;
        cin>>Type;
        if(Type>3)
            cout<<"\n               [*_*] No such choice exist !! [*_*]"<<endl;

    }
     void response()
    {
        cout<<"\n";
        cout<<"\nHow many Calculations do you have..?";
        cin>>j;
    }
    void selectType()
    {
        if(Type==1)
            Calculation1();
        else if(Type==2)
            Calculation2();
        else if(Type==3)
           // Calculation3();
           cout<<"3";
        else
       {
        cout<<"\n           [*_*]-- ERROR! Restart Program --[*_*]"<<endl;
        exit(0);
       }



        for(i=1;i<=j-1;i++)
        {
            cout<<"\nAnything else..?[Y/N]"<<endl;
             cin>>confirm;

            if(confirm=='y'||confirm=='Y')

            {
                if(Type==1)
                   Calculation1();
                else
                    Calculation2();

            }
            else
            {
                cout<<"\nThank you for visiting..!!"<<endl;
                cout<<"(^_^)"<<endl;

            }

        }
    }

};



int main()
{
cout<<"--------------------------------------------------------------------------------\n";
cout<<"                                  CALCULATOR\n";
cout<<"\n--------------------------------------------------------------------------------\n";
cout<<"\n\n";

    checkType o1;
    o1.type();
    o1.response();
    o1.selectType();

cout<<endl<<"--------------------------------------------------------------------------------";
cout<<"\t"<<"\t"<<"                                Designed by : Srishti Aggarwal";
cout<<endl<<endl<<endl;
 exit(0);//terminate program execution

return 0;


}



