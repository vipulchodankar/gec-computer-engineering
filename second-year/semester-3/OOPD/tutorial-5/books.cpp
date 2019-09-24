#include<iostream>
#include<cstring>

using namespace std;

class books{
  int bookNumber, booksIssued, bookCopies;
  float bookPrice;
  char bookName[20], author[20], publisher[20];

  public:
    void init() {
      bookNumber = 0;
      booksIssued = 0;
      bookCopies = 0;
      bookPrice = 0;
      strcpy(bookName, "BookName");
      strcpy(author, "BookAuthor");
      strcpy(publisher, "BookPublisher");
    }

  inline void assignBook() {
    booksIssued = bookCopies > booksIssued ? booksIssued++ : booksIssued;
  }

  inline void returnBook() {
    booksIssued--;
  }

  void displayBooks() { 
    cout<<"Book Number: "<<bookNumber<<endl<<"Book Name: "<<bookName<<endl<<"Author: "<<author<<endl<<"Publisher: "<<publisher<<endl<<"Number of books issued: "<<booksIssued<<endl<<"Number of copies: "<<bookCopies<<endl;
  }
};

int main(){
  books b;
  b.init();
  b.displayBooks();
}