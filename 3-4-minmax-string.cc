#include <iostream>
#include <string>

using namespace std;

int main() {
  string min, max;

  cin >> min;
  max = min;

  string buf;
  while (cin >> buf) {
    if (buf.size() < min.size()) {
      min = buf;
    }
    if (buf.size() > max.size()) {
      max = buf;
    }
  }

  cout << "shortest word: " << min << endl;
  cout << "longest word: " << max << endl;

  return 0;
}
