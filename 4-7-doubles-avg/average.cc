#include "average.h"

#include <stdexcept>
#include <vector>

using namespace std;

double average(const vector<double> &nums) {
  if (nums.size() == 0) throw domain_error("average of empty set");

  double sum = 0.0;
  for (auto &n : nums) {
    sum += n;
  }
  return sum / nums.size();
}
