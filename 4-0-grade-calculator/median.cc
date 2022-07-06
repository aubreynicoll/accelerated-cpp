#include "median.h"

#include <algorithm>
#include <stdexcept>
#include <vector>

using namespace std;

double median(vector<double> v) {
  typedef vector<double>::size_type vec_sz;

  vec_sz size = v.size();

  if (!size) throw domain_error("Median of zero elements");

  sort(v.begin(), v.end());

  double ans;
  vec_sz mid = size / 2;

  if (size & 1) {
    ans = v[mid];
  } else {
    ans = (v[mid] + v[mid - 1]) / 2;
  }

  return ans;
}
