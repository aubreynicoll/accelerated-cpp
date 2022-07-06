#include <iostream>
#include <vector>

#include "average.h"
#include "read_input.h"

using namespace std;

int main() {
  vector<double> nums;

  read_numbers(cin, nums);

  cout << average(nums) << endl;

  return 0;
}
