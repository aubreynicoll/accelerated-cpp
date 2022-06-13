#include <iostream>
#include <string>

using namespace std;

/* 1-0. Compile, execute, and test the programs in this chapter. */

int main() {
  // code
  string name;
  cout << "Enter your name: ";
  cin >> name;

  string greeting = "Hello, " + name + "!";
  string second = "* " + string(greeting.size(), ' ') + " *";
  greeting = "* " + greeting + " *";
  string first(greeting.size(), '*');

  cout << first << endl;
  cout << second << endl;
  cout << greeting << endl;
  cout << second << endl;
  cout << first << endl;

  return 0;
}
