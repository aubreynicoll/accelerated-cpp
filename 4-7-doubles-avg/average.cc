#include "average.h"

#include <vector>

using namespace std;

double average(const vector<double> &nums) {
  double sum = 0.0;
  for (auto &n : nums) {
    sum += n;
  }
  return sum / nums.size();
}
