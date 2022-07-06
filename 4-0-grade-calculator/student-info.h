#ifndef __student_info_h__
#define __student_info_h__

#include <iostream>
#include <string>
#include <vector>

struct student_info {
  std::string name;
  double midterm, final;
  std::vector<double> homework;
};

bool compare(const student_info &, const student_info &);

std::istream &read(std::istream &, student_info &);

std::istream &read_homework(std::istream &, std::vector<double> &);

#endif
