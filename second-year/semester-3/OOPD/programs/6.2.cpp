#include<iostream>
// #include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class books {
char author[50];
char title[50];
char pub[50];
double price;
int numcopies;
public:
    books();
int access_title(char a[]);
int access_author(char b[]);
void input();
void display();
void getdata(int);
};
books::books() {
char author[50]={"abc"};
char title[50]={"efg"};
char pub[50]={"hij"};
price=500;
numcopies=50;
}
int books::access_title(char a[]) {
if(strcmp(title,a))
return 0;
else return 1;
}
int books::access_author(char b[]) {
if(strcmp(author,b))
return 0;
else return 1;
}
void books::getdata(int num) {
if(numcopies>=num)
cout<<"\nCost of "<<num<<" books is Rs. "<<(price*num);
else
cout<<"\nSorry! These many copies are not in stock!";
}
void books::input() {
	cout<<" ";
cout<<"\nTitle: ";
cin>>(title);
cout<<"\nAuthor:";
cin>>(author);
cout<<"\nPublisher:";
cin>>(pub);
cout<<"\nPrices:";
cin>>price;
cout<<"\ncopies available:";
cin>>numcopies;
}
void books::display() {
cout<<"Title: "<<title<<endl;
cout<<"Author: "<<author<<endl;
cout<<"Publisher: "<<pub<<endl;
cout<<"Prices: "<<price<<endl;
cout<<"copies available: "<<numcopies<<endl;
}
int main() {
books obj[2];
int n,i;
char ttle[50];
char auth[50];
cout<<"Enter details of 3 books";
for(i=0;i<3;++i)
obj[i].input();
cout<<endl;
cout<<"\n Enter the title\n";
cin>>(ttle);
cout<<"Enter the authors name\n";
cin>>(auth);
for(i=0;i<2;i++)
{
    if((obj[i].access_title(ttle))&&(obj[i].access_author(auth)))
{
    obj[i].display();
cout<<"\nHow many copies? ";
cin>>n;
obj[i].getdata(n);
}
else
cout<<"\nBook unavailable";
}
}
