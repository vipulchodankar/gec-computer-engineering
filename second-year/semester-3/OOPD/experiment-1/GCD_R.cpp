#include <iostream>

using namespace std;

int getGCD( int num1, int num2, int factor )
{
    if( factor == 1 )
        return 1;

    else if( num1%factor == 0 && num2%factor == 0 )
        return factor;
    
    return getGCD( num1, num2, factor-1 );
}

int main(){
    int num1, num2, gcd;
    cout << "Enter 2 Numbers:\n";
    cin >> num1 >> num2;
    if( num1 < num2 )
        gcd = getGCD( num1, num2, num1 );
    else
        gcd = getGCD( num1, num2, num2) ;

    cout << "\nThe GCD of " << num1 << " & " << num2 << " is " << gcd << endl;
}