#include<iostream>

using namespace std;

class Int{
    public:
        int data;

        void InitZero(){
            data = 0;
        }

        void InitNum(int num){
            data = num;
        }

        void Display(){
            cout<<"\nData = "<<data<<endl;
        }

        void Add(int num1,int num2){
            data = num1 + num2;
        }
};

int main(){
    Int i1, i2, i3;
    int num1, num2;

    cout<<"Enter 2 integers to initialize object 2 & object 3:\n";
    cin>>num1>>num2;

    i1.InitZero();
    i2.InitNum(num1);
    i3.InitNum(num2);

    i1.Add(i2.data, i3.data);
    i1.Display();
}