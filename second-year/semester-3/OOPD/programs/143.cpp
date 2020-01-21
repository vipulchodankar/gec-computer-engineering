#include<iostream>
#include<string.h>
#include<list>
using namespace std;
//std::list<student> phone_lit;
//std::list<student>:: iterator it; 
class student{

    public:
    char first_name[20];
    int roll_number;
    
    
        student(char *name, int num)
        {
            strcpy(first_name, name);
            roll_number=num;
        }
        void display()
        {
            cout<<first_name<<endl<<roll_number<<endl;
        }

};

void nameSearch(char *name, std::list<student> phone_lit)
{
    std::list<student>::const_iterator it;
    for (it = phone_lit.begin(); it != phone_lit.end(); ++it)
    {
        if(strcmp(name,it->first_name)==0)
        {
            cout<<"Roll number of "<<name<<" is "<<it->roll_number <<endl;
            return;
        }        
    }
    cout<<"Student not found\n";

}

void rollSearch(int num, std::list<student> phone_lit)
{
    std::list<student>::const_iterator it;
    for (it = phone_lit.begin(); it != phone_lit.end(); ++it)
    {
        if(it->roll_number==num)
        }        
    }
    cout<<"Student not found\n";

}

int main()
{
    int ch, num;
    char name[20];    
    std::list<student> phone_lit;
    std::list<student>:: iterator it; 
    student a("A", 1), b("B", 2), c("C", 3), d("D", 4), e("E", 5);
    phone_lit.push_back(a);
    phone_lit.push_back(b);
    phone_lit.push_back(c);
    phone_lit.push_back(d);
    phone_lit.push_back(e);
    while(1)
    {
        cout<<"Choose:\n1. Search student by name.\n2. Search student by roll number.\n3. Exit.\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter name\n";
                cin>>name;
                nameSearch(name, phone_lit);
                break;
            case 2:
                cout<<"Enter roll number\n";
                cin>>num;
                rollSearch(num, phone_lit);
                break;
            case 3:
                exit(1);        
        }
    }
    /*for (it = phone_lit.begin(); it != phone_lit.end(); ++it)
    {
        cout << it->first_name;
    }
    */
    
    return 0;
}