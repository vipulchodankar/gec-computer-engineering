#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
class staff
{
           protected:
                int code;
                char name[100];
               public:
               void set_info(char *n,int c)
               {
                              strcpy(name,n);
                               code=c;
               }
};
class education:public staff
{
    protected:
             char quali[100];
              public:
              void set_qualification(char *q){strcpy(quali,q);}
};
class teacher : public education
{
                 protected:
                 char sub[100],publication[100];
                 public:
                            void set_details(char *s,char *p)
                  {
                       strcpy(sub,s);strcpy(publication,p);
                  }
                  void show()
                  {
                            cout<<" name "<<setw(8)<<"code"<<setw(15)
                                  <<"subject"<<setw(22)<<"publication"
                                  <<setw(25)<<"qualification"<<endl
                                  <<name<<setw(8)<<code<<setw(25)
                         <<sub<<setw(18)<<publication<<setw(25)<<quali<<endl;
                   }
};
     class officer:public education
{
               char grade[100];
               public:
               void set_details(char *g)
               {
                       strcpy(grade,g);
               }
                void show()
                {
                      cout<<" name "<<setw(15)<<"code"<<setw(15)<<"Catagory "
                             <<setw(22)<<"Qualification"<<endl<<name<<setw(10)
                              <<code<<setw(15)<<grade<<setw(25)<<quali<<endl<<endl;
                }
};
class typist: public staff
{
        protected:
          float speed;
           public:
           void set_speed(float s)
                      {
                            speed=s;
                      }
};
class regular:public typist
{
      protected:
           float wage;
       public:
          void set_wage(float w){wage=w;}
          void show()
          {
                   cout<<" name "<<setw(16)<<"code"<<setw(15)<<"speed"
                        <<setw(15)<<"wage"<<endl<<name<<setw(10)<<code
                        <<setw(15)<<speed<<setw(15)<<wage<<endl<<endl;
          }
};
class casual:public typist
{
       float wage;
        public:
         void set_wage(float w){wage=w;}
         void show()
          {
                 cout<<" name "<<setw(16)<<"code"<<setw(15)<<"speed"
                       <<setw(15)<<"wage"<<endl<<name<<setw(10)<<code
                       <<setw(15)<<speed<<setw(15)<<wage<<endl<<endl;
          }
};
int main()
{
        teacher t;                                    t.set_info("Ataur",420);
t.set_details("programming with c++"," Tata McGraw Hill");
t.set_qualification("PHD from programming ");
         officer o;
          o.set_info("Md. Rashed",222);
          o.set_details("First class");
          o.set_qualification("2 years experienced");
                   regular rt;
                           rt.set_info("Robiul Awal",333);
rt.set_speed(85.5);
rt.set_wage(15000);
         casual ct;
             ct.set_info("Kawser Ahmed",333);
          ct.set_speed(78.9);
          ct.set_wage(10000);
       cout<<"  About teacher: "<<endl;
         t.show();
        cout<<" About officer:"<<endl;
         o.show();
         cout<<" About regular typist :"<<endl;
          rt.show();
         cout<<" About casual typist :"<<endl;
          ct.show();
       return 0;
}
