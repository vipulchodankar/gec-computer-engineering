#include <iostream>
#include <cstring>

using namespace std;

class tollBooth{
    unsigned int NumberOfCars;
    double TotalMoney;

    public:
        tollBooth(){
            NumberOfCars = 0;
            TotalMoney = 0;
        }

        void payingCar(){
            NumberOfCars ++;
            TotalMoney += 0.50;
        }

        void nopayCar(){
            NumberOfCars ++;
        }

        void display()
        {
            cout<<"Number of cars = "<<NumberOfCars<<endl;
            cout<<"Total Amount of Money = "<<TotalMoney<<endl;
        }
};

int main(){
    tollBooth t;
    char key;

    cout<<"Options:\nEnter 1 for Paying Car.\nEnter 2 for Non Paying Car.\nEnter ESC to display and exit.\nChoose:";

    while(true)
    {
        cin>>key;

        if(key == '1')
            t.payingCar();

        else if(key == '2')
            t.nopayCar();

        else if((int)key == 27 )
        {
            t.display();
            exit(1);
        }
    }
    
}            