#include <iomanip>
#include <iostream>
#include <stdexcept>

using namespace std;

int count_digits(int);

int main(int argc, char *argv[]) {
  if (argc != 2) {
    throw domain_error("Call the program with a single integer argument");
  }

  int n = atoi(argv[1]);

  int col_a_width = count_digits(n);
  int col_b_width = count_digits(n * n);

  for (int i = 0; i <= n; ++i) {
    cout << setw(col_a_width) << i;
    cout << " ";
    cout << setw(col_b_width) << i * i;
    cout << endl;
  }

  return 0;
}

int count_digits(int n) {
  int count = 1;
  while (n /= 10) ++count;
  return count;
}
