#include <iostream>

using namespace std;

class Time{
    int hours, minutes, seconds;

    public:
        Time(){
            hours = 0;
            minutes = 0;
            seconds = 0;
        }

        Time(int h, int m, int s){
            hours = h;
            minutes = m;
            seconds = s;
        }

        void Display(){
            cout<<"Time: "<<hours<<":"<<minutes<<":"<<seconds<<endl;
        }

        void Add(Time t1, Time t2){
            seconds = t1.seconds + t2.seconds;
            if(seconds > 60)
            {
                minutes++;
                seconds-=60;
            }

            minutes += t1.minutes + t2.minutes;
            if(minutes > 60)
            {
                hours++;
                minutes-=60;
            }

            hours += t1.hours + t2.hours; 
        }
};

int main()
{
    Time t1(24,12,30), t2(4, 5, 19), t3;
    t3.Add(t1, t2);
    t3.Display();
}