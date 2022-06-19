#include <iostream>
#include <string>

using namespace std;

/* 2-0. Compile and run the program presented in this chapter. */
int main() {
  string name;
  cout << "Please enter your name: ";
  cin >> name;

  cout << endl;

  string greeting = "Hello, " + name + "!";

  const size_t pad = 3;
  const size_t rows = pad * 2 + 3;
  const string::size_type cols = greeting.size() + pad * 2 + 2;

  for (size_t r = 0; r < rows; r++) {
    for (string::size_type c = 0; c < cols; c++) {
      if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
        cout << '*';
      } else if (r == pad + 1 && c == pad + 1) {
        cout << greeting;
        c += greeting.size() - 1;
      } else {
        cout << ' ';
      }
    }
    cout << endl;
  }

  return 0;
}
