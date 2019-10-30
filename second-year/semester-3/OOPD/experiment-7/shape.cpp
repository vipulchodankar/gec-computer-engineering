#include <iostream>

using namespace std;

class shape{
  protected:
    double x, y;

  public:
    void get_data() {
      cout<<"Enter x and y values:\n";
      cin>>x>>y;
    }

    virtual void display_area() = 0;
};

class triangle: public shape{
  double area;

  public:
    void display_area() {
      shape::get_data();
      area = 0.5 * x * y;
      cout << "Area of Triangle = " << area;
    }
};

class rectangle: public shape{
  double area;

  public:
    void display_area() {
      shape::get_data();
      area = x * y;
      cout << "Area of Rectangle = " << area << endl;
    }
};

int main() {
  int opt;
  shape *t;

  cout << "Choose a shape:\n1. Triangle\n2. Rectangle\n -> ";
  cin >> opt;

  switch(opt) {
    case 1: t = new triangle;
            t -> display_area(); 
            break;

    case 2: t = new rectangle;
            t -> display_area(); 
            break;

    default: cout << "Please choose a valid option.\n";
            main();
  }
}