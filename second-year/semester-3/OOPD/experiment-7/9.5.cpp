#include <iostream>

using namespace std;

class Sort {
  
  protected:
    int arr[10], size;

  public:
    void getData() {
      cout << "\nHow many elements do you want to enter?: ";
      cin >> size;

      cout << "\nEnter " << size << " elements:\n";
      for (int i = 0; i < size ; i++ ) {
        cin >> arr [i];
      }
    }

    void display () {
      cout << "\nSorted array is: \n";
      for (int i = 0; i < size ; i++ ) {
        cout << arr [i] << endl;
      }
    }

    virtual void sort () {
      int i, j, exchanges, temp;

      for( i = 0 ; i < size - 1 ; i++) {
          exchanges = 0;

          for( j = 0; j < size - i - 1 ; j++) {
              if( arr[j] > arr[j+1]) {
                  temp = arr[j];
                  arr[j] = arr[j+1];
                  arr[j+1] = temp;

                  exchanges++;
              }
          }

          if( exchanges == 0 )
              break;
      }
    }
};

class Descending: public Sort {
  void sort () {
      int i, j, exchanges, temp;

      for( i = 0 ; i < size - 1 ; i++) {
          exchanges = 0;

          for( j = 0; j < size - i - 1 ; j++) {
              if( arr[j] < arr[j+1]) {
                  temp = arr[j];
                  arr[j] = arr[j+1];
                  arr[j+1] = temp;

                  exchanges++;
              }
          }

          if( exchanges == 0 )
              break;
      }
  }
};

int main () {
  int opt;
  Sort *s;

  cout << "Choose which order you wish to sort:\n1. Ascending order\n2. Descending order\n -> ";
  cin >> opt;
  switch (opt) {
    case 1: s = new Sort;
            s -> getData();
            s -> sort();
            s -> display();
            break;

    case 2: s = new Descending;
            s -> getData();
            s -> sort();
            s -> display();
            break;

    default: cout << "Please choose a valid option.\n";
            break;

  }
}