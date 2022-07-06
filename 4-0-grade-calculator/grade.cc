#include "grade.h"

#include <vector>

#include "median.h"
#include "student-info.h"

using namespace std;

double grade(double midterm, double final, double median_homework) {
  return midterm * 0.2 + final * 0.4 + median_homework * 0.4;
}

double grade(double midterm, double final, const vector<double> &homework) {
  return grade(midterm, final, median(homework));
}

double grade(const student_info &student) {
  return grade(student.midterm, student.final, student.homework);
}
