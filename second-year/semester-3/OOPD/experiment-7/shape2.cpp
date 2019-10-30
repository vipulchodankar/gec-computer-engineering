#include <iostream>

using namespace std;

class shape{
  protected:
    double x, y;

  public:
    void get_data(double v1, double v2 = 0) {
      x = v1;
      y = v2;
    }

    virtual void display_area() = 0;
};

class triangle: public shape{
  double area;

  public:
    void display_area() {
      area = 0.5 * x * y;
      cout << "Area of Triangle = " << area;
    }
};

class rectangle: public shape{
  double area;

  public:
    void display_area() {
      area = x * y;
      cout << "Area of Rectangle = " << area << endl;
    }
};

class circle: public shape{
  double area;

  public:
    void display_area() {
      area = 3.14159 * x * x;
      cout << "Area of Circle = " << area << endl;
    }
};

int main() {
  int opt;
  double x, y;
  shape *t;

  cout << "Choose a shape:\n1. Triangle\n2. Rectangle\n3. Circle\n -> ";
  cin >> opt;

  switch(opt) {
    case 1: t = new triangle;
            cout<<"Enter Base and Height values:\n";
            cin >> x >> y;
            t -> get_data(x, y);
            t -> display_area(); 
            break;

    case 2: t = new rectangle;
            cout<<"Enter Length and Breadth values:\n";
            cin >> x >> y;
            t -> get_data(x, y);
            t -> display_area(); 
            break;

    case 3: t = new circle;
            cout<<"Enter radius value:\n";
            cin >> x;
            t -> get_data(x);
            t -> display_area(); 
            break;

    default: cout << "Please choose a valid option.\n";
            main();
  }
}