#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
  unordered_map<string, unsigned long> map;

  string buf;
  while (cin >> buf) {
    if (map.count(buf)) {
      map.at(buf)++;
    } else {
      map.insert({buf, 1UL});
    }
  }

  for (auto &p : map) {
    cout << p.first << " => " << p.second << endl;
  }

  return 0;
}
