#include<iostream>
#include<fstream>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
             char name[100],n[100],number[100];
              ifstream  file("tell.txt");
             cout<<" Enter your desired name to find mobile number :" ;
              cin>>n;
        again:
          file>>name;
          if(!strcmp(name,n))
           {
                   file.getline(number,100);
                   cout<<setw(-20)<<name<<setw(25)<<number<<"\n";
           }
         else
          {
                if(file.eof()!=0)
                cout<<" Sorry your input name is not found in list \n";
                 else
                 goto again;
          }
     return 0;
}
