#include <iostream>

using namespace std;

int getSum( int num )
{
    if( num == 0 )
        return 0;
    else
        return num + getSum(num-1);
}

int main()
{
    int num, sum;
    cout << "Enter a number:\n";
    cin >> num;
    sum = getSum( num );
    cout << "\nThe Sum = " << sum << endl;
}