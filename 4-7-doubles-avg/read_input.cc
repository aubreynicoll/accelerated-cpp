#include "read_input.h"

#include <iostream>
#include <vector>

using namespace std;

istream &read_numbers(istream &in, vector<double> &nums) {
  if (in) {
    nums.clear();

    double buf;
    while (in >> buf) {
      nums.push_back(buf);
    }
  }
  return in;
}
