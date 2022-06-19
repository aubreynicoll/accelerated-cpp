#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

static const double FINAL_WEIGHT = 0.4;
static const double MIDTERM_WEIGHT = 0.2;
static const double HOMEWORK_WEIGHT = 0.4;

int main() {
  string final_string;
  cout << "Input Final grade: ";
  cin >> final_string;

  const double final_grade = stod(final_string);
  const double weighted_final_grade = final_grade * FINAL_WEIGHT;

  string midterm_string;
  cout << "Input Midterm grade: ";
  cin >> midterm_string;

  const double midterm_grade = stod(midterm_string);
  const double weighted_midterm_grade = midterm_grade * MIDTERM_WEIGHT;

  string homework_string;
  vector<double> homework_grades;
  cout << "Input homework grades, followed by EOF: ";
  while (cin >> homework_string) {
    homework_grades.push_back(stod(homework_string));
  }

  double homework_grade = 0.0;
  const vector<double>::size_type count = homework_grades.size();
  if (count) {
    sort(homework_grades.begin(), homework_grades.end());
    const vector<double>::size_type mid = count / 2;
    homework_grade =
        count & 1 ? homework_grades[mid]
                  : (homework_grades[mid] + homework_grades[mid - 1]) / 2;
  }
  const double weighted_homework_grade = homework_grade * HOMEWORK_WEIGHT;

  const double total_grade =
      weighted_final_grade + weighted_midterm_grade + weighted_homework_grade;

  cout << endl;
  cout << setprecision(3);
  cout << "Your grade is " << total_grade << endl;

  return 0;
}
