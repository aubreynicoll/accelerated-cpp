#include "student-info.h"

#include <iostream>
#include <vector>

using namespace std;

bool compare(const student_info &a, const student_info &b) {
  return a.name < b.name;
}

istream &read(istream &in, student_info &student) {
  in >> student.name >> student.midterm >> student.final;
  read_homework(in, student.homework);
  return in;
}

istream &read_homework(istream &in, vector<double> &homework) {
  if (in) {
    homework.clear();
    double temp;

    while (in >> temp) {
      homework.push_back(temp);
    }

    in.clear();
  }
  return in;
}
