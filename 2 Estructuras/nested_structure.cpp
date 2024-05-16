#include <iostream>
#include <string>
using namespace std;
struct Book {
  int index;
  string title;
};
struct Library {
  string name;
  Book book1;  // Renamed for clarity
  Book book2;  // Added a second book
};

int main() {
  Library centralLibrary;
  centralLibrary.name = "Biblioteca Central";
  // Set information for book 1
  centralLibrary.book1.index = 42;
  centralLibrary.book1.title = "Math";

  // Set information for book 2
  centralLibrary.book2.index = 101;
  centralLibrary.book2.title = "The Hitchhiker's Guide to the Galaxy";

  // Print book information
  cout << "Book 1:\n";
  cout << "- Index: " << centralLibrary.book1.index << endl;
  cout << "- Title: " << centralLibrary.book1.title << endl;

  cout << "\nBook 2:\n";
  cout << "- Index: " << centralLibrary.book2.index << endl;
  cout << "- Title: " << centralLibrary.book2.title << endl;
  return 0;
}