#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

vector<string> split(const string &s, const char delimiter) {
  vector<string> ret;
  stringstream ss(s);
  string token;

  while (getline(ss, token, delimiter)) {
    if (token.size()) ret.push_back(token);
  }

  return ret;
};

string join(const vector<string> &v, const char delimiter) {
  string s;

  for (vector<string>::size_type i = 0; i < v.size(); ++i) {
    if (i) s += delimiter;
    s += v[i];
  }

  return s;
};

map<string, string::size_type> get_permutations(const string &s) {
  map<string, string::size_type> ret;

  vector<string> split_s = split(s, ' ');

  for (vector<string>::size_type i = 0; i < split_s.size(); ++i) {
    vector<string> permuted_s;
    string::size_type rotation_index = 0;

    for (vector<string>::size_type j = i; j < split_s.size(); ++j) {
      if (i) rotation_index += split_s[j].size() + 1;
      permuted_s.push_back(split_s[j]);
    }

    for (vector<string>::size_type j = 0; j < i; ++j) {
      permuted_s.push_back(split_s[j]);
    }

    string joined = join(permuted_s, ' ');

    ret.insert({joined, rotation_index});
  }

  return ret;
}

int main() {
  // read lines
  vector<string> lines;
  string line;
  while (getline(cin, line)) lines.push_back(line);

  // get permutations mapped to rotation index
  map<string, string::size_type> permutations;
  for (auto &line : lines) {
    map<string, string::size_type> p = get_permutations(line);
    permutations.insert(p.begin(), p.end());
  }

  // determine max_width for formatting
  string::size_type max_width = 0;
  for (auto &p : permutations) {
    if (p.second) max_width = max(max_width, p.first.size() - p.second);
  }

  // print output
  for (auto &p : permutations) {
    string left_side, right_side;
    if (!p.second) {
      left_side = string(max_width, ' ');
      right_side = p.first;
    } else {
      left_side = p.first.substr(p.second, p.first.size() - p.second);
      left_side = string(max_width - left_side.size(), ' ') + left_side;
      right_side = p.first.substr(0, p.second);
    }

    cout << left_side << string(3, ' ') << right_side << endl;
  }

  return 0;
}
