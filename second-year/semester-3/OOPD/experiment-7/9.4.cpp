#include <iostream>

using namespace std;

class Swap {
  private:
    int value;

  public:
    void getData() {
      cout << "Enter Value: ";
      cin >> value;
    }

    void swapData(Swap &o1, Swap &o2) {
      int temp = o1.value;
      o1.value = o2.value;
      o2.value = temp;
    }

    int display () {
      return value;
    }
};

int main () {
  Swap *obj1, *obj2;
  obj1 = new Swap;
  obj1 -> getData();

  obj2 = new Swap;
  obj2 -> getData();

  cout << "\nValue of object 1 is " << obj1 -> display();
  cout << "\nValue of object 2 is " << obj2 -> display();

  obj1 -> swapData (*obj1, *obj2);

  cout << "\n\nValue of object 1 is " << obj1 -> display();
  cout << "\nValue of object 2 is " << obj2 -> display();
}