#include<iostream>
using namespace std;
class Excepthandling
{
               double a;
               double b;
             public:
              void input(double x,double y){a=x;b=y;}
              void division();
};
void Excepthandling::division()
{
        try
        {
                  if(b==0)
                  throw b;
                  else
                   cout<<" a/b = "<<a/b<<"\n";
           }
          catch(int)
           {
                    cout<<" an exception is caught \n";
           }
}
int main()
{
                double d;
                 int m;
                  Excepthandling hasibul;
                 double m1,n1;
                cout<<"Enter two number : ";
                  cin>>m>>n1;
                  try
                      {
                               if(sizeof(d)!=sizeof(m) || sizeof(d)!=sizeof(n1))
                                 throw n1;
                                 else
                                      {
         hasibul.input(m,n1);
          hasibul.division();
                                       }
                          }
                   catch(double)
                      {
                                 cout<<" Caught an exception \n ";
                        }
              return 0;
}
