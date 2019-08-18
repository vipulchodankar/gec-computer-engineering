#include<iostream>

using namespace std;

class Int{

    // int data;

    public:

        int data;

        Int(){
            data = 0;
        }

        Int(int num){
            data = num;
        }

        void Display(){
            cout<<data<<endl;
        }

        void Add(int num1,int num2){
            data = num1 + num2;
        }
};

int main(){
    Int i1, i2(5), i3(10);
    i1.Add(i2.data, i3.data);
    i1.Display();
}