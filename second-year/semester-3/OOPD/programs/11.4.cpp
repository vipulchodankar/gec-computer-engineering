#include<iostream>
#include<fstream>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
               char name[100],n[100],m[100],number[100];
                ifstream  Filo("robin.txt");
                int test;
               cout <<" Press 1  to find mobile number of specified person\n "
                    <<" Press 2  to find name of specified number \n"
                    <<" Press 3 to update number \n"
                    <<" What is your option ?: ";
               cin>>test;
             if(test==1)
             {
                      cout<<" Enter the desired name : ";
                      cin>>n;
                      cout<<"\n";
                      again1:
                     Filo>>name;
                     if(!strcmp(name,n))
                     {
                             Filo.getline(number,100);
                             cout<<setw(-20)<<name<<setw(25)<<number<<"\n";
                      }
                      else
                       {
                                if(Filo.eof()!=0)
                                cout<<" Sorry your input name is not found in list \n";
                                else
                                goto again1;
                      }
             }
           else if(test==2)
             {
                       cout<<" Enter the desired number : ";
                       cin>>n;
                       cout<<"\n";
                       again2:
                       Filo>>name;
                       Filo>>number;
                       if(!strcmp(number,n))
                        {
                              cout<<setw(-20)<<number<<setw(25)<<name<<"\n";
                        }
                       else
                      {
                             if(Filo.eof()!=0)
                             cout<<" Sorry your input number is not found in list \n";
                             else
                             goto again2;
                       }
              }
             else if(test == 3)
               {
                         ofstream hasib("modified.txt");
                         cout<<"Enter the name whose number have to change : ";
                         cin>>n;
                         again3:
                         Filo>>name>>number;
                          if(!strcmp(n,name))
                            {
                                  cout<<" Enter changed mobile number of"<<name<<":   ";
                                  cin>>m;
                                  hasib.setf(ios::left,ios::adjustfield);
                                  hasib.width(20);
                                  hasib<<name;
                                  hasib.setf(ios::right,ios::adjustfield);
                                  hasib.width(15);
                                  hasib<<m<<"\n";
                                  while(Filo)
                                    {
                                       Filo>>name>>number;
                                       hasib.setf(ios::left,ios::adjustfield);
                                       hasib.width(20);
                                       hasib<<name;
                                       hasib.setf(ios::right,ios::adjustfield);
                                       hasib.width(15);
                                       hasib<<number<<"\n";
                                    }
                          }
        else
          {
            if(Filo.eof()!=0)
             cout<<" Sorry your input name is not available \n";
            else
            {
              hasib.setf(ios::left,ios::adjustfield);
              hasib.width(20);
              hasib<<name;
              hasib.setf(ios::right,ios::adjustfield);
              hasib.width(15);
              hasib<<number<<"\n";
              goto again3;
            }
         }
    }
    return 0;

