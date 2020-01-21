#include<iostream>
#include<stdio.h>
#include<cstring>
#include<math.h>
#define minimum 500
#define service_charge 100
#define r 0.15
using namespace std;
class account
{
          protected:
           char name[100];
                     int ac_number;
           char ac_type[100];
                  public:
          void creat( char *t);
};
void account::creat(char *t)
{
         cout<<" Enter customer name :";
          gets(name);
          strcpy(ac_type,t);
          cout<<" Enter account number :";
          cin>>ac_number;
}
class cur_acct: public account
{
             private:
              float balance;
             public:
              void deposite(float d);
              void withdraw(float w);
              void display();
};
void cur_acct::deposite(float d)
{
          balance=d;
}
void cur_acct::withdraw(float w)
{
            if(balance<w)
          cout<<" sorry your balance is less than your withdrawal amount \n";
           else
            {
                   balance-=w;
                   if(balance<minimum)
 cout<<"\n your current balance is :"<<balance<<" which is less    than"<<minimum<<"\n your account is
discharged by "<<service_charge<<"TK \n"<<" You must store "<<minimum<<"TK to avoid discharge \n "<<" Do you
want to withdraw ? press 1 for yes press 0 for no \n"<<" what is your option ?";
                 int test;
                           cin>>test;
                   if(test==0)
                     balance+=w;
         }
}
void cur_acct::display()
{
                cout<<"\n Now balance = "<<balance<<"\n";
}
class sav_acct:public account
{
                          float balance;
                         int d,m,y;
               public:
               void deposite(float d);
               void withdraw(float w);
              void display();
              void set_date(int a,int b,int c){d=a;m=b;y=c;}
              void interest();
};
void sav_acct::deposite(float d)
{
           int x,y,z;
           cout<<" Enter today's date(i,e day,month,year) : ";
          cin>>x>>y>>z;
           set_date(x,y,z);
           balance=d;
}
       void sav_acct::withdraw(float w)
{
                 if(balance<w)
              cout<<" sorry your balance is less than your withdrawal amount \n";
                else
                {
                       balance-=w;
                                if(balance<minimum)
                        {
 cout<<"\n your current balance is :"<<balance<<" which is   less than"<<minimum<<"\n your account is discharged
by "<<service_charge<<"TK \n"<<" You must store "<<minimum<<"TK to avoid discharge \n "<<" Do you want to
withdraw ? press 1 for yes press 0 for no \n"<<" what is your option ?";
                             int test;
                              cin>>test;
                             if(test==0)
                              balance+=w;
                      }
              }
}
void sav_acct::display()
{
                cout<<"\n Now balance = "<<balance;
}
void sav_acct::interest()
{
            int D[12]={31,28,31,30,31,30,31,31,30,31,30,31};
            int d1,y1,m1;
            cout<<" Enter today's date :(i,e day,month,year) ";
            cin>>d1>>m1>>y1;
            int iday,fday,i;
            iday=d;
           fday=d1;
          for(i=0;i<m1;i++)
          {
                   fday+=D[i];
          }
         for(i=0;i<m;i++)
         {
                    iday+=D[i];
         }
       int tday;
         tday=fday-iday;
         float ty;
         ty=float(tday)/365+y1-y;
         float intrst;
          intrst=ty*r*balance;
          cout<<" Interest is : "<<intrst<<"\n";
          balance+=intrst;
}
int main()
{
           sav_acct Filo;
          A.creat("savings");
           float d;
           cout<<" Enter your deposit amount : ";
           cin>>d;
          A.deposite(d);
          A.display();
           int t;
          cout<<"\n press 1 to see your interest : \n"
                <<" press 0 to skip : ";
           cin>>t;
         if(t==1)
         A.interest();
         cout<<"\n Enter your withdrawal amount :";
         float w;
         cin>>w;
         A.withdraw(w);
          A.display();
          return 0;
}
