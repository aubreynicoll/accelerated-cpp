#ifndef __grade_h__
#define __grade_h__

#include "student-info.h"

double grade(double, double, double);

double grade(double, double, const std::vector<double> &);

double grade(const student_info &);

#endif
