#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include "grade.h"
#include "student-info.h"

using namespace std;

int main() {
  typedef string::size_type str_sz;
  typedef vector<student_info>::size_type vec_sz;

  vector<student_info> students;
  student_info student;
  str_sz max_len = 0;

  while (read(cin, student)) {
    max_len = max(max_len, student.name.size());
    students.push_back(student);
  }

  sort(students.begin(), students.end(), compare);

  for (auto &student : students) {
    cout << student.name;
    cout << string(max_len + 1 - student.name.size(), ' ');

    try {
      double final_grade = grade(student);
      cout << final_grade;
    } catch (exception err) {
      err.what();
    }

    cout << endl;
  }

  return 0;
}
