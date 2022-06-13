#include <iostream>
#include <string>

/* 1-6. What does the following program do if, when it asks you for input, you
   type two names (for example, Samuel Beckett)? Predict the behavior before
   running the program, then try it. */

/**
 * @brief std::cin copies only one word at a time into the name object. The
 * first printed string will show the first name, and the second printed string
 * will show the second.
 *
 * @return int
 */

int main() {
  std::cout << "What is your name? ";
  std::string name;
  std::cin >> name;
  std::cout << "Hello, " << name << std::endl << "And what is yours? ";
  std::cin >> name;
  std::cout << "Hello, " << name << "; nice to meet you too!" << std::endl;
  return 0;
}
