#include <iostream>
#include <stdexcept>
#include <vector>

#include "average.h"
#include "read_input.h"

using namespace std;

int main() {
  vector<double> nums;

  while (read_numbers(cin, nums))
    ;

  if (nums.size() == 0) throw domain_error("average of empty set");

  cout << average(nums) << endl;

  return 0;
}
