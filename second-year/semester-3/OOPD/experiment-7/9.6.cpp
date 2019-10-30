#include <iostream>

using namespace std;

class factorial {
  int result;

  public:
    int calculate (int num) {
      result = 1;

      while( num > 0) {
        result *= num;
        num--;
      }

      return result;
    }
};

int main () {
  factorial *f;
  f = new factorial;
  int num;

  cout << "Enter a number: ";
  cin >> num;

  cout << " Factorial of " << num << " = " << f->calculate(num);
  
}